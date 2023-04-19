parser grammar SynthtaxParser;

options { tokenVocab=SynthtaxLexer; }

prog : cppHeader? function+ EOF ;

cppHeader : HEADER ;

function : funcDeclaration funcBody ;

funcDeclaration : TYPE ID OPENPAREN formalParameters? CLOSEPAREN ;

formalParameters : (ID COLON TYPE ) (COMMA ID COLON TYPE)* ;

funcBody : OPENBRACKET statement* CLOSEBRACKET ;

statement
	: varDeclaration
	| expressionStatement
	| ifStatement
	| whileStatement
	| returnStatement
	| assignmentStatement
	| printStatement
	| printLnStatement
	| SEMICOLON
	;

varDeclaration : TYPE (assignmentStatement | ID);

expressionStatement : expression ;

ifStatement
	: IF OPENPAREN expression CLOSEPAREN block ELSE block
	| IF OPENPAREN expression CLOSEPAREN block
	;

whileStatement : WHILE OPENPAREN expression CLOSEPAREN block ;

returnStatement : RETURN expression ;

assignmentStatement : ID ASSIGN expression ;

printStatement : PRINT expression;

printLnStatement : PRINTLN expression;

block : OPENBRACKET statement* CLOSEBRACKET ;

expression : lessExpression(EQUALITY lessExpression)* ;

lessExpression : addSubExpression(LESS addSubExpression)* ;

addSubExpression
	: mulDivExpression(ADD mulDivExpression)*
	| mulDivExpression(SUB mulDivExpression)*
	;

mulDivExpression
	: atom(MUL atom)*
	| atom(DIV atom)*
	;

atom
	: OPENPAREN expression CLOSEPAREN
	| ID OPENPAREN expressionList? CLOSEPAREN // function call
	| ID
	| literal
	;

expressionList : expression (COMMA expression)* ;

literal : STRING | INT | FLOAT | CHAR | BOOL;
