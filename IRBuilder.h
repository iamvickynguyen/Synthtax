#pragma once

#include <string>
#include <unordered_map>

#include "antlr4-runtime.h"
#include "libs/SynthtaxParserBaseVisitor.h"
#include "libs/SynthtaxParserVisitor.h"

#include <llvm/IR/Constants.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Value.h>
#include <llvm/IR/Verifier.h>
#include <llvm/Support/raw_ostream.h>

#include <iostream> // DEBUG

namespace synthtax_antlr {
class IRBuilder : public SynthtaxParserBaseVisitor {
public:
  IRBuilder(llvm::LLVMContext &context, llvm::Module &module,
            llvm::IRBuilder<> &builder)
      : context_(context), module_(module), builder_(builder) {}

  std::any visitProg(SynthtaxParser::ProgContext *ctx) {
    // TODO
    /*
    outfile << "#include \"include/synths/builtin.hpp\"\n";

    if (ctx->cppHeader() != nullptr)
      visitCppHeader(ctx->cppHeader());

    outfile << "using namespace synths;\n\n";
    */

    for (auto &f : ctx->function()) {
      visitFunction(f);
    }

    return nullptr;
  }

  // TODO
  std::any visitCppHeader(SynthtaxParser::CppHeaderContext *ctx) {
    /*
    std::string header = ctx->getText();
    std::string start = "@header";
    std::string end = "@end_header";
    outfile << header.substr(start.length(),
                             header.length() - start.length() - end.length())
            << '\n';
    */
    return visitChildren(ctx);
  }

  std::any visitFunction(SynthtaxParser::FunctionContext *ctx) {
    llvm::Function *func = std::any_cast<llvm::Function *>(
        visitFuncDeclaration(ctx->funcDeclaration()));

    llvm::BasicBlock *BB = llvm::BasicBlock::Create(context_, "entry", func);
    builder_.SetInsertPoint(BB);

    std::unordered_map<std::string, llvm::Value *> tmp_table = name_value_;

    name_value_.clear();
    for (auto &arg : func->args())
      name_value_[std::string(arg.getName())] = &arg;

    try {
      llvm::Value *return_type =
          std::any_cast<llvm::Value *>(visitFuncBody(ctx->funcBody()));

      // restore symbol table
      name_value_ = tmp_table;

      if (return_type == nullptr)
        builder_.CreateRetVoid();

    } catch (const std::bad_any_cast &e) {
      builder_.CreateRetVoid(); // nullptr
    }

    llvm::verifyFunction(*func);
    return func;
  }

  std::any visitFuncDeclaration(SynthtaxParser::FuncDeclarationContext *ctx) {
    std::string id = ctx->ID()->getText();
    llvm::Type *ty = getType(ctx->TYPE()->getText());

    std::vector<llvm::Type *> arguments;
    if (ctx->formalParameters() != nullptr)
      arguments = std::any_cast<std::vector<llvm::Type *>>(
          visitFormalParameters(ctx->formalParameters()));

    llvm::FunctionType *func_type =
        llvm::FunctionType::get(ty, arguments, false);
    llvm::Function *func = llvm::Function::Create(
        func_type, llvm::Function::ExternalLinkage, id, module_);

    // Set names for all arguments.
    unsigned i = 0;
    for (auto &arg : func->args())
      arg.setName(ctx->formalParameters()->ID()[i++]->getText());

    return func;
  }

  std::any visitFormalParameters(SynthtaxParser::FormalParametersContext *ctx) {
    std::vector<llvm::Type *> arguments;
    arguments.reserve(ctx->ID().size());
    for (int i = 0; i < ctx->ID().size(); ++i) {
      arguments.push_back(getType(ctx->TYPE()[i]->getText()));
    }
    return arguments;
  }

  std::any visitFuncBody(SynthtaxParser::FuncBodyContext *ctx) {
    for (auto &s : ctx->statement())
      visitStatement(s);
    return NULL;
  }

