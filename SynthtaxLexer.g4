lexer grammar SynthtaxLexer;

HEADER : '@header' .*? '@end_header';

IF : 'if';

ELSE : 'else';

WHILE : 'while';

RETURN : 'return';

BOOL : 'true' | 'false';

COMMA : ',';

COLON : ':';

SEMICOLON : ';';

OPENPAREN : '(';

CLOSEPAREN : ')';

OPENBRACKET : '{';

CLOSEBRACKET : '}';

ASSIGN : '=';

EQUALITY : '==';

LESS : '<';

ADD : '+';

SUB : '-';

MUL : '*';

DIV : '/';

// env: envelop
TYPE : 'int' | 'float' | 'char' | 'string' | 'void' | 'osc' | 'env';

STRING : '"' [a-zA-Z_0-9.]* '"'; // no space

INT : [0-9]+; // can have leading 0s

FLOAT : [0-9]+ '.' [0-9]+;

CHAR : '\'' [a-zA-Z_.] '\'';

ID : [a-zA-Z_]+ ;

NEWLINE: ('\r' '\n'? | '\n') -> skip;

WS: [ \t]+ -> skip;

BLOCKCOMMENT : '/*'.*? '*/'->skip;

LINECOMMENT : '//' ~[\r\n]* -> skip;
