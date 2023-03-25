
// Generated from SynthtaxLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace synthtax_antlr {


class  SynthtaxLexer : public antlr4::Lexer {
public:
  enum {
    STRING = 1, INT = 2, FLOAT = 3, CHAR = 4, LETTER = 5, BOOL = 6, COMMA = 7, 
    SEMICOLON = 8, OPENPAREN = 9, CLOSEPAREN = 10, OPENBRACKET = 11, CLOSEBRACKET = 12, 
    IF = 13, ELSE = 14, WHILE = 15, RETURN = 16, ASSIGN = 17, EQUALITY = 18, 
    LESS = 19, ADD = 20, SUB = 21, MUL = 22, DIV = 23, NEWLINE = 24, WS = 25, 
    BLOCKCOMMENT = 26, LINECOMMENT = 27
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
