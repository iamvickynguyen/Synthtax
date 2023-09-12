#include "antlr4-runtime.h"
#include "libs/SynthtaxLexer.h"
#include "libs/SynthtaxParser.h"
#include "CppTranspilerVisitor.h"
#include "IRBuilder.h"
#include <fstream>
#include <iostream>

using namespace antlr4;
using namespace llvm;

void transpile(const char *filepath, synthtax_antlr::SynthtaxParser::ProgContext *prog) {
  synthtax_antlr::CppTranspilerVisitor visitor;
  visitor.visitProg(prog);

  std::ofstream out;
  out.open(filepath);
  out << visitor.outfile.str();
  out.close();
}

void build_ir(const char *filepath, synthtax_antlr::SynthtaxParser::ProgContext *prog) {
  llvm::LLVMContext context;
  llvm::Module module("synthtax_module", context);
  llvm::IRBuilder<> builder(context);

  synthtax_antlr::IRBuilder ir_builder(context, module, builder);
  ir_builder.visitProg(prog);

  std::string str;
  llvm::raw_string_ostream os(str);
  module.print(os, nullptr);

  std::ofstream out;
  out.open(filepath);
  out << str;
  out.close();
}

int main(int argc, const char *argv[]) {
	if (argc != 3) {
		std::cout << "Invalid argument(s)\n";
		return 0;
	}

  std::ifstream stream;
  stream.open(argv[1]);

  ANTLRInputStream input(stream);
  synthtax_antlr::SynthtaxLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  synthtax_antlr::SynthtaxParser parser(&tokens);
	synthtax_antlr::SynthtaxParser::ProgContext *prog = parser.prog();

  stream.close();

  // Uncomment the line below to transpile to C++ code
  // transpile(argv[2], prog);

  // Output LLVM IR
  build_ir(argv[2], prog);

  return 0;
}
