lexer grammar SynthtaxLexer;

DEF : 'fun';

ID : [a-zA-Z_][a-zA-Z_0-9]+ ;

IF : 'if';

ELSE : 'else';

WHILE : 'while';

RETURN : 'return';

STRING : '"' [a-zA-Z_0-9 ]* '"'; // no new line

INT : [0-9]+; // can have leading 0s

FLOAT : [0-9]+ '.' [0-9]+;

CHAR : '\'' [a-zA-Z_ ] '\'';

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

NEWLINE: ('\r' '\n'? | '\n') -> skip;

WS: [ \t]+ -> skip;

BLOCKCOMMENT : '/*'.*? '*/'->skip;

LINECOMMENT : '//' ~[\r\n]* -> skip;
