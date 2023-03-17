grammar Synthtax;

// parser

prog: function+ EOF;

function: funcDeclarion funcBody;

funcDeclaration: identifier OPENPAREN formalParameters CLOSEPAREN;

funcBody: OPENBRACKET statement* CLOSEBRACKET

statement: SEMICOLON
	| expressionStatement
	| ifStatement
	| whileStatement
	| returnStatement
	| assignmentStatement
	;

expressionStatement: expression;

ifStatement:
	IF OPENPAREN expression CLOSEPAREN block ELSE block
	| IF OPENPAREN expression CLOSEPAREN block
	;

whileStatement:
	WHILE OPENPAREN expression CLOSEPAREN block;

returnStatement: RETURN expression;

assignmentStatement: identifier ASSIGN expression;

block: OPENPAREN statement* CLOSEPAREN;

expression:
	equalityExpression
	| lessExpression
	| addExpression
	| subExpression
	| mulExpression
	| divExpression
	| parenExpression
	;

// lexer
SEMICOLON: ';'
OPENPAREN: '(';
CLOSEPAREN: ')';
OPENBRACKET: '{';
CLOSEBRACKET: '}';
IF: 'if';
ELSE: 'else';
WHILE: 'while';
RETURN: 'return';
ASSIGN: '=';
