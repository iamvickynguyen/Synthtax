#ifndef LEXER_H
#define LEXER_H

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
		EOF
	};

	struct Token {
		TokenType type;
		char* value;
		int length;
	};

	struct TokenArray {
		Token* tokens;
		int size;
		int capacity;
	};

	struct Tokenizer {
		char* pos;
		int count;
	};

	bool is_whitespace(char c);
	bool is_end_of_line(char c);
	bool is_letter(char c);
	bool is_numeric(char c);

	void ignore_comments_and_whitespaces(Tokenizer& tokenizer);

	Token get_token(Tokenizer& tokenizer);

	void delete_token_array_contents(TokenArray arr);
	void delete_tokens(TokenArray arr); 
	void init_token_array(TokenArray& arr, unsigned int size);
	void resize_token_array(TokenArray& arr, unsigned int size);

	TokenArray lex_input(char* input);
} // namespace lex

#endif
