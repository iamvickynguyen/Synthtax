#ifndef AST_H
#define AST_H

#include <string>
#include <vector>

namespace parser {

enum Type { INT, FLOAT, BOOL, CHAR, STRING, ARRAY, VOID };

// abstract node
class ASTNode {
  virtual void accept(visitor::Visitor *) = 0;
};

class ASTStatementNode : public ASTNode {
public:
  void accept(visitor::Visitor *) override = 0;
};

class ASTExprNode : public ASTNode {
public:
  void accept(visitor::Visitor *) override = 0;
};

// Statement Nodes
class ASTProgramNode : public ASTNode {
public:
  explicit ASTProgramNode(std::vector<ASTNode *>);
  std::vector<ASTNode *> statements;
  void accept(visitor::Visitor *) override;
};

class ASTDeclarationNode : public ASTNode {
public:
  ASTDeclarationNode(TYPE, std::string, ASTExprNode *, unsigned int);
  TYPE type;
  std::string identifier;
  ASTExprNode *expr;
  unsigned int line_number;
  void accept(visitor::Visitor *) override;
};

class ASTAssignmentNode : public ASTNode {
public:
  ASTAssignmentNode(std::string, ASTExprNode *, unsigned int);
  std::string identifier;
  ASTExprNode *expr;
  unsigned int line_number;
  void accept(visitor::Visitor *) override;
};

class ASTPrintNode : public ASTNode {
public:
  ASTPrintNode(ASTExprNode *, unsigned int);
  ASTExprNode *expr;
  unsigned int line_number;
  void accept(visitor::Visitor *) override;
};

class ASTReturnNode : public ASTNode {
public:
  ASTReturnNode(ASTExprNode *, unsigned int);
  ASTExprNode *expr;
  unsigned int line_number;
  void accept(visitor::Visitor *) override;
};

class ASTBlockNode : public ASTNode {
public:
  ASTBlockNode(std::vector<ASTStatementNode *>, unsigned int);
  std::vector<ASTStatementNode *> statements;
  unsigned int line_number;
  void accept(visitor::Visitor *) override;
};

class ASTIfNode : public ASTNode {
public:
  ASTIfNode(ASTExprNode *, ASTBlockNode *, unsigned int);
  ASTExprNode *condition;
  ASTBlockNode *block;
  unsigned int line_number;
  void accept(visitor::Visitor *) override;
};

class ASTWhileNode : public ASTNode {
  ASTWhileNode(ASTExprNode *, ASTBlockNode *, unsigned int);
  ASTExprNode *condition;
  ASTBlockNode *block;
  unsigned int line_number;
  void accept(visitor::Visitor *) override;
};

class ASTFunctionDefinitionNode : public ASTNode {
public:
  ASTFunctionDefinitionNode(std::string,
                            std::vector<std::pair<std::string, TYPE>>, TYPE,
                            ASTBlockNode *, unsigned int);
  std::string identifier;
  std::vector<std::pair<std::string, TYPE>> parameters;
  std::vector<std::string> variable_names;
  std::vector<TYPE> signature;
  TYPE type;
  ASTBlockNode *block;
  unsigned int line_number;
  void accept(visitor::Visitor *) override;
};

// Expression Nodes
template <typename T> class ASTLiteralNode : public ASTExprNode {
  ASTLiteralNode(T val, unsigned int line_number)
      : val(val), line_number(line_number){};
  T val;
  unsigned int line_number;
  void accept(visitor::Visitor *) override;
};

class ASTUnitaryExprNode : public ASTExprNode {
public:
  ASTUnitaryExprNode(std::string, ASTExprNode *, unsigned int);
  std::string op;
  ASTExprNode *expr;
  unsigned int line_number;
  void accept(visitor::Visitor *) override;
};

class ASTBinaryExprNode : public ASTExprNode {
public:
  ASTBinaryExprNode(std::string, ASTExprNode *, ASTExprNode *, unsigned int);
  std::string op;
  ASTExprNode *left;
  ASTExprNode *right;
  unsigned int line_number;
  void accept(visitor::Visitor *) override;
};

class ASTIdentifierNode : public ASTExprNode {
public:
  ASTIdentifierNode(std::string, unsigned int);
  std::string identifier;
  unsigned int line_number;
  void accept(visitor::Visitor *) override;
};

class ASTFunctionCallNode : public ASTExprNode {
public:
  ASTFunctionCallNode(std::string, std::vector<ASTExprNode *>, unsigned int);
  std::string identifier;
  std::vector<ASTExprNode *> parameters;
  unsigned int line_number;
  void accept(visitor::Visitor *) override;
};

#endif
