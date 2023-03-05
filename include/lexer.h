#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <vector>

namespace lex {
	enum TokenType {
		IDENTIFIER,

		// Literals
		DIGIT,
		FLOAT,
		STRING,
		BOOL,

		// Operators
		PLUS,
		MINUS,
		MUL,
		DIV,
		EQUAL,
		LESS,
		LEQ,
		NOT,

		// Seperators
		LPAREN,
		RPAREN,
		LBRACKET,
		RBRACKET,
		LBRACE,
		RBRACE,
		SEMICOLON,

		// Keywords
		IF,
		WHILE,
		FOR,
		RETURN,
		
		// Unique
		TOK_EOF,
		UNKNOWN
	};

	struct Token {
		TokenType type;
		std::string value;
	};

	struct TokenArray {
		std::vector<Token> tokens;
	};

	struct Tokenizer {
		std::string input;
		int pos;
	};

	bool is_whitespace(char c);
	bool is_end_of_line(char c);
	bool is_letter(char c);
	bool is_numeric(char c);

	void ignore_comments_and_whitespaces(Tokenizer& tokenizer);
	
	Token get_token(Tokenizer& tokenizer);
	TokenArray lex_input(const std::string& input);

	void debug_print_token_array(TokenArray& arr);
} // namespace lex

#endif
