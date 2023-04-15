#pragma once

#include "antlr4-runtime.h"
#include "libs/SynthtaxParserBaseVisitor.h"
#include "libs/SynthtaxParserVisitor.h"
#include <sstream>
#include <string>

namespace synthtax_antlr {
class Visitor : public SynthtaxParserBaseVisitor {
public:
	std::stringstream outfile;

  Visitor(): indentLevel(1) {}

  std::any visitProg(SynthtaxParser::ProgContext *ctx) {
		outfile << "#include <builtin.h>\n";
		if (ctx->cppHeader() != nullptr)
			visitCppHeader(ctx->cppHeader());
		
		for (auto &f: ctx->function()) {
			visitFunction(f);
			outfile << "\n";
		}

		return NULL;
  }
  
	std::any visitCppHeader(SynthtaxParser::CppHeaderContext *ctx) {
		std::string header = ctx->getText();
		std::string start = "@header";
		std::string end = "@end_header";
		outfile << header.substr(start.length(), header.length() - start.length() - end.length()) << '\n';
    return visitChildren(ctx);
  }

  std::any
  visitFunction(SynthtaxParser::FunctionContext *ctx) {
    visitFuncDeclaration(ctx->funcDeclaration());
		visitFuncBody(ctx->funcBody());
		return NULL;
  }

  std::any
  visitFuncDeclaration(SynthtaxParser::FuncDeclarationContext *ctx) {
		print_type(ctx->TYPE()->getText());
    outfile << " " << ctx->ID()->getText() << "(";
	
		if (ctx->formalParameters() != nullptr)
			visitFormalParameters(ctx->formalParameters());
	
		outfile << ")";
		return visitChildren(ctx);
  }

  std::any
  visitFormalParameters(SynthtaxParser::FormalParametersContext *ctx) {
		if (ctx->ID().size() > 0) {
			print_type(ctx->TYPE()[0]->getText());
			outfile << " " << ctx->ID()[0]->getText();
		}

		for (int i = 1; i < ctx->ID().size(); ++i) {
			outfile << ", ";
			print_type(ctx->TYPE()[i]->getText());
			outfile << " " << ctx->ID()[i]->getText();
		}
		return NULL;
  }

  std::any
  visitFuncBody(SynthtaxParser::FuncBodyContext *ctx) {
		outfile << " {";

		if (ctx->statement().size() > 0) outfile << "\n";
		
		for (auto &s: ctx->statement()) {
			indent();
			visitStatement(s);
		}
		
		if (ctx->statement().size() > 0) outfile << "\n";
		
		outfile << "}\n";
		return NULL;
  }
  
  std::any visitStatement(SynthtaxParser::StatementContext *ctx) {
  	if (ctx->varDeclaration() != nullptr) visitVarDeclaration(ctx->varDeclaration());
		else if (ctx->expressionStatement() != nullptr) visitExpressionStatement(ctx->expressionStatement());
		else if (ctx->ifStatement() != nullptr) visitIfStatement(ctx->ifStatement());
		else if (ctx->whileStatement() != nullptr) visitWhileStatement(ctx->whileStatement());
		else if (ctx->returnStatement() != nullptr) visitReturnStatement(ctx->returnStatement());
		else if (ctx->assignmentStatement() != nullptr) visitAssignmentStatement(ctx->assignmentStatement());
		else outfile << ";\n";
		return NULL;
	}

  std::any visitVarDeclaration(SynthtaxParser::VarDeclarationContext *ctx) {
		print_type(ctx->TYPE()->getText());
		outfile << " ";

		if (ctx->assignmentStatement() != nullptr) visitAssignmentStatement(ctx->assignmentStatement());
		else outfile << ctx->ID()->getText() << ";\n";
    return visitChildren(ctx);
  }

  std::any visitExpressionStatement(SynthtaxParser::ExpressionStatementContext *ctx) {
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
			outfile << "\n";
			visitBlock(ctx->block());
			outfile << "\n";

			indent();
		}

		outfile << "}\n";
    return NULL;
  }

  std::any visitReturnStatement(SynthtaxParser::ReturnStatementContext *ctx) {
		outfile << "return ";
		visitExpression(ctx->expression());
		outfile << ";\n";
    return NULL;
  }

  std::any visitAssignmentStatement(SynthtaxParser::AssignmentStatementContext *ctx) {
		outfile << ctx->ID()->getText() << " = ";
		visitExpression(ctx->expression());
		outfile << ";\n";
    return NULL; 
  }

  std::any visitBlock(SynthtaxParser::BlockContext *ctx) {
		for (auto &s: ctx->statement()) {
			indent();
			visitStatement(s);
		}
    return NULL;
  }

  std::any visitExpression(SynthtaxParser::ExpressionContext *ctx) {
    return visitChildren(ctx);
  }

  std::any visitLessExpression(SynthtaxParser::LessExpressionContext *ctx) {
    return visitChildren(ctx);
  }

  std::any visitAddSubExpression(SynthtaxParser::AddSubExpressionContext *ctx) {
    return visitChildren(ctx);
  }

  std::any visitMulDivExpression(SynthtaxParser::MulDivExpressionContext *ctx) {
    return visitChildren(ctx);
  }

  std::any visitAtom(SynthtaxParser::AtomContext *ctx) {
    return visitChildren(ctx);
  }

  std::any visitExpressionList(SynthtaxParser::ExpressionListContext *ctx) {
    return visitChildren(ctx);
  }

  std::any visitLiteral(SynthtaxParser::LiteralContext *ctx) {
    return visitChildren(ctx);
  }

private:
	int indentLevel;

	void print_type(const std::string &type) {
		if (type == "string") outfile << "std::string";
		else outfile << type;
	}

	void indent() {
		for (int i = 0; i < indentLevel; ++i) {
			outfile << "  ";
		}
	}
};
} // namespace synthtax_antlr
