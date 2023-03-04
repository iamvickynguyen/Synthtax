#include <iostream>
#include <lexer.h>
#include <stdio.h>
#include <cstring>

int main() {
	char* input = new char[15];
	strcpy(input, "0023.4+56;");
	
	lex::TokenArray arr;
	arr = lex::lex_input(input);

	delete[] input;
	//lex::debug_print_token_array(arr);
	return 0;
}
