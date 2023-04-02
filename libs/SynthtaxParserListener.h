
// Generated from SynthtaxParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "SynthtaxParser.h"


namespace synthtax_antlr {

/**
 * This interface defines an abstract listener for a parse tree produced by SynthtaxParser.
 */
class  SynthtaxParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(SynthtaxParser::ProgContext *ctx) = 0;
  virtual void exitProg(SynthtaxParser::ProgContext *ctx) = 0;

  virtual void enterFunction(SynthtaxParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(SynthtaxParser::FunctionContext *ctx) = 0;

  virtual void enterFuncDeclaration(SynthtaxParser::FuncDeclarationContext *ctx) = 0;
  virtual void exitFuncDeclaration(SynthtaxParser::FuncDeclarationContext *ctx) = 0;

  virtual void enterFormalParameters(SynthtaxParser::FormalParametersContext *ctx) = 0;
  virtual void exitFormalParameters(SynthtaxParser::FormalParametersContext *ctx) = 0;

  virtual void enterFuncBody(SynthtaxParser::FuncBodyContext *ctx) = 0;
  virtual void exitFuncBody(SynthtaxParser::FuncBodyContext *ctx) = 0;

  virtual void enterStatement(SynthtaxParser::StatementContext *ctx) = 0;
  virtual void exitStatement(SynthtaxParser::StatementContext *ctx) = 0;

  virtual void enterExpressionStatement(SynthtaxParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(SynthtaxParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterIfStatement(SynthtaxParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(SynthtaxParser::IfStatementContext *ctx) = 0;

  virtual void enterWhileStatement(SynthtaxParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(SynthtaxParser::WhileStatementContext *ctx) = 0;

  virtual void enterReturnStatement(SynthtaxParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(SynthtaxParser::ReturnStatementContext *ctx) = 0;

  virtual void enterAssignmentStatement(SynthtaxParser::AssignmentStatementContext *ctx) = 0;
  virtual void exitAssignmentStatement(SynthtaxParser::AssignmentStatementContext *ctx) = 0;

  virtual void enterBlock(SynthtaxParser::BlockContext *ctx) = 0;
  virtual void exitBlock(SynthtaxParser::BlockContext *ctx) = 0;

  virtual void enterExpression(SynthtaxParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(SynthtaxParser::ExpressionContext *ctx) = 0;

  virtual void enterLessExpression(SynthtaxParser::LessExpressionContext *ctx) = 0;
  virtual void exitLessExpression(SynthtaxParser::LessExpressionContext *ctx) = 0;

  virtual void enterAddSubExpression(SynthtaxParser::AddSubExpressionContext *ctx) = 0;
  virtual void exitAddSubExpression(SynthtaxParser::AddSubExpressionContext *ctx) = 0;

  virtual void enterMulDivExpression(SynthtaxParser::MulDivExpressionContext *ctx) = 0;
  virtual void exitMulDivExpression(SynthtaxParser::MulDivExpressionContext *ctx) = 0;

  virtual void enterAtom(SynthtaxParser::AtomContext *ctx) = 0;
  virtual void exitAtom(SynthtaxParser::AtomContext *ctx) = 0;

  virtual void enterExpressionList(SynthtaxParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(SynthtaxParser::ExpressionListContext *ctx) = 0;

  virtual void enterLiteral(SynthtaxParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(SynthtaxParser::LiteralContext *ctx) = 0;


};

}  // namespace synthtax_antlr
