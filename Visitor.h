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
		outfile << "#include <memory>\n";
		outfile << "#include <synths/builtin.hpp>\n";
		outfile << "using namespace synths;\n\n";

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
//		else outfile << ";\n";
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

	// not sure how to get the '+' and '-' in order from the vector in SynthtaxParser.h
  std::any visitAddSubExpression(SynthtaxParser::AddSubExpressionContext *ctx) {
		if (ctx->mulDivExpression().size() > 0) {
			visitMulDivExpression(ctx->mulDivExpression()[0]);
		}

		if (ctx->mulDivExpression().size() > 1) {
			std::string context = ctx->getText();
			std::vector<char> signs;

			for (auto &c: context) {
				if (c == '+' || c == '-') signs.push_back(c);
			}

			for (int i = 1; i < ctx->mulDivExpression().size(); ++i) {
				outfile << " " << signs[i-1] << " ";
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

			for (auto &c: context) {
				if (c == '*' || c == '/') signs.push_back(c);
			}

			for (int i = 1; i < ctx->atom().size(); ++i) {
				outfile << " " << signs[i-1] << " ";
				visitAtom(ctx->atom()[i]);
			}
		}

    return NULL;
  }

  std::any visitAtom(SynthtaxParser::AtomContext *ctx) {
		// if function call with parameter(s)
		if (ctx->expressionList() != nullptr) {
			std::string id = ctx->ID()->getText();
			
			// if Osc()
			if (id == "Osc") {
				const int num_params = ctx->expressionList()->expression().size();
				
				if (num_params == 3) {
					outfile << "std::make_shared<Oscillator>("; 
				} else {
					outfile << "std::make_shared<AdditiveOscillator>(";
				}
				
				outfile << ctx->expressionList()->getText() << ");\n";
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

				outfile << osc_id << "->write_to_file(" << args.substr(i + 1)
					<< ");\n";
			}

			// others
			else {
				outfile << id << "(";
				visitExpressionList(ctx->expressionList());
				outfile << ");\n";
			}
		}

		// function call or an assignment
		else if (ctx->ID() != nullptr) {
			outfile << ctx->ID()->getText();
			if (ctx->OPENPAREN() != nullptr) outfile << "()";
			outfile << ";\n";
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
		if (ctx->expression().size() > 0) visitExpression(ctx->expression()[0]);

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

private:
	int indentLevel;

	void print_type(const std::string &type) {
		if (type == "string") outfile << "std::string";
		else if (type == "osc") outfile << "std::shared_ptr<Oscillator>";
		else if (type == "env") outfile << "std::shared_ptr<ADSR>";
		else outfile << type;
	}

	void indent() {
		for (int i = 0; i < indentLevel; ++i) {
			outfile << "  ";
		}
	}
};
} // namespace synthtax_antlr
