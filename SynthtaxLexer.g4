lexer grammar SynthtaxLexer;

STRING : '"' (LETTER | [0-9])*? '"';

INT : [1-9][0-9]*;

FLOAT : INT+ '.' INT+ ;

CHAR : '\'' LETTER '\'';

LETTER : [a-zA-Z_];

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
