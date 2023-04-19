
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
      "HEADER", "IF", "ELSE", "WHILE", "PRINT", "PRINTLN", "RETURN", "BOOL", 
      "COMMA", "COLON", "SEMICOLON", "OPENPAREN", "CLOSEPAREN", "OPENBRACKET", 
      "CLOSEBRACKET", "ASSIGN", "EQUALITY", "LESS", "ADD", "SUB", "MUL", 
      "DIV", "TYPE", "STRING", "INT", "FLOAT", "CHAR", "ID", "NEWLINE", 
      "WS", "BLOCKCOMMENT", "LINECOMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "'if'", "'else'", "'while'", "'print'", "'println'", "'return'", 
      "", "','", "':'", "';'", "'('", "')'", "'{'", "'}'", "'='", "'=='", 
      "'<'", "'+'", "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "HEADER", "IF", "ELSE", "WHILE", "PRINT", "PRINTLN", "RETURN", 
      "BOOL", "COMMA", "COLON", "SEMICOLON", "OPENPAREN", "CLOSEPAREN", 
      "OPENBRACKET", "CLOSEBRACKET", "ASSIGN", "EQUALITY", "LESS", "ADD", 
      "SUB", "MUL", "DIV", "TYPE", "STRING", "INT", "FLOAT", "CHAR", "ID", 
      "NEWLINE", "WS", "BLOCKCOMMENT", "LINECOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,32,271,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,
  	0,5,0,75,8,0,10,0,12,0,78,9,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,
  	1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,136,8,7,1,8,1,8,1,9,1,
  	9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,
  	16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,195,8,
  	22,1,23,1,23,5,23,199,8,23,10,23,12,23,202,9,23,1,23,1,23,1,24,4,24,207,
  	8,24,11,24,12,24,208,1,25,4,25,212,8,25,11,25,12,25,213,1,25,1,25,4,25,
  	218,8,25,11,25,12,25,219,1,26,1,26,1,26,1,26,1,27,4,27,227,8,27,11,27,
  	12,27,228,1,28,1,28,3,28,233,8,28,1,28,3,28,236,8,28,1,28,1,28,1,29,4,
  	29,241,8,29,11,29,12,29,242,1,29,1,29,1,30,1,30,1,30,1,30,5,30,251,8,
  	30,10,30,12,30,254,9,30,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,31,
  	5,31,265,8,31,10,31,12,31,268,9,31,1,31,1,31,2,76,252,0,32,1,1,3,2,5,
  	3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,
  	16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,
  	55,28,57,29,59,30,61,31,63,32,1,0,6,5,0,46,46,48,57,65,90,95,95,97,122,
  	1,0,48,57,4,0,46,46,65,90,95,95,97,122,3,0,65,90,95,95,97,122,2,0,9,9,
  	32,32,2,0,10,10,13,13,288,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,
  	0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,
  	19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,
  	0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,
  	0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,
  	51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,
  	0,0,0,0,63,1,0,0,0,1,65,1,0,0,0,3,91,1,0,0,0,5,94,1,0,0,0,7,99,1,0,0,
  	0,9,105,1,0,0,0,11,111,1,0,0,0,13,119,1,0,0,0,15,135,1,0,0,0,17,137,1,
  	0,0,0,19,139,1,0,0,0,21,141,1,0,0,0,23,143,1,0,0,0,25,145,1,0,0,0,27,
  	147,1,0,0,0,29,149,1,0,0,0,31,151,1,0,0,0,33,153,1,0,0,0,35,156,1,0,0,
  	0,37,158,1,0,0,0,39,160,1,0,0,0,41,162,1,0,0,0,43,164,1,0,0,0,45,194,
  	1,0,0,0,47,196,1,0,0,0,49,206,1,0,0,0,51,211,1,0,0,0,53,221,1,0,0,0,55,
  	226,1,0,0,0,57,235,1,0,0,0,59,240,1,0,0,0,61,246,1,0,0,0,63,260,1,0,0,
  	0,65,66,5,64,0,0,66,67,5,104,0,0,67,68,5,101,0,0,68,69,5,97,0,0,69,70,
  	5,100,0,0,70,71,5,101,0,0,71,72,5,114,0,0,72,76,1,0,0,0,73,75,9,0,0,0,
  	74,73,1,0,0,0,75,78,1,0,0,0,76,77,1,0,0,0,76,74,1,0,0,0,77,79,1,0,0,0,
  	78,76,1,0,0,0,79,80,5,64,0,0,80,81,5,101,0,0,81,82,5,110,0,0,82,83,5,
  	100,0,0,83,84,5,95,0,0,84,85,5,104,0,0,85,86,5,101,0,0,86,87,5,97,0,0,
  	87,88,5,100,0,0,88,89,5,101,0,0,89,90,5,114,0,0,90,2,1,0,0,0,91,92,5,
  	105,0,0,92,93,5,102,0,0,93,4,1,0,0,0,94,95,5,101,0,0,95,96,5,108,0,0,
  	96,97,5,115,0,0,97,98,5,101,0,0,98,6,1,0,0,0,99,100,5,119,0,0,100,101,
  	5,104,0,0,101,102,5,105,0,0,102,103,5,108,0,0,103,104,5,101,0,0,104,8,
  	1,0,0,0,105,106,5,112,0,0,106,107,5,114,0,0,107,108,5,105,0,0,108,109,
  	5,110,0,0,109,110,5,116,0,0,110,10,1,0,0,0,111,112,5,112,0,0,112,113,
  	5,114,0,0,113,114,5,105,0,0,114,115,5,110,0,0,115,116,5,116,0,0,116,117,
  	5,108,0,0,117,118,5,110,0,0,118,12,1,0,0,0,119,120,5,114,0,0,120,121,
  	5,101,0,0,121,122,5,116,0,0,122,123,5,117,0,0,123,124,5,114,0,0,124,125,
  	5,110,0,0,125,14,1,0,0,0,126,127,5,116,0,0,127,128,5,114,0,0,128,129,
  	5,117,0,0,129,136,5,101,0,0,130,131,5,102,0,0,131,132,5,97,0,0,132,133,
  	5,108,0,0,133,134,5,115,0,0,134,136,5,101,0,0,135,126,1,0,0,0,135,130,
  	1,0,0,0,136,16,1,0,0,0,137,138,5,44,0,0,138,18,1,0,0,0,139,140,5,58,0,
  	0,140,20,1,0,0,0,141,142,5,59,0,0,142,22,1,0,0,0,143,144,5,40,0,0,144,
  	24,1,0,0,0,145,146,5,41,0,0,146,26,1,0,0,0,147,148,5,123,0,0,148,28,1,
  	0,0,0,149,150,5,125,0,0,150,30,1,0,0,0,151,152,5,61,0,0,152,32,1,0,0,
  	0,153,154,5,61,0,0,154,155,5,61,0,0,155,34,1,0,0,0,156,157,5,60,0,0,157,
  	36,1,0,0,0,158,159,5,43,0,0,159,38,1,0,0,0,160,161,5,45,0,0,161,40,1,
  	0,0,0,162,163,5,42,0,0,163,42,1,0,0,0,164,165,5,47,0,0,165,44,1,0,0,0,
  	166,167,5,105,0,0,167,168,5,110,0,0,168,195,5,116,0,0,169,170,5,102,0,
  	0,170,171,5,108,0,0,171,172,5,111,0,0,172,173,5,97,0,0,173,195,5,116,
  	0,0,174,175,5,99,0,0,175,176,5,104,0,0,176,177,5,97,0,0,177,195,5,114,
  	0,0,178,179,5,115,0,0,179,180,5,116,0,0,180,181,5,114,0,0,181,182,5,105,
  	0,0,182,183,5,110,0,0,183,195,5,103,0,0,184,185,5,118,0,0,185,186,5,111,
  	0,0,186,187,5,105,0,0,187,195,5,100,0,0,188,189,5,111,0,0,189,190,5,115,
  	0,0,190,195,5,99,0,0,191,192,5,101,0,0,192,193,5,110,0,0,193,195,5,118,
  	0,0,194,166,1,0,0,0,194,169,1,0,0,0,194,174,1,0,0,0,194,178,1,0,0,0,194,
  	184,1,0,0,0,194,188,1,0,0,0,194,191,1,0,0,0,195,46,1,0,0,0,196,200,5,
  	34,0,0,197,199,7,0,0,0,198,197,1,0,0,0,199,202,1,0,0,0,200,198,1,0,0,
  	0,200,201,1,0,0,0,201,203,1,0,0,0,202,200,1,0,0,0,203,204,5,34,0,0,204,
  	48,1,0,0,0,205,207,7,1,0,0,206,205,1,0,0,0,207,208,1,0,0,0,208,206,1,
  	0,0,0,208,209,1,0,0,0,209,50,1,0,0,0,210,212,7,1,0,0,211,210,1,0,0,0,
  	212,213,1,0,0,0,213,211,1,0,0,0,213,214,1,0,0,0,214,215,1,0,0,0,215,217,
  	5,46,0,0,216,218,7,1,0,0,217,216,1,0,0,0,218,219,1,0,0,0,219,217,1,0,
  	0,0,219,220,1,0,0,0,220,52,1,0,0,0,221,222,5,39,0,0,222,223,7,2,0,0,223,
  	224,5,39,0,0,224,54,1,0,0,0,225,227,7,3,0,0,226,225,1,0,0,0,227,228,1,
  	0,0,0,228,226,1,0,0,0,228,229,1,0,0,0,229,56,1,0,0,0,230,232,5,13,0,0,
  	231,233,5,10,0,0,232,231,1,0,0,0,232,233,1,0,0,0,233,236,1,0,0,0,234,
  	236,5,10,0,0,235,230,1,0,0,0,235,234,1,0,0,0,236,237,1,0,0,0,237,238,
  	6,28,0,0,238,58,1,0,0,0,239,241,7,4,0,0,240,239,1,0,0,0,241,242,1,0,0,
  	0,242,240,1,0,0,0,242,243,1,0,0,0,243,244,1,0,0,0,244,245,6,29,0,0,245,
  	60,1,0,0,0,246,247,5,47,0,0,247,248,5,42,0,0,248,252,1,0,0,0,249,251,
  	9,0,0,0,250,249,1,0,0,0,251,254,1,0,0,0,252,253,1,0,0,0,252,250,1,0,0,
  	0,253,255,1,0,0,0,254,252,1,0,0,0,255,256,5,42,0,0,256,257,5,47,0,0,257,
  	258,1,0,0,0,258,259,6,30,0,0,259,62,1,0,0,0,260,261,5,47,0,0,261,262,
  	5,47,0,0,262,266,1,0,0,0,263,265,8,5,0,0,264,263,1,0,0,0,265,268,1,0,
  	0,0,266,264,1,0,0,0,266,267,1,0,0,0,267,269,1,0,0,0,268,266,1,0,0,0,269,
  	270,6,31,0,0,270,64,1,0,0,0,14,0,76,135,194,200,208,213,219,228,232,235,
  	242,252,266,1,6,0,0
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
