
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
      "addSubExpression", "mulDivExpression", "atom", "literal", "identifier"
    },
    std::vector<std::string>{
    },
    std::vector<std::string>{
      "", "DEF", "OPENPAREN", "CLOSEPAREN", "COMMA", "OPENBRACKET", "CLOSEBRACKET", 
      "SEMICOLON", "IF", "ELSE", "WHILE", "RETURN", "ASSIGN", "EQUALITY", 
      "LESS", "ADD", "SUB", "MUL", "DIV", "STRING", "INT", "FLOAT", "CHAR", 
      "BOOL", "ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,24,188,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,4,0,40,8,0,11,0,12,0,41,
  	1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,5,3,57,8,3,10,3,12,
  	3,60,9,3,1,4,1,4,5,4,64,8,4,10,4,12,4,67,9,4,1,4,1,4,1,5,1,5,1,5,1,5,
  	1,5,1,5,3,5,77,8,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,3,7,95,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,
  	1,10,1,10,1,11,1,11,5,11,112,8,11,10,11,12,11,115,9,11,1,11,1,11,1,12,
  	1,12,1,12,5,12,122,8,12,10,12,12,12,125,9,12,1,13,1,13,1,13,5,13,130,
  	8,13,10,13,12,13,133,9,13,1,14,1,14,1,14,5,14,138,8,14,10,14,12,14,141,
  	9,14,1,14,1,14,1,14,5,14,146,8,14,10,14,12,14,149,9,14,3,14,151,8,14,
  	1,15,1,15,1,15,5,15,156,8,15,10,15,12,15,159,9,15,1,15,1,15,1,15,5,15,
  	164,8,15,10,15,12,15,167,9,15,3,15,169,8,15,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,3,16,182,8,16,1,17,1,17,1,18,1,18,1,18,
  	0,0,19,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,0,1,1,0,19,
  	23,189,0,39,1,0,0,0,2,45,1,0,0,0,4,48,1,0,0,0,6,53,1,0,0,0,8,61,1,0,0,
  	0,10,76,1,0,0,0,12,78,1,0,0,0,14,94,1,0,0,0,16,96,1,0,0,0,18,102,1,0,
  	0,0,20,105,1,0,0,0,22,109,1,0,0,0,24,118,1,0,0,0,26,126,1,0,0,0,28,150,
  	1,0,0,0,30,168,1,0,0,0,32,181,1,0,0,0,34,183,1,0,0,0,36,185,1,0,0,0,38,
  	40,3,2,1,0,39,38,1,0,0,0,40,41,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,
  	43,1,0,0,0,43,44,5,0,0,1,44,1,1,0,0,0,45,46,3,4,2,0,46,47,3,8,4,0,47,
  	3,1,0,0,0,48,49,5,1,0,0,49,50,3,36,18,0,50,51,5,2,0,0,51,52,5,3,0,0,52,
  	5,1,0,0,0,53,58,3,36,18,0,54,55,5,4,0,0,55,57,3,36,18,0,56,54,1,0,0,0,
  	57,60,1,0,0,0,58,56,1,0,0,0,58,59,1,0,0,0,59,7,1,0,0,0,60,58,1,0,0,0,
  	61,65,5,5,0,0,62,64,3,10,5,0,63,62,1,0,0,0,64,67,1,0,0,0,65,63,1,0,0,
  	0,65,66,1,0,0,0,66,68,1,0,0,0,67,65,1,0,0,0,68,69,5,6,0,0,69,9,1,0,0,
  	0,70,77,3,12,6,0,71,77,3,14,7,0,72,77,3,16,8,0,73,77,3,18,9,0,74,77,3,
  	20,10,0,75,77,5,7,0,0,76,70,1,0,0,0,76,71,1,0,0,0,76,72,1,0,0,0,76,73,
  	1,0,0,0,76,74,1,0,0,0,76,75,1,0,0,0,77,11,1,0,0,0,78,79,3,24,12,0,79,
  	13,1,0,0,0,80,81,5,8,0,0,81,82,5,2,0,0,82,83,3,24,12,0,83,84,5,3,0,0,
  	84,85,3,22,11,0,85,86,5,9,0,0,86,87,3,22,11,0,87,95,1,0,0,0,88,89,5,8,
  	0,0,89,90,5,2,0,0,90,91,3,24,12,0,91,92,5,3,0,0,92,93,3,22,11,0,93,95,
  	1,0,0,0,94,80,1,0,0,0,94,88,1,0,0,0,95,15,1,0,0,0,96,97,5,10,0,0,97,98,
  	5,2,0,0,98,99,3,24,12,0,99,100,5,3,0,0,100,101,3,22,11,0,101,17,1,0,0,
  	0,102,103,5,11,0,0,103,104,3,24,12,0,104,19,1,0,0,0,105,106,3,36,18,0,
  	106,107,5,12,0,0,107,108,3,24,12,0,108,21,1,0,0,0,109,113,5,2,0,0,110,
  	112,3,10,5,0,111,110,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,113,114,
  	1,0,0,0,114,116,1,0,0,0,115,113,1,0,0,0,116,117,5,3,0,0,117,23,1,0,0,
  	0,118,123,3,26,13,0,119,120,5,13,0,0,120,122,3,26,13,0,121,119,1,0,0,
  	0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,25,1,0,0,0,125,
  	123,1,0,0,0,126,131,3,28,14,0,127,128,5,14,0,0,128,130,3,28,14,0,129,
  	127,1,0,0,0,130,133,1,0,0,0,131,129,1,0,0,0,131,132,1,0,0,0,132,27,1,
  	0,0,0,133,131,1,0,0,0,134,139,3,30,15,0,135,136,5,15,0,0,136,138,3,30,
  	15,0,137,135,1,0,0,0,138,141,1,0,0,0,139,137,1,0,0,0,139,140,1,0,0,0,
  	140,151,1,0,0,0,141,139,1,0,0,0,142,147,3,30,15,0,143,144,5,16,0,0,144,
  	146,3,30,15,0,145,143,1,0,0,0,146,149,1,0,0,0,147,145,1,0,0,0,147,148,
  	1,0,0,0,148,151,1,0,0,0,149,147,1,0,0,0,150,134,1,0,0,0,150,142,1,0,0,
  	0,151,29,1,0,0,0,152,157,3,32,16,0,153,154,5,17,0,0,154,156,3,32,16,0,
  	155,153,1,0,0,0,156,159,1,0,0,0,157,155,1,0,0,0,157,158,1,0,0,0,158,169,
  	1,0,0,0,159,157,1,0,0,0,160,165,3,32,16,0,161,162,5,18,0,0,162,164,3,
  	32,16,0,163,161,1,0,0,0,164,167,1,0,0,0,165,163,1,0,0,0,165,166,1,0,0,
  	0,166,169,1,0,0,0,167,165,1,0,0,0,168,152,1,0,0,0,168,160,1,0,0,0,169,
  	31,1,0,0,0,170,171,5,2,0,0,171,172,3,24,12,0,172,173,5,3,0,0,173,182,
  	1,0,0,0,174,175,3,36,18,0,175,176,5,2,0,0,176,177,3,24,12,0,177,178,5,
  	3,0,0,178,182,1,0,0,0,179,182,3,36,18,0,180,182,3,34,17,0,181,170,1,0,
  	0,0,181,174,1,0,0,0,181,179,1,0,0,0,181,180,1,0,0,0,182,33,1,0,0,0,183,
  	184,7,0,0,0,184,35,1,0,0,0,185,186,5,24,0,0,186,37,1,0,0,0,15,41,58,65,
  	76,94,113,123,131,139,147,150,157,165,168,181
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
    setState(39); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(38);
      function();
      setState(41); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SynthtaxParser::DEF);
    setState(43);
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
    setState(45);
    funcDeclaration();
    setState(46);
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

