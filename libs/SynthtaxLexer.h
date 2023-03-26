
// Generated from SynthtaxLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace synthtax_antlr {


class  SynthtaxLexer : public antlr4::Lexer {
public:
  enum {
    STRING = 1, DIGIT = 2, INT = 3, FLOAT = 4, CHAR = 5, LETTER = 6, BOOL = 7, 
    COMMA = 8, SEMICOLON = 9, OPENPAREN = 10, CLOSEPAREN = 11, OPENBRACKET = 12, 
    CLOSEBRACKET = 13, IF = 14, ELSE = 15, WHILE = 16, RETURN = 17, ASSIGN = 18, 
    EQUALITY = 19, LESS = 20, ADD = 21, SUB = 22, MUL = 23, DIV = 24, NEWLINE = 25, 
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
