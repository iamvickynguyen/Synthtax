
// Generated from SynthtaxParser.g4 by ANTLR 4.12.0


#include "SynthtaxParserListener.h"
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
      "prog", "function", "funcDeclaration", "formalParameters", "funcBody", 
      "statement", "expressionStatement", "ifStatement", "whileStatement", 
      "returnStatement", "assignmentStatement", "block", "expression", "lessExpression", 
      "addSubExpression", "mulDivExpression", "atom", "literal"
    },
    std::vector<std::string>{
    },
    std::vector<std::string>{
      "", "DEF", "ID", "OPENPAREN", "CLOSEPAREN", "COMMA", "OPENBRACKET", 
      "CLOSEBRACKET", "SEMICOLON", "IF", "ELSE", "WHILE", "RETURN", "ASSIGN", 
      "EQUALITY", "LESS", "ADD", "SUB", "MUL", "DIV", "STRING", "INT", "FLOAT", 
      "CHAR", "BOOL"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,24,187,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,4,0,38,8,0,11,0,12,0,39,1,0,1,0,
  	1,1,1,1,1,1,1,2,1,2,1,2,1,2,3,2,51,8,2,1,2,1,2,1,3,1,3,1,3,5,3,58,8,3,
  	10,3,12,3,61,9,3,1,4,1,4,5,4,65,8,4,10,4,12,4,68,9,4,1,4,1,4,1,5,1,5,
  	1,5,1,5,1,5,1,5,3,5,78,8,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,3,7,96,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,
  	1,10,1,10,1,10,1,10,1,11,1,11,5,11,113,8,11,10,11,12,11,116,9,11,1,11,
  	1,11,1,12,1,12,1,12,5,12,123,8,12,10,12,12,12,126,9,12,1,13,1,13,1,13,
  	5,13,131,8,13,10,13,12,13,134,9,13,1,14,1,14,1,14,5,14,139,8,14,10,14,
  	12,14,142,9,14,1,14,1,14,1,14,5,14,147,8,14,10,14,12,14,150,9,14,3,14,
  	152,8,14,1,15,1,15,1,15,5,15,157,8,15,10,15,12,15,160,9,15,1,15,1,15,
  	1,15,5,15,165,8,15,10,15,12,15,168,9,15,3,15,170,8,15,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,183,8,16,1,17,1,17,1,17,
  	0,0,18,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,0,1,1,0,20,24,
  	190,0,37,1,0,0,0,2,43,1,0,0,0,4,46,1,0,0,0,6,54,1,0,0,0,8,62,1,0,0,0,
  	10,77,1,0,0,0,12,79,1,0,0,0,14,95,1,0,0,0,16,97,1,0,0,0,18,103,1,0,0,
  	0,20,106,1,0,0,0,22,110,1,0,0,0,24,119,1,0,0,0,26,127,1,0,0,0,28,151,
  	1,0,0,0,30,169,1,0,0,0,32,182,1,0,0,0,34,184,1,0,0,0,36,38,3,2,1,0,37,
  	36,1,0,0,0,38,39,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,41,1,0,0,0,41,
  	42,5,0,0,1,42,1,1,0,0,0,43,44,3,4,2,0,44,45,3,8,4,0,45,3,1,0,0,0,46,47,
  	5,1,0,0,47,48,5,2,0,0,48,50,5,3,0,0,49,51,3,6,3,0,50,49,1,0,0,0,50,51,
  	1,0,0,0,51,52,1,0,0,0,52,53,5,4,0,0,53,5,1,0,0,0,54,59,5,2,0,0,55,56,
  	5,5,0,0,56,58,5,2,0,0,57,55,1,0,0,0,58,61,1,0,0,0,59,57,1,0,0,0,59,60,
  	1,0,0,0,60,7,1,0,0,0,61,59,1,0,0,0,62,66,5,6,0,0,63,65,3,10,5,0,64,63,
  	1,0,0,0,65,68,1,0,0,0,66,64,1,0,0,0,66,67,1,0,0,0,67,69,1,0,0,0,68,66,
  	1,0,0,0,69,70,5,7,0,0,70,9,1,0,0,0,71,78,3,12,6,0,72,78,3,14,7,0,73,78,
  	3,16,8,0,74,78,3,18,9,0,75,78,3,20,10,0,76,78,5,8,0,0,77,71,1,0,0,0,77,
  	72,1,0,0,0,77,73,1,0,0,0,77,74,1,0,0,0,77,75,1,0,0,0,77,76,1,0,0,0,78,
  	11,1,0,0,0,79,80,3,24,12,0,80,13,1,0,0,0,81,82,5,9,0,0,82,83,5,3,0,0,
  	83,84,3,24,12,0,84,85,5,4,0,0,85,86,3,22,11,0,86,87,5,10,0,0,87,88,3,
  	22,11,0,88,96,1,0,0,0,89,90,5,9,0,0,90,91,5,3,0,0,91,92,3,24,12,0,92,
  	93,5,4,0,0,93,94,3,22,11,0,94,96,1,0,0,0,95,81,1,0,0,0,95,89,1,0,0,0,
  	96,15,1,0,0,0,97,98,5,11,0,0,98,99,5,3,0,0,99,100,3,24,12,0,100,101,5,
  	4,0,0,101,102,3,22,11,0,102,17,1,0,0,0,103,104,5,12,0,0,104,105,3,24,
  	12,0,105,19,1,0,0,0,106,107,5,2,0,0,107,108,5,13,0,0,108,109,3,24,12,
  	0,109,21,1,0,0,0,110,114,5,3,0,0,111,113,3,10,5,0,112,111,1,0,0,0,113,
  	116,1,0,0,0,114,112,1,0,0,0,114,115,1,0,0,0,115,117,1,0,0,0,116,114,1,
  	0,0,0,117,118,5,4,0,0,118,23,1,0,0,0,119,124,3,26,13,0,120,121,5,14,0,
  	0,121,123,3,26,13,0,122,120,1,0,0,0,123,126,1,0,0,0,124,122,1,0,0,0,124,
  	125,1,0,0,0,125,25,1,0,0,0,126,124,1,0,0,0,127,132,3,28,14,0,128,129,
  	5,15,0,0,129,131,3,28,14,0,130,128,1,0,0,0,131,134,1,0,0,0,132,130,1,
  	0,0,0,132,133,1,0,0,0,133,27,1,0,0,0,134,132,1,0,0,0,135,140,3,30,15,
  	0,136,137,5,16,0,0,137,139,3,30,15,0,138,136,1,0,0,0,139,142,1,0,0,0,
  	140,138,1,0,0,0,140,141,1,0,0,0,141,152,1,0,0,0,142,140,1,0,0,0,143,148,
  	3,30,15,0,144,145,5,17,0,0,145,147,3,30,15,0,146,144,1,0,0,0,147,150,
  	1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,152,1,0,0,0,150,148,1,0,0,
  	0,151,135,1,0,0,0,151,143,1,0,0,0,152,29,1,0,0,0,153,158,3,32,16,0,154,
  	155,5,18,0,0,155,157,3,32,16,0,156,154,1,0,0,0,157,160,1,0,0,0,158,156,
  	1,0,0,0,158,159,1,0,0,0,159,170,1,0,0,0,160,158,1,0,0,0,161,166,3,32,
  	16,0,162,163,5,19,0,0,163,165,3,32,16,0,164,162,1,0,0,0,165,168,1,0,0,
  	0,166,164,1,0,0,0,166,167,1,0,0,0,167,170,1,0,0,0,168,166,1,0,0,0,169,
  	153,1,0,0,0,169,161,1,0,0,0,170,31,1,0,0,0,171,172,5,3,0,0,172,173,3,
  	24,12,0,173,174,5,4,0,0,174,183,1,0,0,0,175,176,5,2,0,0,176,177,5,3,0,
  	0,177,178,3,24,12,0,178,179,5,4,0,0,179,183,1,0,0,0,180,183,5,2,0,0,181,
  	183,3,34,17,0,182,171,1,0,0,0,182,175,1,0,0,0,182,180,1,0,0,0,182,181,
  	1,0,0,0,183,33,1,0,0,0,184,185,7,0,0,0,185,35,1,0,0,0,16,39,50,59,66,
  	77,95,114,124,132,140,148,151,158,166,169,182
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

std::vector<SynthtaxParser::FunctionContext *> SynthtaxParser::ProgContext::function() {
  return getRuleContexts<SynthtaxParser::FunctionContext>();
}

SynthtaxParser::FunctionContext* SynthtaxParser::ProgContext::function(size_t i) {
  return getRuleContext<SynthtaxParser::FunctionContext>(i);
}


size_t SynthtaxParser::ProgContext::getRuleIndex() const {
  return SynthtaxParser::RuleProg;
}

void SynthtaxParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void SynthtaxParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
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
    setState(37); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(36);
      function();
      setState(39); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SynthtaxParser::DEF);
    setState(41);
    match(SynthtaxParser::EOF);
   
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

void SynthtaxParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void SynthtaxParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


std::any SynthtaxParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::FunctionContext* SynthtaxParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 2, SynthtaxParser::RuleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    funcDeclaration();
    setState(44);
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

tree::TerminalNode* SynthtaxParser::FuncDeclarationContext::DEF() {
  return getToken(SynthtaxParser::DEF, 0);
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

void SynthtaxParser::FuncDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDeclaration(this);
}

void SynthtaxParser::FuncDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDeclaration(this);
}


std::any SynthtaxParser::FuncDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitFuncDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::FuncDeclarationContext* SynthtaxParser::funcDeclaration() {
  FuncDeclarationContext *_localctx = _tracker.createInstance<FuncDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, SynthtaxParser::RuleFuncDeclaration);
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
    setState(46);
    match(SynthtaxParser::DEF);
    setState(47);
    match(SynthtaxParser::ID);
    setState(48);
    match(SynthtaxParser::OPENPAREN);
    setState(50);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SynthtaxParser::ID) {
      setState(49);
      formalParameters();
    }
    setState(52);
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

std::vector<tree::TerminalNode *> SynthtaxParser::FormalParametersContext::COMMA() {
  return getTokens(SynthtaxParser::COMMA);
}

tree::TerminalNode* SynthtaxParser::FormalParametersContext::COMMA(size_t i) {
  return getToken(SynthtaxParser::COMMA, i);
}


