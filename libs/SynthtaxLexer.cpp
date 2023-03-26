
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
      "STRING", "DIGIT", "INT", "FLOAT", "CHAR", "LETTER", "BOOL", "COMMA", 
      "SEMICOLON", "OPENPAREN", "CLOSEPAREN", "OPENBRACKET", "CLOSEBRACKET", 
      "IF", "ELSE", "WHILE", "RETURN", "ASSIGN", "EQUALITY", "LESS", "ADD", 
      "SUB", "MUL", "DIV", "NEWLINE", "WS", "BLOCKCOMMENT", "LINECOMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "','", "';'", "'('", "')'", "'{'", 
      "'}'", "'if'", "'else'", "'while'", "'return'", "'='", "'=='", "'<'", 
      "'+'", "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "STRING", "DIGIT", "INT", "FLOAT", "CHAR", "LETTER", "BOOL", "COMMA", 
      "SEMICOLON", "OPENPAREN", "CLOSEPAREN", "OPENBRACKET", "CLOSEBRACKET", 
      "IF", "ELSE", "WHILE", "RETURN", "ASSIGN", "EQUALITY", "LESS", "ADD", 
      "SUB", "MUL", "DIV", "NEWLINE", "WS", "BLOCKCOMMENT", "LINECOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,28,192,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,
  	1,0,1,0,1,0,5,0,62,8,0,10,0,12,0,65,9,0,1,0,1,0,1,1,1,1,1,2,4,2,72,8,
  	2,11,2,12,2,73,1,3,4,3,77,8,3,11,3,12,3,78,1,3,1,3,4,3,83,8,3,11,3,12,
  	3,84,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,
  	102,8,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,
  	13,1,13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,
  	16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,20,1,
  	20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,3,24,154,8,24,1,24,3,24,157,
  	8,24,1,24,1,24,1,25,4,25,162,8,25,11,25,12,25,163,1,25,1,25,1,26,1,26,
  	1,26,1,26,5,26,172,8,26,10,26,12,26,175,9,26,1,26,1,26,1,26,1,26,1,26,
  	1,27,1,27,1,27,1,27,5,27,186,8,27,10,27,12,27,189,9,27,1,27,1,27,1,173,
  	0,28,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,
  	25,51,26,53,27,55,28,1,0,4,1,0,48,57,3,0,65,90,95,95,97,122,2,0,9,9,32,
  	32,2,0,10,10,13,13,203,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,
  	0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
  	1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,
  	0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,
  	0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,
  	1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,1,57,1,0,0,0,3,68,1,0,0,0,5,71,1,0,
  	0,0,7,76,1,0,0,0,9,86,1,0,0,0,11,90,1,0,0,0,13,101,1,0,0,0,15,103,1,0,
  	0,0,17,105,1,0,0,0,19,107,1,0,0,0,21,109,1,0,0,0,23,111,1,0,0,0,25,113,
  	1,0,0,0,27,115,1,0,0,0,29,118,1,0,0,0,31,123,1,0,0,0,33,129,1,0,0,0,35,
  	136,1,0,0,0,37,138,1,0,0,0,39,141,1,0,0,0,41,143,1,0,0,0,43,145,1,0,0,
  	0,45,147,1,0,0,0,47,149,1,0,0,0,49,156,1,0,0,0,51,161,1,0,0,0,53,167,
  	1,0,0,0,55,181,1,0,0,0,57,63,5,34,0,0,58,62,3,11,5,0,59,62,3,3,1,0,60,
  	62,3,51,25,0,61,58,1,0,0,0,61,59,1,0,0,0,61,60,1,0,0,0,62,65,1,0,0,0,
  	63,61,1,0,0,0,63,64,1,0,0,0,64,66,1,0,0,0,65,63,1,0,0,0,66,67,5,34,0,
  	0,67,2,1,0,0,0,68,69,7,0,0,0,69,4,1,0,0,0,70,72,3,3,1,0,71,70,1,0,0,0,
  	72,73,1,0,0,0,73,71,1,0,0,0,73,74,1,0,0,0,74,6,1,0,0,0,75,77,3,3,1,0,
  	76,75,1,0,0,0,77,78,1,0,0,0,78,76,1,0,0,0,78,79,1,0,0,0,79,80,1,0,0,0,
  	80,82,5,46,0,0,81,83,3,3,1,0,82,81,1,0,0,0,83,84,1,0,0,0,84,82,1,0,0,
  	0,84,85,1,0,0,0,85,8,1,0,0,0,86,87,5,39,0,0,87,88,3,11,5,0,88,89,5,39,
  	0,0,89,10,1,0,0,0,90,91,7,1,0,0,91,12,1,0,0,0,92,93,5,116,0,0,93,94,5,
  	114,0,0,94,95,5,117,0,0,95,102,5,101,0,0,96,97,5,102,0,0,97,98,5,97,0,
  	0,98,99,5,108,0,0,99,100,5,115,0,0,100,102,5,101,0,0,101,92,1,0,0,0,101,
  	96,1,0,0,0,102,14,1,0,0,0,103,104,5,44,0,0,104,16,1,0,0,0,105,106,5,59,
  	0,0,106,18,1,0,0,0,107,108,5,40,0,0,108,20,1,0,0,0,109,110,5,41,0,0,110,
  	22,1,0,0,0,111,112,5,123,0,0,112,24,1,0,0,0,113,114,5,125,0,0,114,26,
  	1,0,0,0,115,116,5,105,0,0,116,117,5,102,0,0,117,28,1,0,0,0,118,119,5,
  	101,0,0,119,120,5,108,0,0,120,121,5,115,0,0,121,122,5,101,0,0,122,30,
  	1,0,0,0,123,124,5,119,0,0,124,125,5,104,0,0,125,126,5,105,0,0,126,127,
  	5,108,0,0,127,128,5,101,0,0,128,32,1,0,0,0,129,130,5,114,0,0,130,131,
  	5,101,0,0,131,132,5,116,0,0,132,133,5,117,0,0,133,134,5,114,0,0,134,135,
  	5,110,0,0,135,34,1,0,0,0,136,137,5,61,0,0,137,36,1,0,0,0,138,139,5,61,
  	0,0,139,140,5,61,0,0,140,38,1,0,0,0,141,142,5,60,0,0,142,40,1,0,0,0,143,
  	144,5,43,0,0,144,42,1,0,0,0,145,146,5,45,0,0,146,44,1,0,0,0,147,148,5,
  	42,0,0,148,46,1,0,0,0,149,150,5,47,0,0,150,48,1,0,0,0,151,153,5,13,0,
  	0,152,154,5,10,0,0,153,152,1,0,0,0,153,154,1,0,0,0,154,157,1,0,0,0,155,
  	157,5,10,0,0,156,151,1,0,0,0,156,155,1,0,0,0,157,158,1,0,0,0,158,159,
  	6,24,0,0,159,50,1,0,0,0,160,162,7,2,0,0,161,160,1,0,0,0,162,163,1,0,0,
  	0,163,161,1,0,0,0,163,164,1,0,0,0,164,165,1,0,0,0,165,166,6,25,0,0,166,
  	52,1,0,0,0,167,168,5,47,0,0,168,169,5,42,0,0,169,173,1,0,0,0,170,172,
  	9,0,0,0,171,170,1,0,0,0,172,175,1,0,0,0,173,174,1,0,0,0,173,171,1,0,0,
  	0,174,176,1,0,0,0,175,173,1,0,0,0,176,177,5,42,0,0,177,178,5,47,0,0,178,
  	179,1,0,0,0,179,180,6,26,0,0,180,54,1,0,0,0,181,182,5,47,0,0,182,183,
  	5,47,0,0,183,187,1,0,0,0,184,186,8,3,0,0,185,184,1,0,0,0,186,189,1,0,
  	0,0,187,185,1,0,0,0,187,188,1,0,0,0,188,190,1,0,0,0,189,187,1,0,0,0,190,
  	191,6,27,0,0,191,56,1,0,0,0,12,0,61,63,73,78,84,101,153,156,163,173,187,
  	1,6,0,0
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
