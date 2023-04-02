lexer grammar SynthtaxLexer;

DEF : 'fun';

IF : 'if';

ELSE : 'else';

WHILE : 'while';

RETURN : 'return';

BOOL : 'true' | 'false';

COMMA : ',';

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

STRING : '"' [a-zA-Z_0-9]* '"'; // no new line

INT : [0-9]+; // can have leading 0s

FLOAT : [0-9]+ '.' [0-9]+;

CHAR : '\'' [a-zA-Z_] '\'';

ID : [a-zA-Z_]+ ;

NEWLINE: ('\r' '\n'? | '\n') -> skip;

WS: [ \t]+ -> skip;

BLOCKCOMMENT : '/*'.*? '*/'->skip;

LINECOMMENT : '//' ~[\r\n]* -> skip;
