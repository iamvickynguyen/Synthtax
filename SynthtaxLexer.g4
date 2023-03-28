lexer grammar SynthtaxLexer;

STRING : '"' [a-zA-Z_ ]* '"'; // no new line

INT : [0-9]+; // can have leading 0s, [BUG]: cannot have 1 digit

FLOAT : [0-9]+ '.' [0-9]+;

CHAR : '\'' [a-zA-Z_ ] '\'';

ID : [a-zA-Z_][a-zA-Z_0-9]* ;

BOOL : 'true' | 'false';

COMMA : ',';

SEMICOLON : ';';

OPENPAREN : '(';

CLOSEPAREN : ')';

OPENBRACKET : '{';

CLOSEBRACKET : '}';

IF : 'if';

ELSE : 'else';

WHILE : 'while';

RETURN : 'return';

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
