lexer grammar SynthtaxLexer;

STRING : '"' (LETTER | DIGIT | WS)* '"'; // no new line

DIGIT: [0-9];

INT : DIGIT+; // can have leading 0s, [BUG]: cannot have 1 digit

FLOAT : DIGIT+ '.' DIGIT+;

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
