#include "CppTranspilerVisitor.h"
#include "IRBuilder.h"
#include "antlr4-runtime.h"
#include "libs/SynthtaxLexer.h"
#include "libs/SynthtaxParser.h"
#include <fstream>
#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace antlr4;
using namespace llvm;

void transpile(const std::string &filepath,
               synthtax_antlr::SynthtaxParser::ProgContext *prog) {
  synthtax_antlr::CppTranspilerVisitor visitor;
  visitor.visitProg(prog);

  std::ofstream out;
  out.open(filepath);
  out << visitor.outfile.str();
  out.close();
}

void build_ir(const std::string &filepath,
              synthtax_antlr::SynthtaxParser::ProgContext *prog) {
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

void print_options() {
  std::cout
      << "Usage:\n"
      << "-i: input file path\n"
      << "-o: output file path\n"
      << "-m: (optional) mode \"cpp\" for transpiling to C++ or \"ll\" for "
         "generating LLVM IR. Default is \"cpp\"\n";
}

int main(int argc, char *argv[]) {
  int opt;
  std::string input_file, output_file;
  bool is_ir;

  // get arguments
  while ((opt = getopt(argc, argv, "hi:o:m:")) != -1) {
    switch (opt) {
    case 'h':
      print_options();
      return 0;
    case 'i':
      input_file = optarg;
      break;
    case 'o':
      output_file = optarg;
      break;
    case 'm':
      is_ir = strcmp(optarg, "ll") == 0;
      break;
    default: // error
      print_options();
      return 1;
    }
  }

  // check args
  if (input_file.empty() || output_file.empty()) {
    std::cout << "Error: missing arguments\n";
    print_options();
    return 1;
  }

  // compile
  std::ifstream stream;
  stream.open(input_file);

  ANTLRInputStream input(stream);
  synthtax_antlr::SynthtaxLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  synthtax_antlr::SynthtaxParser parser(&tokens);
  synthtax_antlr::SynthtaxParser::ProgContext *prog = parser.prog();

  stream.close();

  if (is_ir)
    build_ir(output_file, prog);
  else
    transpile(output_file, prog);

  return 0;
}
