
// Generated from SynthtaxLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace synthtax_antlr {


class  SynthtaxLexer : public antlr4::Lexer {
public:
  enum {
    HEADER = 1, IF = 2, ELSE = 3, WHILE = 4, RETURN = 5, BOOL = 6, COMMA = 7, 
    COLON = 8, SEMICOLON = 9, OPENPAREN = 10, CLOSEPAREN = 11, OPENBRACKET = 12, 
    CLOSEBRACKET = 13, ASSIGN = 14, EQUALITY = 15, LESS = 16, ADD = 17, 
    SUB = 18, MUL = 19, DIV = 20, TYPE = 21, STRING = 22, INT = 23, FLOAT = 24, 
    CHAR = 25, ID = 26, NEWLINE = 27, WS = 28, BLOCKCOMMENT = 29, LINECOMMENT = 30
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
