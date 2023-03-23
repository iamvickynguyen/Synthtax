
// Generated from Synthtax.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "SynthtaxParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SynthtaxParser.
 */
class  SynthtaxVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SynthtaxParser.
   */
    virtual std::any visitProg(SynthtaxParser::ProgContext *context) = 0;

    virtual std::any visitFunction(SynthtaxParser::FunctionContext *context) = 0;

    virtual std::any visitFuncDeclaration(SynthtaxParser::FuncDeclarationContext *context) = 0;

    virtual std::any visitFormalParameters(SynthtaxParser::FormalParametersContext *context) = 0;

    virtual std::any visitFuncBody(SynthtaxParser::FuncBodyContext *context) = 0;

    virtual std::any visitStatement(SynthtaxParser::StatementContext *context) = 0;

    virtual std::any visitExpressionStatement(SynthtaxParser::ExpressionStatementContext *context) = 0;

    virtual std::any visitIfStatement(SynthtaxParser::IfStatementContext *context) = 0;

    virtual std::any visitWhileStatement(SynthtaxParser::WhileStatementContext *context) = 0;

    virtual std::any visitReturnStatement(SynthtaxParser::ReturnStatementContext *context) = 0;

    virtual std::any visitAssignmentStatement(SynthtaxParser::AssignmentStatementContext *context) = 0;

    virtual std::any visitBlock(SynthtaxParser::BlockContext *context) = 0;

    virtual std::any visitExpression(SynthtaxParser::ExpressionContext *context) = 0;

    virtual std::any visitLessExpression(SynthtaxParser::LessExpressionContext *context) = 0;

    virtual std::any visitAddSubExpression(SynthtaxParser::AddSubExpressionContext *context) = 0;

    virtual std::any visitMulDivExpression(SynthtaxParser::MulDivExpressionContext *context) = 0;

    virtual std::any visitAtom(SynthtaxParser::AtomContext *context) = 0;

    virtual std::any visitLiteral(SynthtaxParser::LiteralContext *context) = 0;

    virtual std::any visitIdentifier(SynthtaxParser::IdentifierContext *context) = 0;


};

