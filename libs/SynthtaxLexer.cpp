
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
      "DEF", "ID", "IF", "ELSE", "WHILE", "RETURN", "STRING", "INT", "FLOAT", 
      "CHAR", "BOOL", "COMMA", "SEMICOLON", "OPENPAREN", "CLOSEPAREN", "OPENBRACKET", 
      "CLOSEBRACKET", "ASSIGN", "EQUALITY", "LESS", "ADD", "SUB", "MUL", 
      "DIV", "NEWLINE", "WS", "BLOCKCOMMENT", "LINECOMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'fun'", "", "'if'", "'else'", "'while'", "'return'", "", "", 
      "", "", "", "','", "';'", "'('", "')'", "'{'", "'}'", "'='", "'=='", 
      "'<'", "'+'", "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "DEF", "ID", "IF", "ELSE", "WHILE", "RETURN", "STRING", "INT", 
      "FLOAT", "CHAR", "BOOL", "COMMA", "SEMICOLON", "OPENPAREN", "CLOSEPAREN", 
      "OPENBRACKET", "CLOSEBRACKET", "ASSIGN", "EQUALITY", "LESS", "ADD", 
      "SUB", "MUL", "DIV", "NEWLINE", "WS", "BLOCKCOMMENT", "LINECOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,28,196,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,
  	1,0,1,0,1,0,1,1,1,1,4,1,64,8,1,11,1,12,1,65,1,2,1,2,1,2,1,3,1,3,1,3,1,
  	3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,5,6,
  	91,8,6,10,6,12,6,94,9,6,1,6,1,6,1,7,4,7,99,8,7,11,7,12,7,100,1,8,4,8,
  	104,8,8,11,8,12,8,105,1,8,1,8,4,8,110,8,8,11,8,12,8,111,1,9,1,9,1,9,1,
  	9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,127,8,10,1,11,1,11,
  	1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,
  	1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,3,24,
  	158,8,24,1,24,3,24,161,8,24,1,24,1,24,1,25,4,25,166,8,25,11,25,12,25,
  	167,1,25,1,25,1,26,1,26,1,26,1,26,5,26,176,8,26,10,26,12,26,179,9,26,
  	1,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,5,27,190,8,27,10,27,12,27,
  	193,9,27,1,27,1,27,1,177,0,28,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,
  	19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,
  	21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,1,0,7,3,0,65,90,95,95,97,
  	122,4,0,48,57,65,90,95,95,97,122,5,0,32,32,48,57,65,90,95,95,97,122,1,
  	0,48,57,4,0,32,32,65,90,95,95,97,122,2,0,9,9,32,32,2,0,10,10,13,13,206,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,
  	0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,
  	1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,
  	0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,
  	0,55,1,0,0,0,1,57,1,0,0,0,3,61,1,0,0,0,5,67,1,0,0,0,7,70,1,0,0,0,9,75,
  	1,0,0,0,11,81,1,0,0,0,13,88,1,0,0,0,15,98,1,0,0,0,17,103,1,0,0,0,19,113,
  	1,0,0,0,21,126,1,0,0,0,23,128,1,0,0,0,25,130,1,0,0,0,27,132,1,0,0,0,29,
  	134,1,0,0,0,31,136,1,0,0,0,33,138,1,0,0,0,35,140,1,0,0,0,37,142,1,0,0,
  	0,39,145,1,0,0,0,41,147,1,0,0,0,43,149,1,0,0,0,45,151,1,0,0,0,47,153,
  	1,0,0,0,49,160,1,0,0,0,51,165,1,0,0,0,53,171,1,0,0,0,55,185,1,0,0,0,57,
  	58,5,102,0,0,58,59,5,117,0,0,59,60,5,110,0,0,60,2,1,0,0,0,61,63,7,0,0,
  	0,62,64,7,1,0,0,63,62,1,0,0,0,64,65,1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,
  	0,66,4,1,0,0,0,67,68,5,105,0,0,68,69,5,102,0,0,69,6,1,0,0,0,70,71,5,101,
  	0,0,71,72,5,108,0,0,72,73,5,115,0,0,73,74,5,101,0,0,74,8,1,0,0,0,75,76,
  	5,119,0,0,76,77,5,104,0,0,77,78,5,105,0,0,78,79,5,108,0,0,79,80,5,101,
  	0,0,80,10,1,0,0,0,81,82,5,114,0,0,82,83,5,101,0,0,83,84,5,116,0,0,84,
  	85,5,117,0,0,85,86,5,114,0,0,86,87,5,110,0,0,87,12,1,0,0,0,88,92,5,34,
  	0,0,89,91,7,2,0,0,90,89,1,0,0,0,91,94,1,0,0,0,92,90,1,0,0,0,92,93,1,0,
  	0,0,93,95,1,0,0,0,94,92,1,0,0,0,95,96,5,34,0,0,96,14,1,0,0,0,97,99,7,
  	3,0,0,98,97,1,0,0,0,99,100,1,0,0,0,100,98,1,0,0,0,100,101,1,0,0,0,101,
  	16,1,0,0,0,102,104,7,3,0,0,103,102,1,0,0,0,104,105,1,0,0,0,105,103,1,
  	0,0,0,105,106,1,0,0,0,106,107,1,0,0,0,107,109,5,46,0,0,108,110,7,3,0,
  	0,109,108,1,0,0,0,110,111,1,0,0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,
  	18,1,0,0,0,113,114,5,39,0,0,114,115,7,4,0,0,115,116,5,39,0,0,116,20,1,
  	0,0,0,117,118,5,116,0,0,118,119,5,114,0,0,119,120,5,117,0,0,120,127,5,
  	101,0,0,121,122,5,102,0,0,122,123,5,97,0,0,123,124,5,108,0,0,124,125,
  	5,115,0,0,125,127,5,101,0,0,126,117,1,0,0,0,126,121,1,0,0,0,127,22,1,
  	0,0,0,128,129,5,44,0,0,129,24,1,0,0,0,130,131,5,59,0,0,131,26,1,0,0,0,
  	132,133,5,40,0,0,133,28,1,0,0,0,134,135,5,41,0,0,135,30,1,0,0,0,136,137,
  	5,123,0,0,137,32,1,0,0,0,138,139,5,125,0,0,139,34,1,0,0,0,140,141,5,61,
  	0,0,141,36,1,0,0,0,142,143,5,61,0,0,143,144,5,61,0,0,144,38,1,0,0,0,145,
  	146,5,60,0,0,146,40,1,0,0,0,147,148,5,43,0,0,148,42,1,0,0,0,149,150,5,
  	45,0,0,150,44,1,0,0,0,151,152,5,42,0,0,152,46,1,0,0,0,153,154,5,47,0,
  	0,154,48,1,0,0,0,155,157,5,13,0,0,156,158,5,10,0,0,157,156,1,0,0,0,157,
  	158,1,0,0,0,158,161,1,0,0,0,159,161,5,10,0,0,160,155,1,0,0,0,160,159,
  	1,0,0,0,161,162,1,0,0,0,162,163,6,24,0,0,163,50,1,0,0,0,164,166,7,5,0,
  	0,165,164,1,0,0,0,166,167,1,0,0,0,167,165,1,0,0,0,167,168,1,0,0,0,168,
  	169,1,0,0,0,169,170,6,25,0,0,170,52,1,0,0,0,171,172,5,47,0,0,172,173,
  	5,42,0,0,173,177,1,0,0,0,174,176,9,0,0,0,175,174,1,0,0,0,176,179,1,0,
  	0,0,177,178,1,0,0,0,177,175,1,0,0,0,178,180,1,0,0,0,179,177,1,0,0,0,180,
  	181,5,42,0,0,181,182,5,47,0,0,182,183,1,0,0,0,183,184,6,26,0,0,184,54,
  	1,0,0,0,185,186,5,47,0,0,186,187,5,47,0,0,187,191,1,0,0,0,188,190,8,6,
  	0,0,189,188,1,0,0,0,190,193,1,0,0,0,191,189,1,0,0,0,191,192,1,0,0,0,192,
  	194,1,0,0,0,193,191,1,0,0,0,194,195,6,27,0,0,195,56,1,0,0,0,12,0,65,92,
  	100,105,111,126,157,160,167,177,191,1,6,0,0
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
