parser grammar SynthtaxParser;

prog : function+ EOF;

function : funcDeclaration funcBody;

funcDeclaration : identifier OPENPAREN formalParameters? CLOSEPAREN;

formalParameters : identifier(COMMA identifier)*;

funcBody : OPENBRACKET statement* CLOSEBRACKET;

statement : expressionStatement | ifStatement | whileStatement |
            returnStatement | assignmentStatement | SEMICOLON;

expressionStatement : expression;

ifStatement : IF OPENPAREN expression CLOSEPAREN block ELSE block |
              IF OPENPAREN expression CLOSEPAREN block;

whileStatement : WHILE OPENPAREN expression CLOSEPAREN block;

returnStatement : RETURN expression;

assignmentStatement : identifier ASSIGN expression;

block : OPENPAREN statement*CLOSEPAREN;

expression : lessExpression(EQUALITY lessExpression)*;

lessExpression : addSubExpression(LESS addSubExpression)*;

addSubExpression : mulDivExpression(ADD mulDivExpression)* |
    mulDivExpression(SUB mulDivExpression)*;

mulDivExpression : atom(MUL atom)* | atom(DIV atom)*;

atom : OPENPAREN expression CLOSEPAREN |
       identifier OPENPAREN expression CLOSEPAREN | identifier | literal;

literal : STRING | INT | FLOAT | CHAR | BOOL;

identifier : LETTER+;