size_t SynthtaxParser::FormalParametersContext::getRuleIndex() const {
  return SynthtaxParser::RuleFormalParameters;
}

void SynthtaxParser::FormalParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameters(this);
}

void SynthtaxParser::FormalParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameters(this);
}


std::any SynthtaxParser::FormalParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameters(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::FormalParametersContext* SynthtaxParser::formalParameters() {
  FormalParametersContext *_localctx = _tracker.createInstance<FormalParametersContext>(_ctx, getState());
  enterRule(_localctx, 6, SynthtaxParser::RuleFormalParameters);
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
    setState(54);
    match(SynthtaxParser::ID);
    setState(59);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SynthtaxParser::COMMA) {
      setState(55);
      match(SynthtaxParser::COMMA);
      setState(56);
      match(SynthtaxParser::ID);
      setState(61);
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

void SynthtaxParser::FuncBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncBody(this);
}

void SynthtaxParser::FuncBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncBody(this);
}


std::any SynthtaxParser::FuncBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitFuncBody(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::FuncBodyContext* SynthtaxParser::funcBody() {
  FuncBodyContext *_localctx = _tracker.createInstance<FuncBodyContext>(_ctx, getState());
  enterRule(_localctx, 8, SynthtaxParser::RuleFuncBody);
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
    setState(62);
    match(SynthtaxParser::OPENBRACKET);
    setState(66);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32512780) != 0)) {
      setState(63);
      statement();
      setState(68);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(69);
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

tree::TerminalNode* SynthtaxParser::StatementContext::SEMICOLON() {
  return getToken(SynthtaxParser::SEMICOLON, 0);
}


size_t SynthtaxParser::StatementContext::getRuleIndex() const {
  return SynthtaxParser::RuleStatement;
}

void SynthtaxParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void SynthtaxParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any SynthtaxParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::StatementContext* SynthtaxParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 10, SynthtaxParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(71);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(72);
      ifStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(73);
      whileStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(74);
      returnStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(75);
      assignmentStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(76);
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

void SynthtaxParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void SynthtaxParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


std::any SynthtaxParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::ExpressionStatementContext* SynthtaxParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, SynthtaxParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
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

void SynthtaxParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void SynthtaxParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


std::any SynthtaxParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::IfStatementContext* SynthtaxParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, SynthtaxParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(81);
      match(SynthtaxParser::IF);
      setState(82);
      match(SynthtaxParser::OPENPAREN);
      setState(83);
      expression();
      setState(84);
      match(SynthtaxParser::CLOSEPAREN);
      setState(85);
      block();
      setState(86);
      match(SynthtaxParser::ELSE);
      setState(87);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(89);
      match(SynthtaxParser::IF);
      setState(90);
      match(SynthtaxParser::OPENPAREN);
      setState(91);
      expression();
      setState(92);
      match(SynthtaxParser::CLOSEPAREN);
      setState(93);
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

void SynthtaxParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void SynthtaxParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


std::any SynthtaxParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::WhileStatementContext* SynthtaxParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, SynthtaxParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(SynthtaxParser::WHILE);
    setState(98);
    match(SynthtaxParser::OPENPAREN);
    setState(99);
    expression();
    setState(100);
    match(SynthtaxParser::CLOSEPAREN);
    setState(101);
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

void SynthtaxParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void SynthtaxParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


std::any SynthtaxParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::ReturnStatementContext* SynthtaxParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, SynthtaxParser::RuleReturnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(SynthtaxParser::RETURN);
    setState(104);
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

void SynthtaxParser::AssignmentStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStatement(this);
}

void SynthtaxParser::AssignmentStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStatement(this);
}


