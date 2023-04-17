
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
      "HEADER", "IF", "ELSE", "WHILE", "RETURN", "BOOL", "COMMA", "COLON", 
      "SEMICOLON", "OPENPAREN", "CLOSEPAREN", "OPENBRACKET", "CLOSEBRACKET", 
      "ASSIGN", "EQUALITY", "LESS", "ADD", "SUB", "MUL", "DIV", "TYPE", 
      "STRING", "INT", "FLOAT", "CHAR", "ID", "NEWLINE", "WS", "BLOCKCOMMENT", 
      "LINECOMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "'if'", "'else'", "'while'", "'return'", "", "','", "':'", 
      "';'", "'('", "')'", "'{'", "'}'", "'='", "'=='", "'<'", "'+'", "'-'", 
      "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "HEADER", "IF", "ELSE", "WHILE", "RETURN", "BOOL", "COMMA", "COLON", 
      "SEMICOLON", "OPENPAREN", "CLOSEPAREN", "OPENBRACKET", "CLOSEBRACKET", 
      "ASSIGN", "EQUALITY", "LESS", "ADD", "SUB", "MUL", "DIV", "TYPE", 
      "STRING", "INT", "FLOAT", "CHAR", "ID", "NEWLINE", "WS", "BLOCKCOMMENT", 
      "LINECOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,30,253,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,5,0,71,8,0,10,0,12,
  	0,74,9,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,
  	1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,118,8,5,1,6,1,6,1,7,1,7,1,8,
  	1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,
  	15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,20,1,20,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,177,8,20,1,21,1,
  	21,5,21,181,8,21,10,21,12,21,184,9,21,1,21,1,21,1,22,4,22,189,8,22,11,
  	22,12,22,190,1,23,4,23,194,8,23,11,23,12,23,195,1,23,1,23,4,23,200,8,
  	23,11,23,12,23,201,1,24,1,24,1,24,1,24,1,25,4,25,209,8,25,11,25,12,25,
  	210,1,26,1,26,3,26,215,8,26,1,26,3,26,218,8,26,1,26,1,26,1,27,4,27,223,
  	8,27,11,27,12,27,224,1,27,1,27,1,28,1,28,1,28,1,28,5,28,233,8,28,10,28,
  	12,28,236,9,28,1,28,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,29,5,29,247,
  	8,29,10,29,12,29,250,9,29,1,29,1,29,2,72,234,0,30,1,1,3,2,5,3,7,4,9,5,
  	11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,
  	18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,
  	59,30,1,0,6,5,0,46,46,48,57,65,90,95,95,97,122,1,0,48,57,4,0,46,46,65,
  	90,95,95,97,122,3,0,65,90,95,95,97,122,2,0,9,9,32,32,2,0,10,10,13,13,
  	270,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,
  	1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,
  	0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,
  	0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,
  	1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,
  	0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,1,61,1,0,0,0,3,87,1,0,0,0,
  	5,90,1,0,0,0,7,95,1,0,0,0,9,101,1,0,0,0,11,117,1,0,0,0,13,119,1,0,0,0,
  	15,121,1,0,0,0,17,123,1,0,0,0,19,125,1,0,0,0,21,127,1,0,0,0,23,129,1,
  	0,0,0,25,131,1,0,0,0,27,133,1,0,0,0,29,135,1,0,0,0,31,138,1,0,0,0,33,
  	140,1,0,0,0,35,142,1,0,0,0,37,144,1,0,0,0,39,146,1,0,0,0,41,176,1,0,0,
  	0,43,178,1,0,0,0,45,188,1,0,0,0,47,193,1,0,0,0,49,203,1,0,0,0,51,208,
  	1,0,0,0,53,217,1,0,0,0,55,222,1,0,0,0,57,228,1,0,0,0,59,242,1,0,0,0,61,
  	62,5,64,0,0,62,63,5,104,0,0,63,64,5,101,0,0,64,65,5,97,0,0,65,66,5,100,
  	0,0,66,67,5,101,0,0,67,68,5,114,0,0,68,72,1,0,0,0,69,71,9,0,0,0,70,69,
  	1,0,0,0,71,74,1,0,0,0,72,73,1,0,0,0,72,70,1,0,0,0,73,75,1,0,0,0,74,72,
  	1,0,0,0,75,76,5,64,0,0,76,77,5,101,0,0,77,78,5,110,0,0,78,79,5,100,0,
  	0,79,80,5,95,0,0,80,81,5,104,0,0,81,82,5,101,0,0,82,83,5,97,0,0,83,84,
  	5,100,0,0,84,85,5,101,0,0,85,86,5,114,0,0,86,2,1,0,0,0,87,88,5,105,0,
  	0,88,89,5,102,0,0,89,4,1,0,0,0,90,91,5,101,0,0,91,92,5,108,0,0,92,93,
  	5,115,0,0,93,94,5,101,0,0,94,6,1,0,0,0,95,96,5,119,0,0,96,97,5,104,0,
  	0,97,98,5,105,0,0,98,99,5,108,0,0,99,100,5,101,0,0,100,8,1,0,0,0,101,
  	102,5,114,0,0,102,103,5,101,0,0,103,104,5,116,0,0,104,105,5,117,0,0,105,
  	106,5,114,0,0,106,107,5,110,0,0,107,10,1,0,0,0,108,109,5,116,0,0,109,
  	110,5,114,0,0,110,111,5,117,0,0,111,118,5,101,0,0,112,113,5,102,0,0,113,
  	114,5,97,0,0,114,115,5,108,0,0,115,116,5,115,0,0,116,118,5,101,0,0,117,
  	108,1,0,0,0,117,112,1,0,0,0,118,12,1,0,0,0,119,120,5,44,0,0,120,14,1,
  	0,0,0,121,122,5,58,0,0,122,16,1,0,0,0,123,124,5,59,0,0,124,18,1,0,0,0,
  	125,126,5,40,0,0,126,20,1,0,0,0,127,128,5,41,0,0,128,22,1,0,0,0,129,130,
  	5,123,0,0,130,24,1,0,0,0,131,132,5,125,0,0,132,26,1,0,0,0,133,134,5,61,
  	0,0,134,28,1,0,0,0,135,136,5,61,0,0,136,137,5,61,0,0,137,30,1,0,0,0,138,
  	139,5,60,0,0,139,32,1,0,0,0,140,141,5,43,0,0,141,34,1,0,0,0,142,143,5,
  	45,0,0,143,36,1,0,0,0,144,145,5,42,0,0,145,38,1,0,0,0,146,147,5,47,0,
  	0,147,40,1,0,0,0,148,149,5,105,0,0,149,150,5,110,0,0,150,177,5,116,0,
  	0,151,152,5,102,0,0,152,153,5,108,0,0,153,154,5,111,0,0,154,155,5,97,
  	0,0,155,177,5,116,0,0,156,157,5,99,0,0,157,158,5,104,0,0,158,159,5,97,
  	0,0,159,177,5,114,0,0,160,161,5,115,0,0,161,162,5,116,0,0,162,163,5,114,
  	0,0,163,164,5,105,0,0,164,165,5,110,0,0,165,177,5,103,0,0,166,167,5,118,
  	0,0,167,168,5,111,0,0,168,169,5,105,0,0,169,177,5,100,0,0,170,171,5,111,
  	0,0,171,172,5,115,0,0,172,177,5,99,0,0,173,174,5,101,0,0,174,175,5,110,
  	0,0,175,177,5,118,0,0,176,148,1,0,0,0,176,151,1,0,0,0,176,156,1,0,0,0,
  	176,160,1,0,0,0,176,166,1,0,0,0,176,170,1,0,0,0,176,173,1,0,0,0,177,42,
  	1,0,0,0,178,182,5,34,0,0,179,181,7,0,0,0,180,179,1,0,0,0,181,184,1,0,
  	0,0,182,180,1,0,0,0,182,183,1,0,0,0,183,185,1,0,0,0,184,182,1,0,0,0,185,
  	186,5,34,0,0,186,44,1,0,0,0,187,189,7,1,0,0,188,187,1,0,0,0,189,190,1,
  	0,0,0,190,188,1,0,0,0,190,191,1,0,0,0,191,46,1,0,0,0,192,194,7,1,0,0,
  	193,192,1,0,0,0,194,195,1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,196,197,
  	1,0,0,0,197,199,5,46,0,0,198,200,7,1,0,0,199,198,1,0,0,0,200,201,1,0,
  	0,0,201,199,1,0,0,0,201,202,1,0,0,0,202,48,1,0,0,0,203,204,5,39,0,0,204,
  	205,7,2,0,0,205,206,5,39,0,0,206,50,1,0,0,0,207,209,7,3,0,0,208,207,1,
  	0,0,0,209,210,1,0,0,0,210,208,1,0,0,0,210,211,1,0,0,0,211,52,1,0,0,0,
  	212,214,5,13,0,0,213,215,5,10,0,0,214,213,1,0,0,0,214,215,1,0,0,0,215,
  	218,1,0,0,0,216,218,5,10,0,0,217,212,1,0,0,0,217,216,1,0,0,0,218,219,
  	1,0,0,0,219,220,6,26,0,0,220,54,1,0,0,0,221,223,7,4,0,0,222,221,1,0,0,
  	0,223,224,1,0,0,0,224,222,1,0,0,0,224,225,1,0,0,0,225,226,1,0,0,0,226,
  	227,6,27,0,0,227,56,1,0,0,0,228,229,5,47,0,0,229,230,5,42,0,0,230,234,
  	1,0,0,0,231,233,9,0,0,0,232,231,1,0,0,0,233,236,1,0,0,0,234,235,1,0,0,
  	0,234,232,1,0,0,0,235,237,1,0,0,0,236,234,1,0,0,0,237,238,5,42,0,0,238,
  	239,5,47,0,0,239,240,1,0,0,0,240,241,6,28,0,0,241,58,1,0,0,0,242,243,
  	5,47,0,0,243,244,5,47,0,0,244,248,1,0,0,0,245,247,8,5,0,0,246,245,1,0,
  	0,0,247,250,1,0,0,0,248,246,1,0,0,0,248,249,1,0,0,0,249,251,1,0,0,0,250,
  	248,1,0,0,0,251,252,6,29,0,0,252,60,1,0,0,0,14,0,72,117,176,182,190,195,
  	201,210,214,217,224,234,248,1,6,0,0
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