  std::any visitStatement(SynthtaxParser::StatementContext *ctx) {
    if (ctx->varDeclaration() != nullptr)
      visitVarDeclaration(ctx->varDeclaration());
    else if (ctx->expressionStatement() != nullptr)
      visitExpressionStatement(ctx->expressionStatement());
    else if (ctx->ifStatement() != nullptr)
      visitIfStatement(ctx->ifStatement());
    else if (ctx->whileStatement() != nullptr)
      visitWhileStatement(ctx->whileStatement());
    else if (ctx->returnStatement() != nullptr)
      visitReturnStatement(ctx->returnStatement());
    else if (ctx->assignmentStatement() != nullptr)
      visitAssignmentStatement(ctx->assignmentStatement());
    else if (ctx->printStatement() != nullptr)
      visitPrintStatement(ctx->printStatement());
    else if (ctx->printLnStatement() != nullptr)
      visitPrintLnStatement(ctx->printLnStatement());

    return NULL;
  }

  std::any visitVarDeclaration(SynthtaxParser::VarDeclarationContext *ctx) {
    if (ctx->assignmentStatement() != nullptr) {
      try {
        llvm::Value *val = std::any_cast<llvm::Value *>(
            visitAssignmentStatement(ctx->assignmentStatement()));
        llvm::AllocaInst *alloca_instruction =
            builder_.CreateAlloca(getType(ctx->TYPE()->getText()), nullptr,
                                  ctx->assignmentStatement()->ID()->getText());
        name_value_[ctx->assignmentStatement()->ID()->getText()] =
            alloca_instruction;
        builder_.CreateStore(val, alloca_instruction);
      } catch (const std::bad_any_cast &e) {
        std::cerr << "Error: " << e.what() << ", in visitVarDeclaration()\n";
        return NULL;
      }

    } else {
      // TODO: something...
      // TODO: deal with array later
      llvm::AllocaInst *alloca_instruction = builder_.CreateAlloca(
          getType(ctx->TYPE()->getText()), nullptr, ctx->ID()->getText());
      name_value_[ctx->ID()->getText()] = alloca_instruction;
    }

    return NULL;
  }

    std::any
    visitExpressionStatement(SynthtaxParser::ExpressionStatementContext *ctx) {
      return visitExpression(ctx->expression());
    }

    std::any visitIfStatement(SynthtaxParser::IfStatementContext *ctx) {
      try {
        llvm::Value *cond = std::any_cast<llvm::Value *>(visitExpression(ctx->expression()));

        llvm::Function *func = builder_.GetInsertBlock()->getParent();
        llvm::BasicBlock *if_block = llvm::BasicBlock::Create(context_, "if.true", func);
        llvm::BasicBlock *else_block = llvm::BasicBlock::Create(context_, "if.false", func);
        llvm::BasicBlock *merge_block = llvm::BasicBlock::Create(context_, "merge", func);

        llvm::Type* type = cond->getType();

        if (type->isIntegerTy()) {
          cond = builder_.CreateICmpNE(cond, llvm::ConstantInt::get(context_, llvm::APInt(32, 0)), "ifcond");
        } else if (type->isFloatTy()) {
          cond = builder_.CreateFCmpUNE(cond, llvm::ConstantFP::get(context_, llvm::APFloat(0.0)), "ifcond");
        } // else: condition with other types is always true
        
        builder_.CreateCondBr(cond, if_block, else_block);

        // Emit code for the "if true" block
        builder_.SetInsertPoint(if_block);
        if (ctx->block()[0] != nullptr) {
          visitBlock(ctx->block()[0]);
        }

        builder_.CreateBr(merge_block);

        // Emit code for the "if false" block
        builder_.SetInsertPoint(else_block);
        if (ctx->block().size() > 1) {
          visitBlock(ctx->block()[1]);
        }

        builder_.SetInsertPoint(merge_block);

      } catch (const std::bad_any_cast &e) {
        std::cerr << "Error: " << e.what() << ", in visitIfStatement()\n";
        return NULL;
      }

      return NULL;
    }

