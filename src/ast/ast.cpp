#include "ast.h"
#include <iostream>

namespace parser {

ASTProgramNode::ASTProgramNode(std::vector<ASTNode *> statements)
    : statements(std::move(statements)) {}

// Statement Nodes
ASTDeclarationNode::ASTDeclarationNode(TYPE type, std::string identifier,
                                       ASTExprNode *expr,
                                       unsigned int line_number)
    : type(type), identifier(std::move(identifier)), expr(expr),
      line_number(line_number) {}

ASTAssignmentNode::ASTAssignmentNode(std::string identifier, ASTExprNode *expr,
                                     unsigned int line_number)
    : identifier(std::move(identifier)), expr(expr), line_number(line_number) {}

ASTPrintNode::ASTPrintNode(ASTExprNode *expr, unsigned int line_number)
    : expr(expr), line_number(line_number) {}

ASTReturnNode::ASTReturnNode(ASTExprNode *expr, unsigned int line_number)
    : expr(expr), line_number(line_number) {}

ASTBlockNode::ASTBlockNode(std::vector<ASTStatementNode *> statements,
                           unsigned int line_number)
    : statements(std::move(statements)), line_number(line_number) {}

ASTIfNode::ASTIfNode(ASTExprNode *condition, ASTBlockNode *if_block,
                     unsigned int line_number, ASTBlockNode *else_block)
    : condition(condition), if_block(if_block), line_number(line_number),
      else_block(else_block) {}

ASTWhileNode::ASTWhileNode(ASTExprNode *condition, ASTBlockNode *block,
                           unsigned int line_number)
    : condition(condition), block(block), line_number(line_number) {}

// Accept functions for visitors
template <> void ASTLiteralNode<int>::accept(visitor::Visitor *v) {
  v->visit(this);
}

template <> void ASTLiteralNode<float>::accept(visitor::Visitor *v) {
  v->visit(this);
}

template <> void ASTLiteralNode<bool>::accept(visitor::Visitor *v) {
  v->visit(this);
}

template <> void ASTLiteralNode<char>::accept(visitor::Visitor *v) {
  v->visit(this);
}

template <> void ASTLiteralNode<std::string>::accept(visitor::Visitor *v) {
  v->visit(this);
}

template <> void ASTLiteralNode<void>::accept(visitor::Visitor *v) {
  v->visit(this);
}

void ASTBinaryExprNode::accept(visitor::Visitor *v) { v->visit(this); }

void ASTProgramNode::accept(visitor::Visitor *v) { v->visit(this); }

void ASTFunctionCallNode::accept(visitor::Visitor *v) { v->visit(this); }

void ASTIdentifierNode::accept(visitor::Visitor *v) { v->visit(this); }

void ASTUnaryExprNode::accept(visitor::Visitor *v) { v->visit(this); }

void ASTDeclarationNode::accept(visitor::Visitor *v) { v->visit(this); }

void ASTAssignmentNode::accept(visitor::Visitor *v) { v->visit(this); }

void ASTPrintNode::accept(visitor::Visitor *v) { v->visit(this); }

void ASTReturnNode::accept(visitor::Visitor *v) { v->visit(this); }

void ASTBlockNode::accept(visitor::Visitor *v) { v->visit(this); }

void ASTIfNode::accept(visitor::Visitor *v) { v->visit(this); }

void ASTWhileNode::accept(visitor::Visitor *v) { v->visit(this); }

void ASTFunctionDefinitionNode::accept(visitor::Visitor *v) { v->visit(this); }

} // namespace parser