SynthtaxParser::IdentifierContext* SynthtaxParser::FuncDeclarationContext::identifier() {
  return getRuleContext<SynthtaxParser::IdentifierContext>(0);
}

tree::TerminalNode* SynthtaxParser::FuncDeclarationContext::OPENPAREN() {
  return getToken(SynthtaxParser::OPENPAREN, 0);
}

tree::TerminalNode* SynthtaxParser::FuncDeclarationContext::CLOSEPAREN() {
  return getToken(SynthtaxParser::CLOSEPAREN, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(SynthtaxParser::DEF);
    setState(49);
    identifier();
    setState(50);
    match(SynthtaxParser::OPENPAREN);
    setState(51);
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

std::vector<SynthtaxParser::IdentifierContext *> SynthtaxParser::FormalParametersContext::identifier() {
  return getRuleContexts<SynthtaxParser::IdentifierContext>();
}

SynthtaxParser::IdentifierContext* SynthtaxParser::FormalParametersContext::identifier(size_t i) {
  return getRuleContext<SynthtaxParser::IdentifierContext>(i);
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
    setState(53);
    identifier();
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SynthtaxParser::COMMA) {
      setState(54);
      match(SynthtaxParser::COMMA);
      setState(55);
      identifier();
      setState(60);
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
    setState(61);
    match(SynthtaxParser::OPENBRACKET);
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33033604) != 0)) {
      setState(62);
      statement();
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(68);
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
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(70);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(71);
      ifStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(72);
      whileStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(73);
      returnStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(74);
      assignmentStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(75);
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
    setState(78);
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
    setState(94);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(80);
      match(SynthtaxParser::IF);
      setState(81);
      match(SynthtaxParser::OPENPAREN);
      setState(82);
      expression();
      setState(83);
      match(SynthtaxParser::CLOSEPAREN);
      setState(84);
      block();
      setState(85);
      match(SynthtaxParser::ELSE);
      setState(86);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(88);
      match(SynthtaxParser::IF);
      setState(89);
      match(SynthtaxParser::OPENPAREN);
      setState(90);
      expression();
      setState(91);
      match(SynthtaxParser::CLOSEPAREN);
      setState(92);
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
    setState(96);
    match(SynthtaxParser::WHILE);
    setState(97);
    match(SynthtaxParser::OPENPAREN);
    setState(98);
    expression();
    setState(99);
    match(SynthtaxParser::CLOSEPAREN);
    setState(100);
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
    setState(102);
    match(SynthtaxParser::RETURN);
    setState(103);
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

SynthtaxParser::IdentifierContext* SynthtaxParser::AssignmentStatementContext::identifier() {
  return getRuleContext<SynthtaxParser::IdentifierContext>(0);
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
    setState(105);
    identifier();
    setState(106);
    match(SynthtaxParser::ASSIGN);
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
    setState(109);
    match(SynthtaxParser::OPENPAREN);
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33033604) != 0)) {
      setState(110);
      statement();
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(116);
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
    setState(118);
    lessExpression();
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SynthtaxParser::EQUALITY) {
      setState(119);
      match(SynthtaxParser::EQUALITY);
      setState(120);
      lessExpression();
      setState(125);
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
    setState(126);
    addSubExpression();
    setState(131);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SynthtaxParser::LESS) {
      setState(127);
      match(SynthtaxParser::LESS);
      setState(128);
      addSubExpression();
      setState(133);
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
    setState(150);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(134);
      mulDivExpression();
      setState(139);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::ADD) {
        setState(135);
        match(SynthtaxParser::ADD);
        setState(136);
        mulDivExpression();
        setState(141);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(142);
      mulDivExpression();
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::SUB) {
        setState(143);
        match(SynthtaxParser::SUB);
        setState(144);
        mulDivExpression();
        setState(149);
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
    setState(168);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(152);
      atom();
      setState(157);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::MUL) {
        setState(153);
        match(SynthtaxParser::MUL);
        setState(154);
        atom();
        setState(159);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(160);
      atom();
      setState(165);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::DIV) {
        setState(161);
        match(SynthtaxParser::DIV);
        setState(162);
        atom();
        setState(167);
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

SynthtaxParser::IdentifierContext* SynthtaxParser::AtomContext::identifier() {
  return getRuleContext<SynthtaxParser::IdentifierContext>(0);
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
    setState(181);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(170);
      match(SynthtaxParser::OPENPAREN);
      setState(171);
      expression();
      setState(172);
      match(SynthtaxParser::CLOSEPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(174);
      identifier();
      setState(175);
      match(SynthtaxParser::OPENPAREN);
      setState(176);
      expression();
      setState(177);
      match(SynthtaxParser::CLOSEPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(179);
      identifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(180);
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
    setState(183);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16252928) != 0))) {
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

//----------------- IdentifierContext ------------------------------------------------------------------

SynthtaxParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SynthtaxParser::IdentifierContext::ID() {
  return getToken(SynthtaxParser::ID, 0);
}


size_t SynthtaxParser::IdentifierContext::getRuleIndex() const {
  return SynthtaxParser::RuleIdentifier;
}

void SynthtaxParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void SynthtaxParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SynthtaxParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


std::any SynthtaxParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

SynthtaxParser::IdentifierContext* SynthtaxParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 36, SynthtaxParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(SynthtaxParser::ID);
   
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
