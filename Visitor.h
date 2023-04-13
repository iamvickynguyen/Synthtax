#pragma once

#include "antlr4-runtime.h"
#include "libs/SynthtaxParserBaseVisitor.h"
#include "libs/SynthtaxParserVisitor.h"
#include <sstream>

namespace synthtax_antlr {
class Visitor : public SynthtaxParserBaseVisitor {
public:
	std::stringstream outfile;

  Visitor() {}

  std::any visitProg(SynthtaxParser::ProgContext *ctx) {
		outfile << "#include <builtin.h>";

		return visitChildren(ctx);
  }

  std::any
  visitFunction(SynthtaxParser::FunctionContext *ctx) {
    return visitChildren(ctx);
  }

  std::any
  visitFuncDeclaration(SynthtaxParser::FuncDeclarationContext *ctx) {
    return visitChildren(ctx);
  }

  std::any
  visitFormalParameters(SynthtaxParser::FormalParametersContext *ctx) {
    return visitChildren(ctx);
  }

  std::any
  visitFuncBody(SynthtaxParser::FuncBodyContext *ctx) {
    return visitChildren(ctx);
  }

  std::any
  visitStatement(SynthtaxParser::StatementContext *ctx) {
    return visitChildren(ctx);
  }

  std::any visitExpressionStatement(
      SynthtaxParser::ExpressionStatementContext *ctx) {
    return visitChildren(ctx);
  }

  std::any
  visitIfStatement(SynthtaxParser::IfStatementContext *ctx) {
    return visitChildren(ctx);
  }

  std::any
  visitWhileStatement(SynthtaxParser::WhileStatementContext *ctx) {
    return visitChildren(ctx);
  }

  std::any
  visitReturnStatement(SynthtaxParser::ReturnStatementContext *ctx) {
    return visitChildren(ctx);
  }

  std::any visitAssignmentStatement(
      SynthtaxParser::AssignmentStatementContext *ctx) {
    return visitChildren(ctx);
  }

  std::any visitBlock(SynthtaxParser::BlockContext *ctx) {
    return visitChildren(ctx);
  }

  std::any
  visitExpression(SynthtaxParser::ExpressionContext *ctx) {
    return visitChildren(ctx);
  }

  std::any
  visitLessExpression(SynthtaxParser::LessExpressionContext *ctx) {
    return visitChildren(ctx);
  }

  std::any
  visitAddSubExpression(SynthtaxParser::AddSubExpressionContext *ctx) {
    return visitChildren(ctx);
  }

  std::any
  visitMulDivExpression(SynthtaxParser::MulDivExpressionContext *ctx) {
    return visitChildren(ctx);
  }

  std::any visitAtom(SynthtaxParser::AtomContext *ctx) {
    return visitChildren(ctx);
  }

  std::any
  visitExpressionList(SynthtaxParser::ExpressionListContext *ctx) {
    return visitChildren(ctx);
  }

  std::any visitLiteral(SynthtaxParser::LiteralContext *ctx) {
    return visitChildren(ctx);
  }
};
} // namespace synthtax_antlr