    std::any visitWhileStatement(SynthtaxParser::WhileStatementContext *ctx) {
      try {
        llvm::Value *cond = std::any_cast<llvm::Value *>(visitExpression(ctx->expression()));
        llvm::Function *func = builder_.GetInsertBlock()->getParent();

        // Loop condition basic block
        llvm::BasicBlock *loop_cond_block = llvm::BasicBlock::Create(context_, "loop.cond", func);
        builder_.CreateBr(loop_cond_block);
        builder_.SetInsertPoint(loop_cond_block);

        llvm::BasicBlock *loop_body_block = llvm::BasicBlock::Create(context_, "loop.body", func);
        llvm::BasicBlock *loop_exit_block = llvm::BasicBlock::Create(context_, "loop.exit", func);

        // Conditional branch instruction
        builder_.CreateCondBr(cond, loop_body_block, loop_exit_block);

        builder_.SetInsertPoint(loop_body_block);

        builder_.CreateBr(loop_cond_block); // jump back to the condition

        if (ctx->block()) {
          visitBlock(ctx->block());
        }

        builder_.SetInsertPoint(loop_exit_block);

      } catch (const std::bad_any_cast &e) {
        std::cerr << "Error: " << e.what() << ", in visitWhileStatement()\n";
        return NULL;
      }

      return NULL;
    }

    std::any visitReturnStatement(SynthtaxParser::ReturnStatementContext *ctx) {
      try {
        llvm::Value *ret = std::any_cast<llvm::Value*>(visitExpression(ctx->expression()));
        builder_.CreateRet(ret);
        return ret;
      } catch (const std::bad_any_cast &e) {
        std::cerr << "Error: " << e.what() << ", in visitReturnStatement()\n";
        return NULL;
      }
    }

  std::any
  visitAssignmentStatement(SynthtaxParser::AssignmentStatementContext *ctx) {
    return visitExpression(ctx->expression());
  }


    std::any visitPrintStatement(SynthtaxParser::PrintStatementContext *ctx) {
      if (ctx->expression() != nullptr) {
        try {
          llvm::Value *val = std::any_cast<llvm::Value*>(visitExpression(ctx->expression()));

          std::string type = getValType(val->getType());
          auto M = builder_.GetInsertBlock()->getModule();
          if (type == "int") {
            llvm::FunctionCallee print_func = M->getOrInsertFunction("printint", builder_.getVoidTy(), builder_.getInt32Ty());
            return builder_.CreateCall(print_func, val);
          } else if (type == "float") {
            llvm::FunctionCallee print_func = M->getOrInsertFunction("printfloat", builder_.getVoidTy(), builder_.getFloatTy());
            return builder_.CreateCall(print_func, val);
          } else if (type == "char") {
            llvm::FunctionCallee print_func = M->getOrInsertFunction("printchar", builder_.getVoidTy(), builder_.getInt8Ty());
            return builder_.CreateCall(print_func, val);
          }

          // TODO: print string
          return NULL;
        } catch (const std::bad_any_cast &e) {
          std::cerr << "Error: " << e.what() << ", in visitPrintStatement()\n";
          return NULL;
        }
      } 

      return NULL;
    }

