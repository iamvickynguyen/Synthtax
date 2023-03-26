#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "libs/SynthtaxLexer.h"
#include "libs/SynthtaxParser.h"

using namespace antlr4;

int main(int argc, const char *argv[]) {
  std::ifstream stream;
  stream.open("../test/hello.in");

  ANTLRInputStream input(stream);
  synthtax_antlr::SynthtaxLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

	tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << '\n';
  }

  synthtax_antlr::SynthtaxParser parser(&tokens);

  tree::ParseTree *tree = parser.prog();
  std::cout << tree->toStringTree(&parser) << '\n';

  return 0;
}
