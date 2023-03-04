#include <iostream>
#include <string>
#include <vector>

namespace lex {
enum Token { INT, FLOAT, ADD, SUB, MUL, DIV, LPAREN, RPAREN };

struct TokenInfo {
  Token type;
  string value;
};

class Lexer {
public:
	static char lastchar;
	static std::string identifier_str;
	static double number_val;

	Lexer() {}

	static int gettok() {
		// skip white space
		while (isspace(lastchar))
			lastchar = getchar();

		// identifier: [a-zA-Z][a-zA-Z0-9]*
		if (isalpha(lastchar)) {
			identifier_str = lastchar;
			while (isalnum((lastchar = getchar())))
				identifier_str.push_back(lastchar);
		}

		// number: [0-9.]*
		if (isdigit(lastchar) || lastchar == '.') {
			std::string numstr;
			do {
				numstr.push_back(lastchar);
				lastchar = getchar();
			} while (isdigit(lastchar) || lastchar == '.');

			number_val = strod(numstr);
			return 
		}
	}
};

} // namespace lex