    std::any visitPrintLnStatement(SynthtaxParser::PrintLnStatementContext *ctx) {
      if (ctx->expression() != nullptr) {
        try {
          llvm::Value *val = std::any_cast<llvm::Value*>(visitExpression(ctx->expression()));

          std::string type = getValType(val->getType());
          auto M = builder_.GetInsertBlock()->getModule();
          if (type == "int") {
            llvm::FunctionCallee print_func = M->getOrInsertFunction("printlnint", builder_.getVoidTy(), builder_.getInt32Ty());
            return builder_.CreateCall(print_func, val);
          } else if (type == "float") {
            llvm::FunctionCallee print_func = M->getOrInsertFunction("printlnfloat", builder_.getVoidTy(), builder_.getFloatTy());
            return builder_.CreateCall(print_func, val);
          } else if (type == "char") {
            llvm::FunctionCallee print_func = M->getOrInsertFunction("printlnchar", builder_.getVoidTy(), builder_.getInt8Ty());
            return builder_.CreateCall(print_func, val);
          }

          // TODO: print string
          return NULL;
        } catch (const std::bad_any_cast &e) {
          std::cerr << "Error: " << e.what() << ", in visitPrintLnStatement()\n";
          return NULL;
        }
      } 

      return NULL;
    }

    std::any visitBlock(SynthtaxParser::BlockContext *ctx) {
      for (auto &s : ctx->statement()) {
        visitStatement(s);
      }
      return NULL;
    }


  std::any visitExpression(SynthtaxParser::ExpressionContext *ctx) {
    llvm::Value *a;

    if (ctx->lessExpression().size() > 0) {
      try {
        a = std::any_cast<llvm::Value *>(
            visitLessExpression(ctx->lessExpression()[0]));
      } catch (const std::bad_any_cast &e) {
        std::cerr << "Error: " << e.what() << ", in visitExpression()\n";
        return NULL;
      }
    }

    // Equality expression (==)
    if (ctx->lessExpression().size() > 1) {
      try {
        llvm::Value *b = std::any_cast<llvm::Value *>(
            visitLessExpression(ctx->lessExpression()[1]));

        std::string aty = getValType(a->getType());
        std::string bty = getValType(b->getType());

        llvm::Value *result;

        // Return 0 or 1 based on the comparison result
        if (aty != bty) return NULL;
        else if (aty == "int") {
          llvm::Value *eq_result = builder_.CreateICmpEQ(a, b);
          result = builder_.CreateSelect(eq_result, builder_.getInt32(1), builder_.getInt32(0));
        } else if (aty == "float") {
          llvm::Value *eq_result = builder_.CreateFCmpUEQ(a, b);
          result = builder_.CreateSelect(eq_result, create_float(1.0), create_float(0.0));
        } else { // NOTE: other types comparison is always true for now
          result = builder_.getInt32(1);
        }

        return result;
      } catch (const std::bad_any_cast &e) {
        std::cerr << "Error: " << e.what() << ", in visitExpression()\n";
        return NULL;
      }
    }

    return a;
  }

  std::any visitLessExpression(SynthtaxParser::LessExpressionContext *ctx) {
    llvm::Value *a;

    if (ctx->addSubExpression().size() > 0) {
      try {
        a = std::any_cast<llvm::Value *>(
            visitAddSubExpression(ctx->addSubExpression()[0]));
      } catch (const std::bad_any_cast &e) {
        std::cerr << "Error: " << e.what() << ", in visitLessExpression()\n";
        return NULL;
      }
    }

    // Less than expression (<)
    if (ctx->addSubExpression().size() > 1) {
      try {
        llvm::Value *b = std::any_cast<llvm::Value *>(
            visitAddSubExpression(ctx->addSubExpression()[1]));

        std::string aty = getValType(a->getType());
        std::string bty = getValType(b->getType());

        llvm::Value *result;

        // Return 0 or 1 based on the comparison result
        if (aty != bty) return NULL;
        else if (aty == "int") {
          llvm::Value *lt_result = builder_.CreateICmpSLT(a, b);
          result = builder_.CreateSelect(lt_result, builder_.getInt32(1), builder_.getInt32(0));
        } else if (aty == "float") {
          llvm::Value *lt_result = builder_.CreateFCmpULT(a, b);
          result = builder_.CreateSelect(lt_result, create_float(1.0), create_float(0.0));
        } else { // NOTE: other types comparison is always true for now
          result = builder_.getInt32(1);
        }

        // result = builder_.getInt32(1);
        return result;
      } catch (const std::bad_any_cast &e) {
        std::cerr << "Error: " << e.what() << ", in visitLessExpression()\n";
        return NULL;
      }
    }

    return a;
  }

