grammar Synthtax;

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

expression: lessExpression (EQUALITY lessExpression)*

lessExpression: addSubExpression (LESS addSubExpression)*;

addSubExpression:
	mulExpression (ADD mulExpression)*
	| mulExpression (SUB mulExpression)*
	;

mulDivExpression:
	atom (MUL atom)*
	| atom (DIV atom)*
	;

atom: 
	OPENPAREN expression CLOSEPAREN
	| identifier OPENPAREN expression CLOSEPAREN
	| identifier
	| literal
	;

identifier: ('a'..'z' | 'A'..'Z' | '_') ('a'..'z' | 'A'..'Z' | '_' | '0'..'9')*;

literal:
	STRING
	| INT
	| FLOAT
	| CHAR
	| BOOL
	;

STRING: '\u0022' ('a'..'z' | 'A'..'Z' | '0'..'9' | '!' | ',' | '.' | ':' | '_' | '{' | '}' | ' ')* '\u0022';

INT: ('1'..'9')('0'..'9')*;

FLOAT: INT+ '.' INT+;

CHAR: '\u0027' ('a'..'z' | 'A'..'Z' | '0'..'9' | '!' | ',' | '.' | ':' | '_' | '{' | '}' | ' ') '\u0027';

BOOL: 'true' | 'false';

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

EQUALITY: '==';
LESS: '<';
ADD: '+';
SUB: '-';
MUL: '*';
DIV: '/';

WS: ( '\t' | ' ' | ('\r' | '\n') )+ { $channel = HIDDEN;};

COMMENT: '//' ~('\r' | '\n')* ('\r' | '\n' | EOF) { $channel = HIDDEN;};
