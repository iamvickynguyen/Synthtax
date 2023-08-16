#pragma once

#include <string>
#include <unordered_map>

#include "antlr4-runtime.h"
#include "libs/SynthtaxParserBaseVisitor.h"
#include "libs/SynthtaxParserVisitor.h"

#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Value.h>
#include <llvm/IR/Function.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/IR/Verifier.h>

#include <iostream> // DEBUG


namespace synthtax_antlr {
class IRBuilder : public SynthtaxParserBaseVisitor {
public:
  IRBuilder(llvm::LLVMContext &context, llvm::Module &module, llvm::IRBuilder<> &builder): context_(context), module_(module), builder_(builder) {}

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
    llvm::Function *func = std::any_cast<llvm::Function *>(visitFuncDeclaration(ctx->funcDeclaration()));

    llvm::BasicBlock *BB = llvm::BasicBlock::Create(context_, "entry", func);
    builder_.SetInsertPoint(BB);

    std::unordered_map<std::string, llvm::Value *> tmp_table = name_value_;

    name_value_.clear();
    for (auto &arg : func->args())
      name_value_[std::string(arg.getName())] = &arg;

    try {
      llvm::Value *return_type = std::any_cast<llvm::Value *>(visitFuncBody(ctx->funcBody()));

      // restore symbol table
      name_value_ = tmp_table;

      if (return_type == nullptr)
          builder_.CreateRetVoid();

    } catch (const std::bad_any_cast& e) {
      builder_.CreateRetVoid(); // nullptr
    }

    llvm::verifyFunction(*func);
    return func;
  }

  std::any visitFuncDeclaration(SynthtaxParser::FuncDeclarationContext *ctx) {
    std::string id = ctx->ID()->getText();
    llvm::Type *ty = getType(ctx->TYPE()->getText());

    std::vector<llvm::Type*> arguments;
    if (ctx->formalParameters() != nullptr)
      arguments = std::any_cast<std::vector<llvm::Type*>>(visitFormalParameters(ctx->formalParameters()));

    llvm::FunctionType *func_type = llvm::FunctionType::get(ty, arguments, false);
    llvm::Function *func = llvm::Function::Create(func_type, llvm::Function::ExternalLinkage, id, module_);

    // Set names for all arguments.
    unsigned i = 0;
    for(auto &arg : func->args())
        arg.setName(ctx->formalParameters()->ID()[i++]->getText());

    return func;
  }

