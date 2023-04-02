#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "libs/SynthtaxLexer.h"
#include "libs/SynthtaxParser.h"

using namespace antlr4;

/*
class MyErrorStrategy : public DefaultErrorStrategy {
public:
  virtual void reportInputMismatch(Parser *recognizer, const InputMismatchException &e) {
    // Do nothing to ignore input mismatch errors
  }
};
*/

int main(int argc, const char *argv[]) {
  std::ifstream stream;
  stream.open("../test/mini.in");

  ANTLRInputStream input(stream);
  synthtax_antlr::SynthtaxLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

   tokens.fill();
   for (auto token : tokens.getTokens()) {
     std::cout << token->toString() << '\n';
   }
		
	lexer.reset();

  synthtax_antlr::SynthtaxParser parser(&tokens);

	/*
	// Use the custom error strategy to ignore input mismatch errors
  parser.setErrorHandler(std::make_shared<MyErrorStrategy>());
	*/

  tree::ParseTree *tree = parser.prog();
  std::cout << tree->toStringTree(&parser) << '\n';

  return 0;
}
