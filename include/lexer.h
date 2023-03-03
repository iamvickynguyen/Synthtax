#include <iostream>
#include <string>
#include <vector>

namespace lex {
enum Token { INT, FLOAT, ADD, SUB, MUL, DIV, LPAREN, RPAREN };

struct TokenInfo {
  Token type;
  string value;
};
} // namespace lex