  std::any visitFormalParameters(SynthtaxParser::FormalParametersContext *ctx) {
    std::vector<llvm::Type*> arguments;
    arguments.reserve(ctx->ID().size());
    for(int i = 0; i < ctx->ID().size(); ++i) {
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
    // else if (ctx->expressionStatement() != nullptr)
    //   visitExpressionStatement(ctx->expressionStatement());
    // else if (ctx->ifStatement() != nullptr)
    //   visitIfStatement(ctx->ifStatement());
    // else if (ctx->whileStatement() != nullptr)
    //   visitWhileStatement(ctx->whileStatement());
    // else if (ctx->returnStatement() != nullptr)
    //   visitReturnStatement(ctx->returnStatement());
    // else if (ctx->assignmentStatement() != nullptr)
    //   visitAssignmentStatement(ctx->assignmentStatement());
    // else if (ctx->printStatement() != nullptr)
    //   visitPrintStatement(ctx->printStatement());
    // else if (ctx->printLnStatement() != nullptr)
    //   visitPrintLnStatement(ctx->printLnStatement());
    // else
    //   outfile << ";\n";
    return NULL;
  }


  std::any visitVarDeclaration(SynthtaxParser::VarDeclarationContext *ctx) {
    // TODO: deal with array later
    llvm::AllocaInst *alloca_instruction = builder_.CreateAlloca(getType(ctx->TYPE()->getText()), 0, ctx->ID()->getText());
    name_value_[ctx->ID()->getText()] = alloca_instruction;

    // if (ctx->assignmentStatement() != nullptr)
    //   visitAssignmentStatement(ctx->assignmentStatement());

    return alloca_instruction;
  }

/*
  std::any
  visitExpressionStatement(SynthtaxParser::ExpressionStatementContext *ctx) {
    return visitExpression(ctx->expression());
  }

  std::any visitIfStatement(SynthtaxParser::IfStatementContext *ctx) {
    outfile << "if (";
    visitExpression(ctx->expression());
    outfile << ") {";

    if (ctx->block()[0] != nullptr) {
      ++indentLevel;
      outfile << "\n";
      visitBlock(ctx->block()[0]);
      outfile << "\n";
      --indentLevel;

      indent();
    }

    outfile << "}";

    if (ctx->block().size() > 1) {
      outfile << " else {";
      if (ctx->block()[1] != nullptr) {
        ++indentLevel;
        outfile << "\n";
        visitBlock(ctx->block()[1]);
        outfile << "\n";
        --indentLevel;

        indent();
      }
      outfile << "}";
    }

    outfile << "\n";
    return NULL;
  }

  std::any visitWhileStatement(SynthtaxParser::WhileStatementContext *ctx) {
    outfile << "while (";
    visitExpression(ctx->expression());
    outfile << ") {";

    if (ctx->block()) {
			++indentLevel;
      outfile << "\n";
      visitBlock(ctx->block());
      outfile << "\n";
			--indentLevel;

      indent();
    }

    outfile << "}\n";
    return NULL;
  }

  std::any visitReturnStatement(SynthtaxParser::ReturnStatementContext *ctx) {
    outfile << "return ";
    visitExpression(ctx->expression());
    return NULL;
  }

  std::any
  visitAssignmentStatement(SynthtaxParser::AssignmentStatementContext *ctx) {
    outfile << ctx->ID()->getText() << " = ";
    visitExpression(ctx->expression());
    return NULL;
  }

  std::any visitPrintStatement(SynthtaxParser::PrintStatementContext *ctx) {
    outfile << "std::cout << ";
    if (ctx->expression() != nullptr)
      visitExpression(ctx->expression());
    return NULL;
  }

  std::any visitPrintLnStatement(SynthtaxParser::PrintLnStatementContext *ctx) {
    outfile << "std::cout << ";
    if (ctx->expression() != nullptr)
      visitExpression(ctx->expression());
    outfile << " << '\\n'";
    return NULL;
  }

  std::any visitBlock(SynthtaxParser::BlockContext *ctx) {
    for (auto &s : ctx->statement()) {
      indent();
      visitStatement(s);
    }
    return NULL;
  }

  std::any visitExpression(SynthtaxParser::ExpressionContext *ctx) {
    if (ctx->lessExpression().size() > 0) {
      visitLessExpression(ctx->lessExpression()[0]);
    }

    for (int i = 1; i < ctx->lessExpression().size(); ++i) {
      outfile << " == ";
      visitLessExpression(ctx->lessExpression()[i]);
    }

    return NULL;
  }

  std::any visitLessExpression(SynthtaxParser::LessExpressionContext *ctx) {
    if (ctx->addSubExpression().size() > 0) {
      visitAddSubExpression(ctx->addSubExpression()[0]);
    }

    for (int i = 1; i < ctx->addSubExpression().size(); ++i) {
      outfile << " < ";
      visitAddSubExpression(ctx->addSubExpression()[i]);
    }

    return NULL;
  }

  // not sure how to get the '+' and '-' in order from the vector in
  // SynthtaxParser.h
  std::any visitAddSubExpression(SynthtaxParser::AddSubExpressionContext *ctx) {
    if (ctx->mulDivExpression().size() > 0) {
      visitMulDivExpression(ctx->mulDivExpression()[0]);
    }

    if (ctx->mulDivExpression().size() > 1) {
      std::string context = ctx->getText();
      std::vector<char> signs;

      for (auto &c : context) {
        if (c == '+' || c == '-')
          signs.push_back(c);
      }

      for (int i = 1; i < ctx->mulDivExpression().size(); ++i) {
        outfile << " " << signs[i - 1] << " ";
        visitMulDivExpression(ctx->mulDivExpression()[i]);
      }
    }

    return NULL;
  }

  std::any visitMulDivExpression(SynthtaxParser::MulDivExpressionContext *ctx) {
    if (ctx->atom().size() > 0) {
      visitAtom(ctx->atom()[0]);
    }

    if (ctx->atom().size() > 1) {
      std::string context = ctx->getText();
      std::vector<char> signs;

      for (auto &c : context) {
        if (c == '*' || c == '/')
          signs.push_back(c);
      }

      for (int i = 1; i < ctx->atom().size(); ++i) {
        outfile << " " << signs[i - 1] << " ";
        visitAtom(ctx->atom()[i]);
      }
    }

    return NULL;
  }

  std::any visitAtom(SynthtaxParser::AtomContext *ctx) {
    // if function call
    if (ctx->ID() != nullptr && ctx->OPENPAREN() != nullptr) {
      std::string id = ctx->ID()->getText();

      // if Osc()
      if (id == "Osc") {
        outfile << "std::make_shared<Oscillator>("
                << ctx->expressionList()->getText() << ")";
      }

      // if ADSR()
      else if (id == "ADSR") {
        outfile << "std::make_shared<ADSR>(";
        if (ctx->expressionList() != nullptr)
          outfile << ctx->expressionList()->getText();
        outfile << ")";
      }

      // if write()
      else if (id == "write") {
        std::string args = ctx->expressionList()->getText();

        int i = 0;
        std::string osc_id;
        while (i < args.length() && args[i] != ',') {
          if (args[i] != ' ') {
            osc_id.push_back(args[i]);
          }
          ++i;
        }

        outfile << osc_id << "->write_to_file(" << args.substr(i + 1) << ")";
      }

      // if apply()
      else if (id == "apply") {
        std::string args = ctx->expressionList()->getText();

        int i = 0;
        std::string env_id;
        while (i < args.length() && args[i] != ',') {
          if (args[i] != ' ') {
            env_id.push_back(args[i]);
          }
          ++i;
        }

        outfile << env_id << "->apply_with_ptr(" << args.substr(i + 1) << ")";
      }

      // others
      else {
        outfile << id << "(";
        if (ctx->expressionList() != nullptr)
          visitExpressionList(ctx->expressionList());
        outfile << ")";
      }
    }

    // assignment
    else if (ctx->ID() != nullptr) {
      outfile << ctx->ID()->getText();
    }

    // expression
    else if (ctx->expression() != nullptr) {
      outfile << "(";
      visitExpression(ctx->expression());
      outfile << ")";
    }

    // literal
    else {
      visitLiteral(ctx->literal());
    }

    return NULL;
  }

  std::any visitExpressionList(SynthtaxParser::ExpressionListContext *ctx) {
    if (ctx->expression().size() > 0)
      visitExpression(ctx->expression()[0]);

    for (int i = 1; i < ctx->expression().size(); ++i) {
      outfile << ", ";
      visitExpression(ctx->expression()[i]);
    }

    return NULL;
  }

  std::any visitLiteral(SynthtaxParser::LiteralContext *ctx) {
    outfile << ctx->getText();
    return NULL;
  }
  */

private:
  llvm::LLVMContext &context_;
  llvm::Module &module_;
  llvm::IRBuilder<> &builder_;
  std::unordered_map<std::string, llvm::Value *> name_value_;

  llvm::Type *getType(const std::string &type) {
    if (type == "int") return llvm::Type::getInt32Ty(context_);
    else if (type == "float") return llvm::Type::getFloatTy(context_);
    else if (type == "char") return llvm::Type::getInt8Ty(context_);
    else if (type == "void") return llvm::Type::getVoidTy(context_);
    /*
    else if (type == "string") return // TODO
    else if (type == "osc") return // TODO
    else if (type == "env") return // TODO
    */
    return llvm::Type::getVoidTy(context_);
  }
};
} // namespace synthtax_antlr
