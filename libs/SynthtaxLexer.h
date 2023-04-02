
// Generated from SynthtaxLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace synthtax_antlr {


class  SynthtaxLexer : public antlr4::Lexer {
public:
  enum {
    DEF = 1, IF = 2, ELSE = 3, WHILE = 4, RETURN = 5, BOOL = 6, COMMA = 7, 
    SEMICOLON = 8, OPENPAREN = 9, CLOSEPAREN = 10, OPENBRACKET = 11, CLOSEBRACKET = 12, 
    ASSIGN = 13, EQUALITY = 14, LESS = 15, ADD = 16, SUB = 17, MUL = 18, 
    DIV = 19, STRING = 20, INT = 21, FLOAT = 22, CHAR = 23, ID = 24, NEWLINE = 25, 
    WS = 26, BLOCKCOMMENT = 27, LINECOMMENT = 28
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
