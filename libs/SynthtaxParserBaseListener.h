
// Generated from SynthtaxParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "SynthtaxParserListener.h"


namespace synthtax_antlr {

/**
 * This class provides an empty implementation of SynthtaxParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SynthtaxParserBaseListener : public SynthtaxParserListener {
public:

  virtual void enterProg(SynthtaxParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(SynthtaxParser::ProgContext * /*ctx*/) override { }

  virtual void enterFunction(SynthtaxParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(SynthtaxParser::FunctionContext * /*ctx*/) override { }

  virtual void enterFuncDeclaration(SynthtaxParser::FuncDeclarationContext * /*ctx*/) override { }
  virtual void exitFuncDeclaration(SynthtaxParser::FuncDeclarationContext * /*ctx*/) override { }

  virtual void enterFormalParameters(SynthtaxParser::FormalParametersContext * /*ctx*/) override { }
  virtual void exitFormalParameters(SynthtaxParser::FormalParametersContext * /*ctx*/) override { }

  virtual void enterFuncBody(SynthtaxParser::FuncBodyContext * /*ctx*/) override { }
  virtual void exitFuncBody(SynthtaxParser::FuncBodyContext * /*ctx*/) override { }

  virtual void enterStatement(SynthtaxParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(SynthtaxParser::StatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(SynthtaxParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(SynthtaxParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(SynthtaxParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(SynthtaxParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(SynthtaxParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(SynthtaxParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(SynthtaxParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(SynthtaxParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterAssignmentStatement(SynthtaxParser::AssignmentStatementContext * /*ctx*/) override { }
  virtual void exitAssignmentStatement(SynthtaxParser::AssignmentStatementContext * /*ctx*/) override { }

  virtual void enterBlock(SynthtaxParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(SynthtaxParser::BlockContext * /*ctx*/) override { }

  virtual void enterExpression(SynthtaxParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(SynthtaxParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterLessExpression(SynthtaxParser::LessExpressionContext * /*ctx*/) override { }
  virtual void exitLessExpression(SynthtaxParser::LessExpressionContext * /*ctx*/) override { }

  virtual void enterAddSubExpression(SynthtaxParser::AddSubExpressionContext * /*ctx*/) override { }
  virtual void exitAddSubExpression(SynthtaxParser::AddSubExpressionContext * /*ctx*/) override { }

  virtual void enterMulDivExpression(SynthtaxParser::MulDivExpressionContext * /*ctx*/) override { }
  virtual void exitMulDivExpression(SynthtaxParser::MulDivExpressionContext * /*ctx*/) override { }

  virtual void enterAtom(SynthtaxParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(SynthtaxParser::AtomContext * /*ctx*/) override { }

  virtual void enterExpressionList(SynthtaxParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(SynthtaxParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterLiteral(SynthtaxParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(SynthtaxParser::LiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace synthtax_antlr