std::any SynthtaxParser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::AssignmentStatementContext* SynthtaxParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, SynthtaxParser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(SynthtaxParser::ID);
    setState(107);
    match(SynthtaxParser::ASSIGN);
    setState(108);
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

tree::TerminalNode* SynthtaxParser::BlockContext::OPENPAREN() {
  return getToken(SynthtaxParser::OPENPAREN, 0);
}

tree::TerminalNode* SynthtaxParser::BlockContext::CLOSEPAREN() {
  return getToken(SynthtaxParser::CLOSEPAREN, 0);
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

void SynthtaxParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void SynthtaxParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any SynthtaxParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::BlockContext* SynthtaxParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 22, SynthtaxParser::RuleBlock);
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
    setState(110);
    match(SynthtaxParser::OPENPAREN);
    setState(114);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32512780) != 0)) {
      setState(111);
      statement();
      setState(116);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(117);
    match(SynthtaxParser::CLOSEPAREN);
   
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

void SynthtaxParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void SynthtaxParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any SynthtaxParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::ExpressionContext* SynthtaxParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, SynthtaxParser::RuleExpression);
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
    setState(119);
    lessExpression();
    setState(124);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SynthtaxParser::EQUALITY) {
      setState(120);
      match(SynthtaxParser::EQUALITY);
      setState(121);
      lessExpression();
      setState(126);
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

void SynthtaxParser::LessExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLessExpression(this);
}

void SynthtaxParser::LessExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLessExpression(this);
}


std::any SynthtaxParser::LessExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitLessExpression(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::LessExpressionContext* SynthtaxParser::lessExpression() {
  LessExpressionContext *_localctx = _tracker.createInstance<LessExpressionContext>(_ctx, getState());
  enterRule(_localctx, 26, SynthtaxParser::RuleLessExpression);
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
    setState(127);
    addSubExpression();
    setState(132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SynthtaxParser::LESS) {
      setState(128);
      match(SynthtaxParser::LESS);
      setState(129);
      addSubExpression();
      setState(134);
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

void SynthtaxParser::AddSubExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSubExpression(this);
}

void SynthtaxParser::AddSubExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSubExpression(this);
}


std::any SynthtaxParser::AddSubExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitAddSubExpression(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::AddSubExpressionContext* SynthtaxParser::addSubExpression() {
  AddSubExpressionContext *_localctx = _tracker.createInstance<AddSubExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, SynthtaxParser::RuleAddSubExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(135);
      mulDivExpression();
      setState(140);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::ADD) {
        setState(136);
        match(SynthtaxParser::ADD);
        setState(137);
        mulDivExpression();
        setState(142);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(143);
      mulDivExpression();
      setState(148);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::SUB) {
        setState(144);
        match(SynthtaxParser::SUB);
        setState(145);
        mulDivExpression();
        setState(150);
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

void SynthtaxParser::MulDivExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivExpression(this);
}

void SynthtaxParser::MulDivExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivExpression(this);
}


std::any SynthtaxParser::MulDivExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitMulDivExpression(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::MulDivExpressionContext* SynthtaxParser::mulDivExpression() {
  MulDivExpressionContext *_localctx = _tracker.createInstance<MulDivExpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, SynthtaxParser::RuleMulDivExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(169);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(153);
      atom();
      setState(158);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::MUL) {
        setState(154);
        match(SynthtaxParser::MUL);
        setState(155);
        atom();
        setState(160);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(161);
      atom();
      setState(166);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::DIV) {
        setState(162);
        match(SynthtaxParser::DIV);
        setState(163);
        atom();
        setState(168);
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

SynthtaxParser::LiteralContext* SynthtaxParser::AtomContext::literal() {
  return getRuleContext<SynthtaxParser::LiteralContext>(0);
}


size_t SynthtaxParser::AtomContext::getRuleIndex() const {
  return SynthtaxParser::RuleAtom;
}

void SynthtaxParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void SynthtaxParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}


std::any SynthtaxParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::AtomContext* SynthtaxParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 32, SynthtaxParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(182);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(171);
      match(SynthtaxParser::OPENPAREN);
      setState(172);
      expression();
      setState(173);
      match(SynthtaxParser::CLOSEPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(175);
      match(SynthtaxParser::ID);
      setState(176);
      match(SynthtaxParser::OPENPAREN);
      setState(177);
      expression();
      setState(178);
      match(SynthtaxParser::CLOSEPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(180);
      match(SynthtaxParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(181);
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

void SynthtaxParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void SynthtaxParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


std::any SynthtaxParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::LiteralContext* SynthtaxParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 34, SynthtaxParser::RuleLiteral);
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
    setState(184);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32505856) != 0))) {
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
