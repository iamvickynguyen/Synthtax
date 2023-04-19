
// Generated from SynthtaxParser.g4 by ANTLR 4.12.0


#include "SynthtaxParserVisitor.h"

#include "SynthtaxParser.h"


using namespace antlrcpp;
using namespace synthtax_antlr;

using namespace antlr4;

namespace {

struct SynthtaxParserStaticData final {
  SynthtaxParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SynthtaxParserStaticData(const SynthtaxParserStaticData&) = delete;
  SynthtaxParserStaticData(SynthtaxParserStaticData&&) = delete;
  SynthtaxParserStaticData& operator=(const SynthtaxParserStaticData&) = delete;
  SynthtaxParserStaticData& operator=(SynthtaxParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag synthtaxparserParserOnceFlag;
SynthtaxParserStaticData *synthtaxparserParserStaticData = nullptr;

void synthtaxparserParserInitialize() {
  assert(synthtaxparserParserStaticData == nullptr);
  auto staticData = std::make_unique<SynthtaxParserStaticData>(
    std::vector<std::string>{
      "prog", "cppHeader", "function", "funcDeclaration", "formalParameters", 
      "funcBody", "statement", "varDeclaration", "expressionStatement", 
      "ifStatement", "whileStatement", "returnStatement", "assignmentStatement", 
      "printStatement", "printLnStatement", "block", "expression", "lessExpression", 
      "addSubExpression", "mulDivExpression", "atom", "expressionList", 
      "literal"
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
  	4,1,32,230,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,1,0,3,0,48,8,0,1,0,4,0,51,8,0,11,0,12,0,52,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,2,1,3,1,3,1,3,1,3,3,3,66,8,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,5,4,78,8,4,10,4,12,4,81,9,4,1,5,1,5,5,5,85,8,5,10,5,12,5,
  	88,9,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,101,8,6,1,7,1,
  	7,1,7,3,7,106,8,7,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,3,9,124,8,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,
  	1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,5,15,147,
  	8,15,10,15,12,15,150,9,15,1,15,1,15,1,16,1,16,1,16,5,16,157,8,16,10,16,
  	12,16,160,9,16,1,17,1,17,1,17,5,17,165,8,17,10,17,12,17,168,9,17,1,18,
  	1,18,1,18,5,18,173,8,18,10,18,12,18,176,9,18,1,18,1,18,1,18,5,18,181,
  	8,18,10,18,12,18,184,9,18,3,18,186,8,18,1,19,1,19,1,19,5,19,191,8,19,
  	10,19,12,19,194,9,19,1,19,1,19,1,19,5,19,199,8,19,10,19,12,19,202,9,19,
  	3,19,204,8,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,213,8,20,1,20,1,
  	20,1,20,3,20,218,8,20,1,21,1,21,1,21,5,21,223,8,21,10,21,12,21,226,9,
  	21,1,22,1,22,1,22,0,0,23,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,
  	34,36,38,40,42,44,0,1,2,0,8,8,24,27,235,0,47,1,0,0,0,2,56,1,0,0,0,4,58,
  	1,0,0,0,6,61,1,0,0,0,8,69,1,0,0,0,10,82,1,0,0,0,12,100,1,0,0,0,14,102,
  	1,0,0,0,16,107,1,0,0,0,18,123,1,0,0,0,20,125,1,0,0,0,22,131,1,0,0,0,24,
  	134,1,0,0,0,26,138,1,0,0,0,28,141,1,0,0,0,30,144,1,0,0,0,32,153,1,0,0,
  	0,34,161,1,0,0,0,36,185,1,0,0,0,38,203,1,0,0,0,40,217,1,0,0,0,42,219,
  	1,0,0,0,44,227,1,0,0,0,46,48,3,2,1,0,47,46,1,0,0,0,47,48,1,0,0,0,48,50,
  	1,0,0,0,49,51,3,4,2,0,50,49,1,0,0,0,51,52,1,0,0,0,52,50,1,0,0,0,52,53,
  	1,0,0,0,53,54,1,0,0,0,54,55,5,0,0,1,55,1,1,0,0,0,56,57,5,1,0,0,57,3,1,
  	0,0,0,58,59,3,6,3,0,59,60,3,10,5,0,60,5,1,0,0,0,61,62,5,23,0,0,62,63,
  	5,28,0,0,63,65,5,12,0,0,64,66,3,8,4,0,65,64,1,0,0,0,65,66,1,0,0,0,66,
  	67,1,0,0,0,67,68,5,13,0,0,68,7,1,0,0,0,69,70,5,28,0,0,70,71,5,10,0,0,
  	71,72,5,23,0,0,72,79,1,0,0,0,73,74,5,9,0,0,74,75,5,28,0,0,75,76,5,10,
  	0,0,76,78,5,23,0,0,77,73,1,0,0,0,78,81,1,0,0,0,79,77,1,0,0,0,79,80,1,
  	0,0,0,80,9,1,0,0,0,81,79,1,0,0,0,82,86,5,14,0,0,83,85,3,12,6,0,84,83,
  	1,0,0,0,85,88,1,0,0,0,86,84,1,0,0,0,86,87,1,0,0,0,87,89,1,0,0,0,88,86,
  	1,0,0,0,89,90,5,15,0,0,90,11,1,0,0,0,91,101,3,14,7,0,92,101,3,16,8,0,
  	93,101,3,18,9,0,94,101,3,20,10,0,95,101,3,22,11,0,96,101,3,24,12,0,97,
  	101,3,26,13,0,98,101,3,28,14,0,99,101,5,11,0,0,100,91,1,0,0,0,100,92,
  	1,0,0,0,100,93,1,0,0,0,100,94,1,0,0,0,100,95,1,0,0,0,100,96,1,0,0,0,100,
  	97,1,0,0,0,100,98,1,0,0,0,100,99,1,0,0,0,101,13,1,0,0,0,102,105,5,23,
  	0,0,103,106,3,24,12,0,104,106,5,28,0,0,105,103,1,0,0,0,105,104,1,0,0,
  	0,106,15,1,0,0,0,107,108,3,32,16,0,108,17,1,0,0,0,109,110,5,2,0,0,110,
  	111,5,12,0,0,111,112,3,32,16,0,112,113,5,13,0,0,113,114,3,30,15,0,114,
  	115,5,3,0,0,115,116,3,30,15,0,116,124,1,0,0,0,117,118,5,2,0,0,118,119,
  	5,12,0,0,119,120,3,32,16,0,120,121,5,13,0,0,121,122,3,30,15,0,122,124,
  	1,0,0,0,123,109,1,0,0,0,123,117,1,0,0,0,124,19,1,0,0,0,125,126,5,4,0,
  	0,126,127,5,12,0,0,127,128,3,32,16,0,128,129,5,13,0,0,129,130,3,30,15,
  	0,130,21,1,0,0,0,131,132,5,7,0,0,132,133,3,32,16,0,133,23,1,0,0,0,134,
  	135,5,28,0,0,135,136,5,16,0,0,136,137,3,32,16,0,137,25,1,0,0,0,138,139,
  	5,5,0,0,139,140,3,32,16,0,140,27,1,0,0,0,141,142,5,6,0,0,142,143,3,32,
  	16,0,143,29,1,0,0,0,144,148,5,14,0,0,145,147,3,12,6,0,146,145,1,0,0,0,
  	147,150,1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,151,1,0,0,0,150,148,
  	1,0,0,0,151,152,5,15,0,0,152,31,1,0,0,0,153,158,3,34,17,0,154,155,5,17,
  	0,0,155,157,3,34,17,0,156,154,1,0,0,0,157,160,1,0,0,0,158,156,1,0,0,0,
  	158,159,1,0,0,0,159,33,1,0,0,0,160,158,1,0,0,0,161,166,3,36,18,0,162,
  	163,5,18,0,0,163,165,3,36,18,0,164,162,1,0,0,0,165,168,1,0,0,0,166,164,
  	1,0,0,0,166,167,1,0,0,0,167,35,1,0,0,0,168,166,1,0,0,0,169,174,3,38,19,
  	0,170,171,5,19,0,0,171,173,3,38,19,0,172,170,1,0,0,0,173,176,1,0,0,0,
  	174,172,1,0,0,0,174,175,1,0,0,0,175,186,1,0,0,0,176,174,1,0,0,0,177,182,
  	3,38,19,0,178,179,5,20,0,0,179,181,3,38,19,0,180,178,1,0,0,0,181,184,
  	1,0,0,0,182,180,1,0,0,0,182,183,1,0,0,0,183,186,1,0,0,0,184,182,1,0,0,
  	0,185,169,1,0,0,0,185,177,1,0,0,0,186,37,1,0,0,0,187,192,3,40,20,0,188,
  	189,5,21,0,0,189,191,3,40,20,0,190,188,1,0,0,0,191,194,1,0,0,0,192,190,
  	1,0,0,0,192,193,1,0,0,0,193,204,1,0,0,0,194,192,1,0,0,0,195,200,3,40,
  	20,0,196,197,5,22,0,0,197,199,3,40,20,0,198,196,1,0,0,0,199,202,1,0,0,
  	0,200,198,1,0,0,0,200,201,1,0,0,0,201,204,1,0,0,0,202,200,1,0,0,0,203,
  	187,1,0,0,0,203,195,1,0,0,0,204,39,1,0,0,0,205,206,5,12,0,0,206,207,3,
  	32,16,0,207,208,5,13,0,0,208,218,1,0,0,0,209,210,5,28,0,0,210,212,5,12,
  	0,0,211,213,3,42,21,0,212,211,1,0,0,0,212,213,1,0,0,0,213,214,1,0,0,0,
  	214,218,5,13,0,0,215,218,5,28,0,0,216,218,3,44,22,0,217,205,1,0,0,0,217,
  	209,1,0,0,0,217,215,1,0,0,0,217,216,1,0,0,0,218,41,1,0,0,0,219,224,3,
  	32,16,0,220,221,5,9,0,0,221,223,3,32,16,0,222,220,1,0,0,0,223,226,1,0,
  	0,0,224,222,1,0,0,0,224,225,1,0,0,0,225,43,1,0,0,0,226,224,1,0,0,0,227,
  	228,7,0,0,0,228,45,1,0,0,0,20,47,52,65,79,86,100,105,123,148,158,166,
  	174,182,185,192,200,203,212,217,224
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  synthtaxparserParserStaticData = staticData.release();
}

}

SynthtaxParser::SynthtaxParser(TokenStream *input) : SynthtaxParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SynthtaxParser::SynthtaxParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SynthtaxParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *synthtaxparserParserStaticData->atn, synthtaxparserParserStaticData->decisionToDFA, synthtaxparserParserStaticData->sharedContextCache, options);
}

SynthtaxParser::~SynthtaxParser() {
  delete _interpreter;
}

const atn::ATN& SynthtaxParser::getATN() const {
  return *synthtaxparserParserStaticData->atn;
}

std::string SynthtaxParser::getGrammarFileName() const {
  return "SynthtaxParser.g4";
}

const std::vector<std::string>& SynthtaxParser::getRuleNames() const {
  return synthtaxparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& SynthtaxParser::getVocabulary() const {
  return synthtaxparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SynthtaxParser::getSerializedATN() const {
  return synthtaxparserParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

SynthtaxParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::ProgContext::EOF() {
  return getToken(SynthtaxParser::EOF, 0);
}

SynthtaxParser::CppHeaderContext* SynthtaxParser::ProgContext::cppHeader() {
  return getRuleContext<SynthtaxParser::CppHeaderContext>(0);
}

std::vector<SynthtaxParser::FunctionContext *> SynthtaxParser::ProgContext::function() {
  return getRuleContexts<SynthtaxParser::FunctionContext>();
}

SynthtaxParser::FunctionContext* SynthtaxParser::ProgContext::function(size_t i) {
  return getRuleContext<SynthtaxParser::FunctionContext>(i);
}


size_t SynthtaxParser::ProgContext::getRuleIndex() const {
  return SynthtaxParser::RuleProg;
}


std::any SynthtaxParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::ProgContext* SynthtaxParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, SynthtaxParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SynthtaxParser::HEADER) {
      setState(46);
      cppHeader();
    }
    setState(50); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(49);
      function();
      setState(52); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SynthtaxParser::TYPE);
    setState(54);
    match(SynthtaxParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CppHeaderContext ------------------------------------------------------------------

SynthtaxParser::CppHeaderContext::CppHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::CppHeaderContext::HEADER() {
  return getToken(SynthtaxParser::HEADER, 0);
}


size_t SynthtaxParser::CppHeaderContext::getRuleIndex() const {
  return SynthtaxParser::RuleCppHeader;
}


std::any SynthtaxParser::CppHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitCppHeader(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::CppHeaderContext* SynthtaxParser::cppHeader() {
  CppHeaderContext *_localctx = _tracker.createInstance<CppHeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, SynthtaxParser::RuleCppHeader);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(SynthtaxParser::HEADER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

SynthtaxParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SynthtaxParser::FuncDeclarationContext* SynthtaxParser::FunctionContext::funcDeclaration() {
  return getRuleContext<SynthtaxParser::FuncDeclarationContext>(0);
}

SynthtaxParser::FuncBodyContext* SynthtaxParser::FunctionContext::funcBody() {
  return getRuleContext<SynthtaxParser::FuncBodyContext>(0);
}


size_t SynthtaxParser::FunctionContext::getRuleIndex() const {
  return SynthtaxParser::RuleFunction;
}


std::any SynthtaxParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::FunctionContext* SynthtaxParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 4, SynthtaxParser::RuleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    funcDeclaration();
    setState(59);
    funcBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDeclarationContext ------------------------------------------------------------------

SynthtaxParser::FuncDeclarationContext::FuncDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::FuncDeclarationContext::TYPE() {
  return getToken(SynthtaxParser::TYPE, 0);
}

tree::TerminalNode* SynthtaxParser::FuncDeclarationContext::ID() {
  return getToken(SynthtaxParser::ID, 0);
}

tree::TerminalNode* SynthtaxParser::FuncDeclarationContext::OPENPAREN() {
  return getToken(SynthtaxParser::OPENPAREN, 0);
}

tree::TerminalNode* SynthtaxParser::FuncDeclarationContext::CLOSEPAREN() {
  return getToken(SynthtaxParser::CLOSEPAREN, 0);
}

SynthtaxParser::FormalParametersContext* SynthtaxParser::FuncDeclarationContext::formalParameters() {
  return getRuleContext<SynthtaxParser::FormalParametersContext>(0);
}


size_t SynthtaxParser::FuncDeclarationContext::getRuleIndex() const {
  return SynthtaxParser::RuleFuncDeclaration;
}


std::any SynthtaxParser::FuncDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitFuncDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::FuncDeclarationContext* SynthtaxParser::funcDeclaration() {
  FuncDeclarationContext *_localctx = _tracker.createInstance<FuncDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, SynthtaxParser::RuleFuncDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    match(SynthtaxParser::TYPE);
    setState(62);
    match(SynthtaxParser::ID);
    setState(63);
    match(SynthtaxParser::OPENPAREN);
    setState(65);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SynthtaxParser::ID) {
      setState(64);
      formalParameters();
    }
    setState(67);
    match(SynthtaxParser::CLOSEPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParametersContext ------------------------------------------------------------------

SynthtaxParser::FormalParametersContext::FormalParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SynthtaxParser::FormalParametersContext::ID() {
  return getTokens(SynthtaxParser::ID);
}

tree::TerminalNode* SynthtaxParser::FormalParametersContext::ID(size_t i) {
  return getToken(SynthtaxParser::ID, i);
}

std::vector<tree::TerminalNode *> SynthtaxParser::FormalParametersContext::COLON() {
  return getTokens(SynthtaxParser::COLON);
}

tree::TerminalNode* SynthtaxParser::FormalParametersContext::COLON(size_t i) {
  return getToken(SynthtaxParser::COLON, i);
}

std::vector<tree::TerminalNode *> SynthtaxParser::FormalParametersContext::TYPE() {
  return getTokens(SynthtaxParser::TYPE);
}

tree::TerminalNode* SynthtaxParser::FormalParametersContext::TYPE(size_t i) {
  return getToken(SynthtaxParser::TYPE, i);
}

std::vector<tree::TerminalNode *> SynthtaxParser::FormalParametersContext::COMMA() {
  return getTokens(SynthtaxParser::COMMA);
}

tree::TerminalNode* SynthtaxParser::FormalParametersContext::COMMA(size_t i) {
  return getToken(SynthtaxParser::COMMA, i);
}


size_t SynthtaxParser::FormalParametersContext::getRuleIndex() const {
  return SynthtaxParser::RuleFormalParameters;
}


std::any SynthtaxParser::FormalParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameters(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::FormalParametersContext* SynthtaxParser::formalParameters() {
  FormalParametersContext *_localctx = _tracker.createInstance<FormalParametersContext>(_ctx, getState());
  enterRule(_localctx, 8, SynthtaxParser::RuleFormalParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(SynthtaxParser::ID);
    setState(70);
    match(SynthtaxParser::COLON);
    setState(71);
    match(SynthtaxParser::TYPE);
    setState(79);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SynthtaxParser::COMMA) {
      setState(73);
      match(SynthtaxParser::COMMA);
      setState(74);
      match(SynthtaxParser::ID);
      setState(75);
      match(SynthtaxParser::COLON);
      setState(76);
      match(SynthtaxParser::TYPE);
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncBodyContext ------------------------------------------------------------------

SynthtaxParser::FuncBodyContext::FuncBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::FuncBodyContext::OPENBRACKET() {
  return getToken(SynthtaxParser::OPENBRACKET, 0);
}

tree::TerminalNode* SynthtaxParser::FuncBodyContext::CLOSEBRACKET() {
  return getToken(SynthtaxParser::CLOSEBRACKET, 0);
}

std::vector<SynthtaxParser::StatementContext *> SynthtaxParser::FuncBodyContext::statement() {
  return getRuleContexts<SynthtaxParser::StatementContext>();
}

SynthtaxParser::StatementContext* SynthtaxParser::FuncBodyContext::statement(size_t i) {
  return getRuleContext<SynthtaxParser::StatementContext>(i);
}


size_t SynthtaxParser::FuncBodyContext::getRuleIndex() const {
  return SynthtaxParser::RuleFuncBody;
}


std::any SynthtaxParser::FuncBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitFuncBody(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::FuncBodyContext* SynthtaxParser::funcBody() {
  FuncBodyContext *_localctx = _tracker.createInstance<FuncBodyContext>(_ctx, getState());
  enterRule(_localctx, 10, SynthtaxParser::RuleFuncBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(SynthtaxParser::OPENBRACKET);
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 528488948) != 0)) {
      setState(83);
      statement();
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(89);
    match(SynthtaxParser::CLOSEBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SynthtaxParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SynthtaxParser::VarDeclarationContext* SynthtaxParser::StatementContext::varDeclaration() {
  return getRuleContext<SynthtaxParser::VarDeclarationContext>(0);
}

SynthtaxParser::ExpressionStatementContext* SynthtaxParser::StatementContext::expressionStatement() {
  return getRuleContext<SynthtaxParser::ExpressionStatementContext>(0);
}

SynthtaxParser::IfStatementContext* SynthtaxParser::StatementContext::ifStatement() {
  return getRuleContext<SynthtaxParser::IfStatementContext>(0);
}

SynthtaxParser::WhileStatementContext* SynthtaxParser::StatementContext::whileStatement() {
  return getRuleContext<SynthtaxParser::WhileStatementContext>(0);
}

SynthtaxParser::ReturnStatementContext* SynthtaxParser::StatementContext::returnStatement() {
  return getRuleContext<SynthtaxParser::ReturnStatementContext>(0);
}

SynthtaxParser::AssignmentStatementContext* SynthtaxParser::StatementContext::assignmentStatement() {
  return getRuleContext<SynthtaxParser::AssignmentStatementContext>(0);
}

SynthtaxParser::PrintStatementContext* SynthtaxParser::StatementContext::printStatement() {
  return getRuleContext<SynthtaxParser::PrintStatementContext>(0);
}

SynthtaxParser::PrintLnStatementContext* SynthtaxParser::StatementContext::printLnStatement() {
  return getRuleContext<SynthtaxParser::PrintLnStatementContext>(0);
}

tree::TerminalNode* SynthtaxParser::StatementContext::SEMICOLON() {
  return getToken(SynthtaxParser::SEMICOLON, 0);
}


size_t SynthtaxParser::StatementContext::getRuleIndex() const {
  return SynthtaxParser::RuleStatement;
}


std::any SynthtaxParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::StatementContext* SynthtaxParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 12, SynthtaxParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(91);
      varDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(92);
      expressionStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(93);
      ifStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(94);
      whileStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(95);
      returnStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(96);
      assignmentStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(97);
      printStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(98);
      printLnStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(99);
      match(SynthtaxParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationContext ------------------------------------------------------------------

SynthtaxParser::VarDeclarationContext::VarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::VarDeclarationContext::TYPE() {
  return getToken(SynthtaxParser::TYPE, 0);
}

SynthtaxParser::AssignmentStatementContext* SynthtaxParser::VarDeclarationContext::assignmentStatement() {
  return getRuleContext<SynthtaxParser::AssignmentStatementContext>(0);
}

tree::TerminalNode* SynthtaxParser::VarDeclarationContext::ID() {
  return getToken(SynthtaxParser::ID, 0);
}


size_t SynthtaxParser::VarDeclarationContext::getRuleIndex() const {
  return SynthtaxParser::RuleVarDeclaration;
}


std::any SynthtaxParser::VarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::VarDeclarationContext* SynthtaxParser::varDeclaration() {
  VarDeclarationContext *_localctx = _tracker.createInstance<VarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, SynthtaxParser::RuleVarDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(SynthtaxParser::TYPE);
    setState(105);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(103);
      assignmentStatement();
      break;
    }

    case 2: {
      setState(104);
      match(SynthtaxParser::ID);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

SynthtaxParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SynthtaxParser::ExpressionContext* SynthtaxParser::ExpressionStatementContext::expression() {
  return getRuleContext<SynthtaxParser::ExpressionContext>(0);
}


size_t SynthtaxParser::ExpressionStatementContext::getRuleIndex() const {
  return SynthtaxParser::RuleExpressionStatement;
}


std::any SynthtaxParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::ExpressionStatementContext* SynthtaxParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, SynthtaxParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

SynthtaxParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::IfStatementContext::IF() {
  return getToken(SynthtaxParser::IF, 0);
}

tree::TerminalNode* SynthtaxParser::IfStatementContext::OPENPAREN() {
  return getToken(SynthtaxParser::OPENPAREN, 0);
}

SynthtaxParser::ExpressionContext* SynthtaxParser::IfStatementContext::expression() {
  return getRuleContext<SynthtaxParser::ExpressionContext>(0);
}

tree::TerminalNode* SynthtaxParser::IfStatementContext::CLOSEPAREN() {
  return getToken(SynthtaxParser::CLOSEPAREN, 0);
}

std::vector<SynthtaxParser::BlockContext *> SynthtaxParser::IfStatementContext::block() {
  return getRuleContexts<SynthtaxParser::BlockContext>();
}

SynthtaxParser::BlockContext* SynthtaxParser::IfStatementContext::block(size_t i) {
  return getRuleContext<SynthtaxParser::BlockContext>(i);
}

tree::TerminalNode* SynthtaxParser::IfStatementContext::ELSE() {
  return getToken(SynthtaxParser::ELSE, 0);
}


size_t SynthtaxParser::IfStatementContext::getRuleIndex() const {
  return SynthtaxParser::RuleIfStatement;
}


std::any SynthtaxParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::IfStatementContext* SynthtaxParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, SynthtaxParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(109);
      match(SynthtaxParser::IF);
      setState(110);
      match(SynthtaxParser::OPENPAREN);
      setState(111);
      expression();
      setState(112);
      match(SynthtaxParser::CLOSEPAREN);
      setState(113);
      block();
      setState(114);
      match(SynthtaxParser::ELSE);
      setState(115);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(117);
      match(SynthtaxParser::IF);
      setState(118);
      match(SynthtaxParser::OPENPAREN);
      setState(119);
      expression();
      setState(120);
      match(SynthtaxParser::CLOSEPAREN);
      setState(121);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

SynthtaxParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::WhileStatementContext::WHILE() {
  return getToken(SynthtaxParser::WHILE, 0);
}

tree::TerminalNode* SynthtaxParser::WhileStatementContext::OPENPAREN() {
  return getToken(SynthtaxParser::OPENPAREN, 0);
}

SynthtaxParser::ExpressionContext* SynthtaxParser::WhileStatementContext::expression() {
  return getRuleContext<SynthtaxParser::ExpressionContext>(0);
}

tree::TerminalNode* SynthtaxParser::WhileStatementContext::CLOSEPAREN() {
  return getToken(SynthtaxParser::CLOSEPAREN, 0);
}

SynthtaxParser::BlockContext* SynthtaxParser::WhileStatementContext::block() {
  return getRuleContext<SynthtaxParser::BlockContext>(0);
}


size_t SynthtaxParser::WhileStatementContext::getRuleIndex() const {
  return SynthtaxParser::RuleWhileStatement;
}


std::any SynthtaxParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::WhileStatementContext* SynthtaxParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, SynthtaxParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(SynthtaxParser::WHILE);
    setState(126);
    match(SynthtaxParser::OPENPAREN);
    setState(127);
    expression();
    setState(128);
    match(SynthtaxParser::CLOSEPAREN);
    setState(129);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

SynthtaxParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::ReturnStatementContext::RETURN() {
  return getToken(SynthtaxParser::RETURN, 0);
}

SynthtaxParser::ExpressionContext* SynthtaxParser::ReturnStatementContext::expression() {
  return getRuleContext<SynthtaxParser::ExpressionContext>(0);
}


size_t SynthtaxParser::ReturnStatementContext::getRuleIndex() const {
  return SynthtaxParser::RuleReturnStatement;
}


std::any SynthtaxParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::ReturnStatementContext* SynthtaxParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, SynthtaxParser::RuleReturnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(SynthtaxParser::RETURN);
    setState(132);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

SynthtaxParser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::AssignmentStatementContext::ID() {
  return getToken(SynthtaxParser::ID, 0);
}

tree::TerminalNode* SynthtaxParser::AssignmentStatementContext::ASSIGN() {
  return getToken(SynthtaxParser::ASSIGN, 0);
}

SynthtaxParser::ExpressionContext* SynthtaxParser::AssignmentStatementContext::expression() {
  return getRuleContext<SynthtaxParser::ExpressionContext>(0);
}


size_t SynthtaxParser::AssignmentStatementContext::getRuleIndex() const {
  return SynthtaxParser::RuleAssignmentStatement;
}


std::any SynthtaxParser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::AssignmentStatementContext* SynthtaxParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, SynthtaxParser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(SynthtaxParser::ID);
    setState(135);
    match(SynthtaxParser::ASSIGN);
    setState(136);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStatementContext ------------------------------------------------------------------

SynthtaxParser::PrintStatementContext::PrintStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::PrintStatementContext::PRINT() {
  return getToken(SynthtaxParser::PRINT, 0);
}

SynthtaxParser::ExpressionContext* SynthtaxParser::PrintStatementContext::expression() {
  return getRuleContext<SynthtaxParser::ExpressionContext>(0);
}


size_t SynthtaxParser::PrintStatementContext::getRuleIndex() const {
  return SynthtaxParser::RulePrintStatement;
}


std::any SynthtaxParser::PrintStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitPrintStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::PrintStatementContext* SynthtaxParser::printStatement() {
  PrintStatementContext *_localctx = _tracker.createInstance<PrintStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, SynthtaxParser::RulePrintStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(SynthtaxParser::PRINT);
    setState(139);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintLnStatementContext ------------------------------------------------------------------

SynthtaxParser::PrintLnStatementContext::PrintLnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::PrintLnStatementContext::PRINTLN() {
  return getToken(SynthtaxParser::PRINTLN, 0);
}

SynthtaxParser::ExpressionContext* SynthtaxParser::PrintLnStatementContext::expression() {
  return getRuleContext<SynthtaxParser::ExpressionContext>(0);
}


size_t SynthtaxParser::PrintLnStatementContext::getRuleIndex() const {
  return SynthtaxParser::RulePrintLnStatement;
}


std::any SynthtaxParser::PrintLnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitPrintLnStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::PrintLnStatementContext* SynthtaxParser::printLnStatement() {
  PrintLnStatementContext *_localctx = _tracker.createInstance<PrintLnStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, SynthtaxParser::RulePrintLnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(SynthtaxParser::PRINTLN);
    setState(142);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SynthtaxParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::BlockContext::OPENBRACKET() {
  return getToken(SynthtaxParser::OPENBRACKET, 0);
}

tree::TerminalNode* SynthtaxParser::BlockContext::CLOSEBRACKET() {
  return getToken(SynthtaxParser::CLOSEBRACKET, 0);
}

std::vector<SynthtaxParser::StatementContext *> SynthtaxParser::BlockContext::statement() {
  return getRuleContexts<SynthtaxParser::StatementContext>();
}

SynthtaxParser::StatementContext* SynthtaxParser::BlockContext::statement(size_t i) {
  return getRuleContext<SynthtaxParser::StatementContext>(i);
}


size_t SynthtaxParser::BlockContext::getRuleIndex() const {
  return SynthtaxParser::RuleBlock;
}


std::any SynthtaxParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::BlockContext* SynthtaxParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 30, SynthtaxParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(SynthtaxParser::OPENBRACKET);
    setState(148);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 528488948) != 0)) {
      setState(145);
      statement();
      setState(150);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(151);
    match(SynthtaxParser::CLOSEBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SynthtaxParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SynthtaxParser::LessExpressionContext *> SynthtaxParser::ExpressionContext::lessExpression() {
  return getRuleContexts<SynthtaxParser::LessExpressionContext>();
}

SynthtaxParser::LessExpressionContext* SynthtaxParser::ExpressionContext::lessExpression(size_t i) {
  return getRuleContext<SynthtaxParser::LessExpressionContext>(i);
}

std::vector<tree::TerminalNode *> SynthtaxParser::ExpressionContext::EQUALITY() {
  return getTokens(SynthtaxParser::EQUALITY);
}

tree::TerminalNode* SynthtaxParser::ExpressionContext::EQUALITY(size_t i) {
  return getToken(SynthtaxParser::EQUALITY, i);
}


size_t SynthtaxParser::ExpressionContext::getRuleIndex() const {
  return SynthtaxParser::RuleExpression;
}


std::any SynthtaxParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::ExpressionContext* SynthtaxParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 32, SynthtaxParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    lessExpression();
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SynthtaxParser::EQUALITY) {
      setState(154);
      match(SynthtaxParser::EQUALITY);
      setState(155);
      lessExpression();
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LessExpressionContext ------------------------------------------------------------------

SynthtaxParser::LessExpressionContext::LessExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SynthtaxParser::AddSubExpressionContext *> SynthtaxParser::LessExpressionContext::addSubExpression() {
  return getRuleContexts<SynthtaxParser::AddSubExpressionContext>();
}

SynthtaxParser::AddSubExpressionContext* SynthtaxParser::LessExpressionContext::addSubExpression(size_t i) {
  return getRuleContext<SynthtaxParser::AddSubExpressionContext>(i);
}

std::vector<tree::TerminalNode *> SynthtaxParser::LessExpressionContext::LESS() {
  return getTokens(SynthtaxParser::LESS);
}

tree::TerminalNode* SynthtaxParser::LessExpressionContext::LESS(size_t i) {
  return getToken(SynthtaxParser::LESS, i);
}


size_t SynthtaxParser::LessExpressionContext::getRuleIndex() const {
  return SynthtaxParser::RuleLessExpression;
}


std::any SynthtaxParser::LessExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitLessExpression(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::LessExpressionContext* SynthtaxParser::lessExpression() {
  LessExpressionContext *_localctx = _tracker.createInstance<LessExpressionContext>(_ctx, getState());
  enterRule(_localctx, 34, SynthtaxParser::RuleLessExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    addSubExpression();
    setState(166);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SynthtaxParser::LESS) {
      setState(162);
      match(SynthtaxParser::LESS);
      setState(163);
      addSubExpression();
      setState(168);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddSubExpressionContext ------------------------------------------------------------------

SynthtaxParser::AddSubExpressionContext::AddSubExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SynthtaxParser::MulDivExpressionContext *> SynthtaxParser::AddSubExpressionContext::mulDivExpression() {
  return getRuleContexts<SynthtaxParser::MulDivExpressionContext>();
}

SynthtaxParser::MulDivExpressionContext* SynthtaxParser::AddSubExpressionContext::mulDivExpression(size_t i) {
  return getRuleContext<SynthtaxParser::MulDivExpressionContext>(i);
}

std::vector<tree::TerminalNode *> SynthtaxParser::AddSubExpressionContext::ADD() {
  return getTokens(SynthtaxParser::ADD);
}

tree::TerminalNode* SynthtaxParser::AddSubExpressionContext::ADD(size_t i) {
  return getToken(SynthtaxParser::ADD, i);
}

std::vector<tree::TerminalNode *> SynthtaxParser::AddSubExpressionContext::SUB() {
  return getTokens(SynthtaxParser::SUB);
}

tree::TerminalNode* SynthtaxParser::AddSubExpressionContext::SUB(size_t i) {
  return getToken(SynthtaxParser::SUB, i);
}


size_t SynthtaxParser::AddSubExpressionContext::getRuleIndex() const {
  return SynthtaxParser::RuleAddSubExpression;
}


std::any SynthtaxParser::AddSubExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitAddSubExpression(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::AddSubExpressionContext* SynthtaxParser::addSubExpression() {
  AddSubExpressionContext *_localctx = _tracker.createInstance<AddSubExpressionContext>(_ctx, getState());
  enterRule(_localctx, 36, SynthtaxParser::RuleAddSubExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(169);
      mulDivExpression();
      setState(174);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::ADD) {
        setState(170);
        match(SynthtaxParser::ADD);
        setState(171);
        mulDivExpression();
        setState(176);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(177);
      mulDivExpression();
      setState(182);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::SUB) {
        setState(178);
        match(SynthtaxParser::SUB);
        setState(179);
        mulDivExpression();
        setState(184);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulDivExpressionContext ------------------------------------------------------------------

SynthtaxParser::MulDivExpressionContext::MulDivExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SynthtaxParser::AtomContext *> SynthtaxParser::MulDivExpressionContext::atom() {
  return getRuleContexts<SynthtaxParser::AtomContext>();
}

SynthtaxParser::AtomContext* SynthtaxParser::MulDivExpressionContext::atom(size_t i) {
  return getRuleContext<SynthtaxParser::AtomContext>(i);
}

std::vector<tree::TerminalNode *> SynthtaxParser::MulDivExpressionContext::MUL() {
  return getTokens(SynthtaxParser::MUL);
}

tree::TerminalNode* SynthtaxParser::MulDivExpressionContext::MUL(size_t i) {
  return getToken(SynthtaxParser::MUL, i);
}

std::vector<tree::TerminalNode *> SynthtaxParser::MulDivExpressionContext::DIV() {
  return getTokens(SynthtaxParser::DIV);
}

tree::TerminalNode* SynthtaxParser::MulDivExpressionContext::DIV(size_t i) {
  return getToken(SynthtaxParser::DIV, i);
}


size_t SynthtaxParser::MulDivExpressionContext::getRuleIndex() const {
  return SynthtaxParser::RuleMulDivExpression;
}


std::any SynthtaxParser::MulDivExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitMulDivExpression(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::MulDivExpressionContext* SynthtaxParser::mulDivExpression() {
  MulDivExpressionContext *_localctx = _tracker.createInstance<MulDivExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, SynthtaxParser::RuleMulDivExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(203);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(187);
      atom();
      setState(192);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::MUL) {
        setState(188);
        match(SynthtaxParser::MUL);
        setState(189);
        atom();
        setState(194);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(195);
      atom();
      setState(200);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::DIV) {
        setState(196);
        match(SynthtaxParser::DIV);
        setState(197);
        atom();
        setState(202);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

SynthtaxParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::AtomContext::OPENPAREN() {
  return getToken(SynthtaxParser::OPENPAREN, 0);
}

SynthtaxParser::ExpressionContext* SynthtaxParser::AtomContext::expression() {
  return getRuleContext<SynthtaxParser::ExpressionContext>(0);
}

tree::TerminalNode* SynthtaxParser::AtomContext::CLOSEPAREN() {
  return getToken(SynthtaxParser::CLOSEPAREN, 0);
}

tree::TerminalNode* SynthtaxParser::AtomContext::ID() {
  return getToken(SynthtaxParser::ID, 0);
}

SynthtaxParser::ExpressionListContext* SynthtaxParser::AtomContext::expressionList() {
  return getRuleContext<SynthtaxParser::ExpressionListContext>(0);
}

SynthtaxParser::LiteralContext* SynthtaxParser::AtomContext::literal() {
  return getRuleContext<SynthtaxParser::LiteralContext>(0);
}


size_t SynthtaxParser::AtomContext::getRuleIndex() const {
  return SynthtaxParser::RuleAtom;
}


std::any SynthtaxParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::AtomContext* SynthtaxParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 40, SynthtaxParser::RuleAtom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(217);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(205);
      match(SynthtaxParser::OPENPAREN);
      setState(206);
      expression();
      setState(207);
      match(SynthtaxParser::CLOSEPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(209);
      match(SynthtaxParser::ID);
      setState(210);
      match(SynthtaxParser::OPENPAREN);
      setState(212);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 520098048) != 0)) {
        setState(211);
        expressionList();
      }
      setState(214);
      match(SynthtaxParser::CLOSEPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(215);
      match(SynthtaxParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(216);
      literal();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

SynthtaxParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SynthtaxParser::ExpressionContext *> SynthtaxParser::ExpressionListContext::expression() {
  return getRuleContexts<SynthtaxParser::ExpressionContext>();
}

SynthtaxParser::ExpressionContext* SynthtaxParser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<SynthtaxParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> SynthtaxParser::ExpressionListContext::COMMA() {
  return getTokens(SynthtaxParser::COMMA);
}

tree::TerminalNode* SynthtaxParser::ExpressionListContext::COMMA(size_t i) {
  return getToken(SynthtaxParser::COMMA, i);
}


size_t SynthtaxParser::ExpressionListContext::getRuleIndex() const {
  return SynthtaxParser::RuleExpressionList;
}


std::any SynthtaxParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::ExpressionListContext* SynthtaxParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 42, SynthtaxParser::RuleExpressionList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    expression();
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SynthtaxParser::COMMA) {
      setState(220);
      match(SynthtaxParser::COMMA);
      setState(221);
      expression();
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

SynthtaxParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::LiteralContext::STRING() {
  return getToken(SynthtaxParser::STRING, 0);
}

tree::TerminalNode* SynthtaxParser::LiteralContext::INT() {
  return getToken(SynthtaxParser::INT, 0);
}

tree::TerminalNode* SynthtaxParser::LiteralContext::FLOAT() {
  return getToken(SynthtaxParser::FLOAT, 0);
}

tree::TerminalNode* SynthtaxParser::LiteralContext::CHAR() {
  return getToken(SynthtaxParser::CHAR, 0);
}

tree::TerminalNode* SynthtaxParser::LiteralContext::BOOL() {
  return getToken(SynthtaxParser::BOOL, 0);
}


size_t SynthtaxParser::LiteralContext::getRuleIndex() const {
  return SynthtaxParser::RuleLiteral;
}


std::any SynthtaxParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::LiteralContext* SynthtaxParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 44, SynthtaxParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 251658496) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void SynthtaxParser::initialize() {
  ::antlr4::internal::call_once(synthtaxparserParserOnceFlag, synthtaxparserParserInitialize);
}