  // not sure how to get the '+' and '-' in order from the vector in
  // SynthtaxParser.h
  std::any visitAddSubExpression(SynthtaxParser::AddSubExpressionContext *ctx) {
    llvm::Value *a;

    if (ctx->mulDivExpression().size() > 0) {
      try {
        a = std::any_cast<llvm::Value *>(
            visitMulDivExpression(ctx->mulDivExpression()[0]));
      } catch (const std::bad_any_cast &e) {
        std::cerr << "Error: " << e.what() << ", in visitAddSubExpression()\n";
        return NULL;
      }
    }

    // Addition or Subtraction
    if (ctx->mulDivExpression().size() > 1) {
      std::string context = ctx->getText();
      std::vector<char> signs;

      for (auto &c : context) {
        if (c == '+' || c == '-')
          signs.push_back(c);
      }

      for (int i = 1; i < ctx->mulDivExpression().size(); ++i) {
        try {
          llvm::Value *b = std::any_cast<llvm::Value *>(
              visitMulDivExpression(ctx->mulDivExpression()[i]));
          const char sign = signs[i - 1];
          if (sign == '+') {
            a = builder_.CreateAdd(a, b);
          } else {
            a = builder_.CreateSub(a, b);
          }
        } catch (const std::bad_any_cast &e) {
          std::cerr << "Error: " << e.what()
                    << ", in visitAddSubExpression()\n";
          return NULL;
        }
      }
    }

    return a;
  }

  std::any visitMulDivExpression(SynthtaxParser::MulDivExpressionContext *ctx) {
    llvm::Value *a;

    if (ctx->atom().size() > 0) {
      try {
        a = std::any_cast<llvm::Value *>(visitAtom(ctx->atom()[0]));
      } catch (const std::bad_any_cast &e) {
        std::cerr << "Error: " << e.what() << ", in visitMulDivExpression()\n";
        return NULL;
      }
    }

    // Addition or Subtraction
    if (ctx->atom().size() > 1) {
      std::string context = ctx->getText();
      std::vector<char> signs;

      for (auto &c : context) {
        if (c == '*' || c == '/')
          signs.push_back(c);
      }

      for (int i = 1; i < ctx->atom().size(); ++i) {
        try {
          llvm::Value *b =
              std::any_cast<llvm::Value *>(visitAtom(ctx->atom()[i]));
          const char sign = signs[i - 1];
          if (sign == '*') {
            a = builder_.CreateMul(a, b);
          } else {
            a = builder_.CreateSDiv(a, b);
          }
        } catch (const std::bad_any_cast &e) {
          std::cerr << "Error: " << e.what()
                    << ", in visitMulDivExpression()\n";
          return NULL;
        }
      }
    }

    return a;
  }

