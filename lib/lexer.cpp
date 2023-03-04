#include <iostream>
#include <lexer.h>

namespace lex {
	bool is_whitespace(char c) {
		return (c == ' ') || (c == '\t') || (c == '\f') || (c == '\v');
	}

	bool is_end_of_line(char c) {
		return (c == '\n') || (c == '\r');
	}

	bool is_letter(char c) {
		return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	}

	bool is_numeric(char c) {
		return (c >= '0' && c <= '9');
	}

	void ignore_comments_and_whitespaces(Tokenizer& tokenizer) {
		if (is_whitespace(tokenizer.pos[0])) ++tokenizer.pos;

		// Look for // and /* symbols
		if (tokenizer.pos[0] == '/' && tokenizer.pos[1] == '/') {
			while (!is_end_of_line(tokenizer.pos[0])) ++tokenizer.pos;
			++tokenizer.pos;
		} else if (tokenizer.pos[0] == '/' && tokenizer.pos[1] == '*') {
			while (!(tokenizer.pos[0] == '*' && tokenizer.pos[1] == '/')) ++tokenizer.pos;
			tokenizer.pos += 2;
		}
	}

	Token get_token(Tokenizer& tokenizer) {
		Token token;
		
		ignore_comments_and_whitespaces(tokenizer);
		
		switch(tokenizer.pos[0]) {
			case '\0':
				{
					token.type = TOK_EOF;
					token.value = "EndSymbol";
				} break;
			
			case '(': token.type = LPAREN; break;
			case ')': token.type = RPAREN; break;
			case '[': token.type = LBRACKET; break;
			case ']': token.type = RBRACKET; break;
			case '{': token.type = LBRACE; break;
			case '}': token.type = RBRACE; break;
			case ';': token.type = SEMICOLON; break;
			
			case '+': token.type = PLUS; break;
			case '-': token.type = MINUS; break;
			case '*': token.type = MUL; break;
			case '/': token.type = DIV; break;
			case '=': token.type = EQUAL; break;
			case '<': token.type = LESS; break;
			case '!': token.type = NOT; break;

			case '"':
				{
					++tokenizer.pos; // skip "

					token.type = STRING;
					char* start_pos = tokenizer.pos;

					while (tokenizer.pos[0] != '"') {
						++tokenizer.pos;

						// TODO: throw semantic exception with line and offset?
						// error: forgot to close quotation
						if (tokenizer.pos[0] == '\0') {
							std::cerr << "Error: Missing closing quotation mark\n";
							token.type = UNKNOWN;
							break;
						}
					}

					// copy string to token value
					while (start_pos != tokenizer.pos) {
						token.value.push_back(*start_pos);
						++start_pos;
					}

					++tokenizer.pos; // skip " at the end
				} break;

			default:
				{
					if (is_letter(tokenizer.pos[0])) {
						char* start_pos = tokenizer.pos;
						token.type = IDENTIFIER;

						// unlimited length for now
						while (is_letter(tokenizer.pos[0]) || is_numeric(tokenizer.pos[0]) || tokenizer.pos[0] == '_') {
							++tokenizer.pos;
						}
						
						// copy to token value
						while (start_pos != tokenizer.pos) {
							token.value.push_back(*start_pos);
							++start_pos;
						}

						// Check if it matches a keyword
						if (token.value == "if") token.type = IF;
						else if (token.value == "while") token.type = WHILE;
						else if (token.value == "for") token.type = FOR;
						else if (token.value == "return") token.type = RETURN;
						else if (token.value == "true" || token.value == "false") token.type = BOOL;
					} else if (is_numeric(tokenizer.pos[0])) {
						int dot_count = 0;
						char* start_pos = tokenizer.pos;
						token.type = DIGIT;

						while (is_numeric(tokenizer.pos[0])) {
							++tokenizer.pos;

							if (tokenizer.pos[0] == '.') {
								++dot_count;
								++tokenizer.pos;
								token.type = FLOAT;
							}
						}

						// TODO: throw exception?
						// Invalid float
						if (dot_count > 1) {
							std::cerr << "Error: Invalid number\n";
							token.type = UNKNOWN;
						}

						// Eat leading 0's
						// TODO: should handle big number
						int value = 0;
						while (start_pos != tokenizer.pos && start_pos[0] != '.') {
							int d = *start_pos - '0';
							value = value * 10 + d;
							++start_pos;
						}

						token.value = std::to_string(value);

						// copy the decimal value to token
						if (token.type == FLOAT) {
							++start_pos; // skip .
							token.value.push_back('.');
						}

						while (start_pos != tokenizer.pos) {
							token.value.push_back(*start_pos);
							++start_pos;
						}
					}
			} break;		
		}

		return token;
	}


	TokenArray lex_input(char* input) {
		TokenArray token_array;
		Tokenizer tokenizer;
		tokenizer.pos = input;
		
		while (true) {
			token_array.tokens.push_back(std::move(get_token(tokenizer)));
			++tokenizer.count;
			if (token_array.tokens[tokenizer.count - 1].type == TOK_EOF)
				break;
		}

		return token_array;
	}

	void debug_print_token_array(TokenArray& arr) {
		for (int i = 0; i < arr.tokens.size(); ++i) {
			std::cout << arr.tokens[i].type << ": " << arr.tokens[i].value << '\n';
		}
	}
} // namespace lex
