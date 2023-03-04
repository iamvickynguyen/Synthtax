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

	Token get_token(Tokenizer& tokenizer) {}

	void delete_token_array_contents(TokenArray arr) {
		for (int i = 0; i < arr.count; ++i) {
			delete[] arr.tokens[i].value;
		}
	}

	void delete_tokens(TokenArray arr) {
		delete_token_array_contents(arr);
		delete[] arr.tokens;
		arr = {};
	}

	void init_token_array(TokenArray& arr, unsigned int size) {
		arr.tokens = new Token[size];
		arr.capacity = size;
	}

	void resize_token_array(TokenArray& arr, unsigned int size) {
		delete_tokens(arr);
		init_token_array(arr, size);
	}

	TokenArray lex_input(char* input) {
		Tokenizer tokenizer = {};
		tokenizer.pos = input;

		TokenArray token_array = {};
		init_token_array(token_array, 10);

		while (true) {
			token_array.tokens[tokenizer.count] = get_token(tokenizer);
			++tokenizer.count;

			if (tokenizer.count == token_array.capacity) {
				resize_token_array(token_array, token_array.capacity * 2);
			}

			if (token_array.tokens[tokenizer.count - 1].type == EOF) {
				break;
			}
		}

		token_array.count = tokenizer.count;
		return token_array;
	}
} // namespace lex