  std::any visitAtom(SynthtaxParser::AtomContext *ctx) {
    // if function call
    if (ctx->ID() != nullptr && ctx->OPENPAREN() != nullptr) {
      std::string id = ctx->ID()->getText();

      // // if Osc()
      // if (id == "Osc") {
      //   outfile << "std::make_shared<Oscillator>("
      //           << ctx->expressionList()->getText() << ")";
      // }

      // // if ADSR()
      // else if (id == "ADSR") {
      //   outfile << "std::make_shared<ADSR>(";
      //   if (ctx->expressionList() != nullptr)
      //     outfile << ctx->expressionList()->getText();
      //   outfile << ")";
      // }

      // // if write()
      // else if (id == "write") {
      //   std::string args = ctx->expressionList()->getText();

      //   int i = 0;
      //   std::string osc_id;
      //   while (i < args.length() && args[i] != ',') {
      //     if (args[i] != ' ') {
      //       osc_id.push_back(args[i]);
      //     }
      //     ++i;
      //   }

      //   outfile << osc_id << "->write_to_file(" << args.substr(i + 1) << ")";
      // }

      // // if apply()
      // else if (id == "apply") {
      //   std::string args = ctx->expressionList()->getText();

      //   int i = 0;
      //   std::string env_id;
      //   while (i < args.length() && args[i] != ',') {
      //     if (args[i] != ' ') {
      //       env_id.push_back(args[i]);
      //     }
      //     ++i;
      //   }

      //   outfile << env_id << "->apply_with_ptr(" << args.substr(i + 1) <<
      //   ")";
      // }

      // others
      // else {
      // outfile << id << "(";
      // if (ctx->expressionList() != nullptr)
      //   visitExpressionList(ctx->expressionList());
      // outfile << ")";
      // }
    }

    // assignment
    else if (ctx->ID() != nullptr) {
      return name_value_[ctx->ID()->getText()];
    }

    // expression
    else if (ctx->expression() != nullptr) {
      return visitExpression(ctx->expression());
    }

    // literal
    else {
      return visitLiteral(ctx->literal());
    }

    return NULL;
  }

  /*
    std::any visitExpressionList(SynthtaxParser::ExpressionListContext *ctx) {
      if (ctx->expression().size() > 0)
        visitExpression(ctx->expression()[0]);

      for (int i = 1; i < ctx->expression().size(); ++i) {
        outfile << ", ";
        visitExpression(ctx->expression()[i]);
      }

      return NULL;
    }  // else {

  */

  std::any visitLiteral(SynthtaxParser::LiteralContext *ctx) {
    llvm::Value *result;

    if (ctx->STRING()) result = create_string(ctx->getText());
    else if (ctx->INT()) result = create_int(stoi(ctx->getText()));
    else if (ctx->FLOAT()) result = create_float(stof(ctx->getText()));
    else if (ctx->CHAR()) result = create_char(ctx->getText()[1]); // ignore single quotes outside
    else if (ctx->BOOL()) result = create_int(stoi(ctx->getText()));

    return result;
  }

private:
  llvm::LLVMContext &context_;
  llvm::Module &module_;
  llvm::IRBuilder<> &builder_;
  std::unordered_map<std::string, llvm::Value *> name_value_;

  inline llvm::Value* create_float(const float x) { return llvm::ConstantFP::get(llvm::Type::getFloatTy(context_), x); }
  inline llvm::Value* create_int(const int x) { return llvm::ConstantInt::get(llvm::Type::getInt32Ty(context_), x); }
  inline llvm::Value* create_char(const char c) { return llvm::ConstantInt::get(llvm::Type::getInt8Ty(context_), c); }
  inline llvm::Value* create_string(const std::string &s) { return llvm::ConstantDataArray::getString(context_, s); }

  llvm::Type *getType(const std::string &type) {
    if (type == "int")
      return llvm::Type::getInt32Ty(context_);
    else if (type == "float")
      return llvm::Type::getFloatTy(context_);
    else if (type == "char")
      return llvm::Type::getInt8Ty(context_);
    else if (type == "void")
      return llvm::Type::getVoidTy(context_);
    /*
    else if (type == "string") return // TODO
    else if (type == "osc") return // TODO
    else if (type == "env") return // TODO
    */
    return llvm::Type::getVoidTy(context_);
  }

  std::string getValType(const llvm::Type* type) {
    if (type == llvm::Type::getInt32Ty(context_)) return "int";
    if (type == llvm::Type::getFloatTy(context_)) return "float";
    if (type == llvm::Type::getInt8Ty(context_)) return "char";

    // TODO: string, other types
    return "unknown";
  }
};
} // namespace synthtax_antlr
