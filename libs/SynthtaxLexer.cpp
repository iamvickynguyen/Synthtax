
// Generated from SynthtaxLexer.g4 by ANTLR 4.12.0


#include "SynthtaxLexer.h"


using namespace antlr4;

using namespace synthtax_antlr;


using namespace antlr4;

namespace {

struct SynthtaxLexerStaticData final {
  SynthtaxLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SynthtaxLexerStaticData(const SynthtaxLexerStaticData&) = delete;
  SynthtaxLexerStaticData(SynthtaxLexerStaticData&&) = delete;
  SynthtaxLexerStaticData& operator=(const SynthtaxLexerStaticData&) = delete;
  SynthtaxLexerStaticData& operator=(SynthtaxLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag synthtaxlexerLexerOnceFlag;
SynthtaxLexerStaticData *synthtaxlexerLexerStaticData = nullptr;

void synthtaxlexerLexerInitialize() {
  assert(synthtaxlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<SynthtaxLexerStaticData>(
    std::vector<std::string>{
      "STRING", "INT", "FLOAT", "CHAR", "ID", "BOOL", "COMMA", "SEMICOLON", 
      "OPENPAREN", "CLOSEPAREN", "OPENBRACKET", "CLOSEBRACKET", "IF", "ELSE", 
      "WHILE", "RETURN", "ASSIGN", "EQUALITY", "LESS", "ADD", "SUB", "MUL", 
      "DIV", "NEWLINE", "WS", "BLOCKCOMMENT", "LINECOMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "','", "';'", "'('", "')'", "'{'", "'}'", 
      "'if'", "'else'", "'while'", "'return'", "'='", "'=='", "'<'", "'+'", 
      "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "STRING", "INT", "FLOAT", "CHAR", "ID", "BOOL", "COMMA", "SEMICOLON", 
      "OPENPAREN", "CLOSEPAREN", "OPENBRACKET", "CLOSEBRACKET", "IF", "ELSE", 
      "WHILE", "RETURN", "ASSIGN", "EQUALITY", "LESS", "ADD", "SUB", "MUL", 
      "DIV", "NEWLINE", "WS", "BLOCKCOMMENT", "LINECOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,27,191,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,5,0,58,
  	8,0,10,0,12,0,61,9,0,1,0,1,0,1,1,4,1,66,8,1,11,1,12,1,67,1,2,4,2,71,8,
  	2,11,2,12,2,72,1,2,1,2,4,2,77,8,2,11,2,12,2,78,1,3,1,3,1,3,1,3,1,4,1,
  	4,5,4,87,8,4,10,4,12,4,90,9,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,
  	101,8,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,
  	1,12,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,19,1,19,
  	1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,3,23,153,8,23,1,23,3,23,156,8,
  	23,1,23,1,23,1,24,4,24,161,8,24,11,24,12,24,162,1,24,1,24,1,25,1,25,1,
  	25,1,25,5,25,171,8,25,10,25,12,25,174,9,25,1,25,1,25,1,25,1,25,1,25,1,
  	26,1,26,1,26,1,26,5,26,185,8,26,10,26,12,26,188,9,26,1,26,1,26,1,172,
  	0,27,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,
  	25,51,26,53,27,1,0,6,4,0,32,32,65,90,95,95,97,122,1,0,48,57,3,0,65,90,
  	95,95,97,122,4,0,48,57,65,90,95,95,97,122,2,0,9,9,32,32,2,0,10,10,13,
  	13,201,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,
  	11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,
  	0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,
  	0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,
  	43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,
  	0,0,0,1,55,1,0,0,0,3,65,1,0,0,0,5,70,1,0,0,0,7,80,1,0,0,0,9,84,1,0,0,
  	0,11,100,1,0,0,0,13,102,1,0,0,0,15,104,1,0,0,0,17,106,1,0,0,0,19,108,
  	1,0,0,0,21,110,1,0,0,0,23,112,1,0,0,0,25,114,1,0,0,0,27,117,1,0,0,0,29,
  	122,1,0,0,0,31,128,1,0,0,0,33,135,1,0,0,0,35,137,1,0,0,0,37,140,1,0,0,
  	0,39,142,1,0,0,0,41,144,1,0,0,0,43,146,1,0,0,0,45,148,1,0,0,0,47,155,
  	1,0,0,0,49,160,1,0,0,0,51,166,1,0,0,0,53,180,1,0,0,0,55,59,5,34,0,0,56,
  	58,7,0,0,0,57,56,1,0,0,0,58,61,1,0,0,0,59,57,1,0,0,0,59,60,1,0,0,0,60,
  	62,1,0,0,0,61,59,1,0,0,0,62,63,5,34,0,0,63,2,1,0,0,0,64,66,7,1,0,0,65,
  	64,1,0,0,0,66,67,1,0,0,0,67,65,1,0,0,0,67,68,1,0,0,0,68,4,1,0,0,0,69,
  	71,7,1,0,0,70,69,1,0,0,0,71,72,1,0,0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,
  	74,1,0,0,0,74,76,5,46,0,0,75,77,7,1,0,0,76,75,1,0,0,0,77,78,1,0,0,0,78,
  	76,1,0,0,0,78,79,1,0,0,0,79,6,1,0,0,0,80,81,5,39,0,0,81,82,7,0,0,0,82,
  	83,5,39,0,0,83,8,1,0,0,0,84,88,7,2,0,0,85,87,7,3,0,0,86,85,1,0,0,0,87,
  	90,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,89,10,1,0,0,0,90,88,1,0,0,0,91,
  	92,5,116,0,0,92,93,5,114,0,0,93,94,5,117,0,0,94,101,5,101,0,0,95,96,5,
  	102,0,0,96,97,5,97,0,0,97,98,5,108,0,0,98,99,5,115,0,0,99,101,5,101,0,
  	0,100,91,1,0,0,0,100,95,1,0,0,0,101,12,1,0,0,0,102,103,5,44,0,0,103,14,
  	1,0,0,0,104,105,5,59,0,0,105,16,1,0,0,0,106,107,5,40,0,0,107,18,1,0,0,
  	0,108,109,5,41,0,0,109,20,1,0,0,0,110,111,5,123,0,0,111,22,1,0,0,0,112,
  	113,5,125,0,0,113,24,1,0,0,0,114,115,5,105,0,0,115,116,5,102,0,0,116,
  	26,1,0,0,0,117,118,5,101,0,0,118,119,5,108,0,0,119,120,5,115,0,0,120,
  	121,5,101,0,0,121,28,1,0,0,0,122,123,5,119,0,0,123,124,5,104,0,0,124,
  	125,5,105,0,0,125,126,5,108,0,0,126,127,5,101,0,0,127,30,1,0,0,0,128,
  	129,5,114,0,0,129,130,5,101,0,0,130,131,5,116,0,0,131,132,5,117,0,0,132,
  	133,5,114,0,0,133,134,5,110,0,0,134,32,1,0,0,0,135,136,5,61,0,0,136,34,
  	1,0,0,0,137,138,5,61,0,0,138,139,5,61,0,0,139,36,1,0,0,0,140,141,5,60,
  	0,0,141,38,1,0,0,0,142,143,5,43,0,0,143,40,1,0,0,0,144,145,5,45,0,0,145,
  	42,1,0,0,0,146,147,5,42,0,0,147,44,1,0,0,0,148,149,5,47,0,0,149,46,1,
  	0,0,0,150,152,5,13,0,0,151,153,5,10,0,0,152,151,1,0,0,0,152,153,1,0,0,
  	0,153,156,1,0,0,0,154,156,5,10,0,0,155,150,1,0,0,0,155,154,1,0,0,0,156,
  	157,1,0,0,0,157,158,6,23,0,0,158,48,1,0,0,0,159,161,7,4,0,0,160,159,1,
  	0,0,0,161,162,1,0,0,0,162,160,1,0,0,0,162,163,1,0,0,0,163,164,1,0,0,0,
  	164,165,6,24,0,0,165,50,1,0,0,0,166,167,5,47,0,0,167,168,5,42,0,0,168,
  	172,1,0,0,0,169,171,9,0,0,0,170,169,1,0,0,0,171,174,1,0,0,0,172,173,1,
  	0,0,0,172,170,1,0,0,0,173,175,1,0,0,0,174,172,1,0,0,0,175,176,5,42,0,
  	0,176,177,5,47,0,0,177,178,1,0,0,0,178,179,6,25,0,0,179,52,1,0,0,0,180,
  	181,5,47,0,0,181,182,5,47,0,0,182,186,1,0,0,0,183,185,8,5,0,0,184,183,
  	1,0,0,0,185,188,1,0,0,0,186,184,1,0,0,0,186,187,1,0,0,0,187,189,1,0,0,
  	0,188,186,1,0,0,0,189,190,6,26,0,0,190,54,1,0,0,0,12,0,59,67,72,78,88,
  	100,152,155,162,172,186,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  synthtaxlexerLexerStaticData = staticData.release();
}

}

SynthtaxLexer::SynthtaxLexer(CharStream *input) : Lexer(input) {
  SynthtaxLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *synthtaxlexerLexerStaticData->atn, synthtaxlexerLexerStaticData->decisionToDFA, synthtaxlexerLexerStaticData->sharedContextCache);
}

SynthtaxLexer::~SynthtaxLexer() {
  delete _interpreter;
}

std::string SynthtaxLexer::getGrammarFileName() const {
  return "SynthtaxLexer.g4";
}

const std::vector<std::string>& SynthtaxLexer::getRuleNames() const {
  return synthtaxlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& SynthtaxLexer::getChannelNames() const {
  return synthtaxlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& SynthtaxLexer::getModeNames() const {
  return synthtaxlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& SynthtaxLexer::getVocabulary() const {
  return synthtaxlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SynthtaxLexer::getSerializedATN() const {
  return synthtaxlexerLexerStaticData->serializedATN;
}

const atn::ATN& SynthtaxLexer::getATN() const {
  return *synthtaxlexerLexerStaticData->atn;
}




void SynthtaxLexer::initialize() {
  ::antlr4::internal::call_once(synthtaxlexerLexerOnceFlag, synthtaxlexerLexerInitialize);
}
