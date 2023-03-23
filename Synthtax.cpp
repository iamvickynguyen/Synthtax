#include <iostream>

//#include "antlr4-runtime.h"
#include "libs/SynthtaxLexer.h"
//#include "libs/SynthtaxParser.h"

using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open("test/hello.in");
    
    ANTLRInputStream input(stream);
    SynthtaxLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    SynthtaxParser parser(&tokens);    
    
		SynthtaxParser::FileContext* tree = parser.file();

//    ImageVisitor visitor;
//    Synthtax scene = std::any_cast<Synthtax>(visitor.visitFile(tree));
//    scene.draw();	

    return 0;
}
