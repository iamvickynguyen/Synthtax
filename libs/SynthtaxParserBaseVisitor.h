
// Generated from SynthtaxParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "SynthtaxParserVisitor.h"


namespace synthtax_antlr {

/**
 * This class provides an empty implementation of SynthtaxParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SynthtaxParserBaseVisitor : public SynthtaxParserVisitor {
public:

  virtual std::any visitProg(SynthtaxParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCppHeader(SynthtaxParser::CppHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction(SynthtaxParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDeclaration(SynthtaxParser::FuncDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormalParameters(SynthtaxParser::FormalParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncBody(SynthtaxParser::FuncBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(SynthtaxParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclaration(SynthtaxParser::VarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStatement(SynthtaxParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(SynthtaxParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(SynthtaxParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStatement(SynthtaxParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentStatement(SynthtaxParser::AssignmentStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintStatement(SynthtaxParser::PrintStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintLnStatement(SynthtaxParser::PrintLnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(SynthtaxParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(SynthtaxParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLessExpression(SynthtaxParser::LessExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSubExpression(SynthtaxParser::AddSubExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDivExpression(SynthtaxParser::MulDivExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtom(SynthtaxParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionList(SynthtaxParser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(SynthtaxParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace synthtax_antlr
