
// Generated from SynthtaxLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace synthtax_antlr {


class  SynthtaxLexer : public antlr4::Lexer {
public:
  enum {
    HEADER = 1, IF = 2, ELSE = 3, WHILE = 4, PRINT = 5, PRINTLN = 6, RETURN = 7, 
    BOOL = 8, COMMA = 9, COLON = 10, SEMICOLON = 11, OPENPAREN = 12, CLOSEPAREN = 13, 
    OPENBRACKET = 14, CLOSEBRACKET = 15, ASSIGN = 16, EQUALITY = 17, LESS = 18, 
    ADD = 19, SUB = 20, MUL = 21, DIV = 22, TYPE = 23, STRING = 24, INT = 25, 
    FLOAT = 26, CHAR = 27, ID = 28, NEWLINE = 29, WS = 30, BLOCKCOMMENT = 31, 
    LINECOMMENT = 32
  };

  explicit SynthtaxLexer(antlr4::CharStream *input);

  ~SynthtaxLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace synthtax_antlr
