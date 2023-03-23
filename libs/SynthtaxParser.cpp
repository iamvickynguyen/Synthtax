
// Generated from Synthtax.g4 by ANTLR 4.12.0


#include "SynthtaxVisitor.h"

#include "SynthtaxParser.h"


using namespace antlrcpp;

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

::antlr4::internal::OnceFlag synthtaxParserOnceFlag;
SynthtaxParserStaticData *synthtaxParserStaticData = nullptr;

void synthtaxParserInitialize() {
  assert(synthtaxParserStaticData == nullptr);
  auto staticData = std::make_unique<SynthtaxParserStaticData>(
    std::vector<std::string>{
      "prog", "function", "funcDeclaration", "formalParameters", "funcBody", 
      "statement", "expressionStatement", "ifStatement", "whileStatement", 
      "returnStatement", "assignmentStatement", "block", "expression", "lessExpression", 
      "addSubExpression", "mulDivExpression", "atom", "literal", "identifier"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "','", "';'", "'('", "')'", "'{'", "'}'", 
      "'if'", "'else'", "'while'", "'return'", "'='", "'=='", "'<'", "'+'", 
      "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "STRING", "INT", "FLOAT", "CHAR", "LETTER", "BOOL", "COMMA", "SEMICOLON", 
      "OPENPAREN", "CLOSEPAREN", "OPENBRACKET", "CLOSEBRACKET", "IF", "ELSE", 
      "WHILE", "RETURN", "ASSIGN", "EQUALITY", "LESS", "ADD", "SUB", "MUL", 
      "DIV", "NEWLINE", "WS", "BLOCKCOMMENT", "LINECOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,27,193,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,4,0,40,8,0,11,0,12,0,41,
  	1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,3,2,52,8,2,1,2,1,2,1,3,1,3,1,3,5,3,59,
  	8,3,10,3,12,3,62,9,3,1,4,1,4,5,4,66,8,4,10,4,12,4,69,9,4,1,4,1,4,1,5,
  	1,5,1,5,1,5,1,5,1,5,3,5,79,8,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,97,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,
  	1,9,1,10,1,10,1,10,1,10,1,11,1,11,5,11,114,8,11,10,11,12,11,117,9,11,
  	1,11,1,11,1,12,1,12,1,12,5,12,124,8,12,10,12,12,12,127,9,12,1,13,1,13,
  	1,13,5,13,132,8,13,10,13,12,13,135,9,13,1,14,1,14,1,14,5,14,140,8,14,
  	10,14,12,14,143,9,14,1,14,1,14,1,14,5,14,148,8,14,10,14,12,14,151,9,14,
  	3,14,153,8,14,1,15,1,15,1,15,5,15,158,8,15,10,15,12,15,161,9,15,1,15,
  	1,15,1,15,5,15,166,8,15,10,15,12,15,169,9,15,3,15,171,8,15,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,184,8,16,1,17,1,17,
  	1,18,4,18,189,8,18,11,18,12,18,190,1,18,0,0,19,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,0,1,2,0,1,4,6,6,196,0,39,1,0,0,0,2,45,1,
  	0,0,0,4,48,1,0,0,0,6,55,1,0,0,0,8,63,1,0,0,0,10,78,1,0,0,0,12,80,1,0,
  	0,0,14,96,1,0,0,0,16,98,1,0,0,0,18,104,1,0,0,0,20,107,1,0,0,0,22,111,
  	1,0,0,0,24,120,1,0,0,0,26,128,1,0,0,0,28,152,1,0,0,0,30,170,1,0,0,0,32,
  	183,1,0,0,0,34,185,1,0,0,0,36,188,1,0,0,0,38,40,3,2,1,0,39,38,1,0,0,0,
  	40,41,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,43,1,0,0,0,43,44,5,0,0,1,
  	44,1,1,0,0,0,45,46,3,4,2,0,46,47,3,8,4,0,47,3,1,0,0,0,48,49,3,36,18,0,
  	49,51,5,9,0,0,50,52,3,6,3,0,51,50,1,0,0,0,51,52,1,0,0,0,52,53,1,0,0,0,
  	53,54,5,10,0,0,54,5,1,0,0,0,55,60,3,36,18,0,56,57,5,7,0,0,57,59,3,36,
  	18,0,58,56,1,0,0,0,59,62,1,0,0,0,60,58,1,0,0,0,60,61,1,0,0,0,61,7,1,0,
  	0,0,62,60,1,0,0,0,63,67,5,11,0,0,64,66,3,10,5,0,65,64,1,0,0,0,66,69,1,
  	0,0,0,67,65,1,0,0,0,67,68,1,0,0,0,68,70,1,0,0,0,69,67,1,0,0,0,70,71,5,
  	12,0,0,71,9,1,0,0,0,72,79,3,12,6,0,73,79,3,14,7,0,74,79,3,16,8,0,75,79,
  	3,18,9,0,76,79,3,20,10,0,77,79,5,8,0,0,78,72,1,0,0,0,78,73,1,0,0,0,78,
  	74,1,0,0,0,78,75,1,0,0,0,78,76,1,0,0,0,78,77,1,0,0,0,79,11,1,0,0,0,80,
  	81,3,24,12,0,81,13,1,0,0,0,82,83,5,13,0,0,83,84,5,9,0,0,84,85,3,24,12,
  	0,85,86,5,10,0,0,86,87,3,22,11,0,87,88,5,14,0,0,88,89,3,22,11,0,89,97,
  	1,0,0,0,90,91,5,13,0,0,91,92,5,9,0,0,92,93,3,24,12,0,93,94,5,10,0,0,94,
  	95,3,22,11,0,95,97,1,0,0,0,96,82,1,0,0,0,96,90,1,0,0,0,97,15,1,0,0,0,
  	98,99,5,15,0,0,99,100,5,9,0,0,100,101,3,24,12,0,101,102,5,10,0,0,102,
  	103,3,22,11,0,103,17,1,0,0,0,104,105,5,16,0,0,105,106,3,24,12,0,106,19,
  	1,0,0,0,107,108,3,36,18,0,108,109,5,17,0,0,109,110,3,24,12,0,110,21,1,
  	0,0,0,111,115,5,9,0,0,112,114,3,10,5,0,113,112,1,0,0,0,114,117,1,0,0,
  	0,115,113,1,0,0,0,115,116,1,0,0,0,116,118,1,0,0,0,117,115,1,0,0,0,118,
  	119,5,10,0,0,119,23,1,0,0,0,120,125,3,26,13,0,121,122,5,18,0,0,122,124,
  	3,26,13,0,123,121,1,0,0,0,124,127,1,0,0,0,125,123,1,0,0,0,125,126,1,0,
  	0,0,126,25,1,0,0,0,127,125,1,0,0,0,128,133,3,28,14,0,129,130,5,19,0,0,
  	130,132,3,28,14,0,131,129,1,0,0,0,132,135,1,0,0,0,133,131,1,0,0,0,133,
  	134,1,0,0,0,134,27,1,0,0,0,135,133,1,0,0,0,136,141,3,30,15,0,137,138,
  	5,20,0,0,138,140,3,30,15,0,139,137,1,0,0,0,140,143,1,0,0,0,141,139,1,
  	0,0,0,141,142,1,0,0,0,142,153,1,0,0,0,143,141,1,0,0,0,144,149,3,30,15,
  	0,145,146,5,21,0,0,146,148,3,30,15,0,147,145,1,0,0,0,148,151,1,0,0,0,
  	149,147,1,0,0,0,149,150,1,0,0,0,150,153,1,0,0,0,151,149,1,0,0,0,152,136,
  	1,0,0,0,152,144,1,0,0,0,153,29,1,0,0,0,154,159,3,32,16,0,155,156,5,22,
  	0,0,156,158,3,32,16,0,157,155,1,0,0,0,158,161,1,0,0,0,159,157,1,0,0,0,
  	159,160,1,0,0,0,160,171,1,0,0,0,161,159,1,0,0,0,162,167,3,32,16,0,163,
  	164,5,23,0,0,164,166,3,32,16,0,165,163,1,0,0,0,166,169,1,0,0,0,167,165,
  	1,0,0,0,167,168,1,0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,170,154,1,0,0,
  	0,170,162,1,0,0,0,171,31,1,0,0,0,172,173,5,9,0,0,173,174,3,24,12,0,174,
  	175,5,10,0,0,175,184,1,0,0,0,176,177,3,36,18,0,177,178,5,9,0,0,178,179,
  	3,24,12,0,179,180,5,10,0,0,180,184,1,0,0,0,181,184,3,36,18,0,182,184,
  	3,34,17,0,183,172,1,0,0,0,183,176,1,0,0,0,183,181,1,0,0,0,183,182,1,0,
  	0,0,184,33,1,0,0,0,185,186,7,0,0,0,186,35,1,0,0,0,187,189,5,5,0,0,188,
  	187,1,0,0,0,189,190,1,0,0,0,190,188,1,0,0,0,190,191,1,0,0,0,191,37,1,
  	0,0,0,17,41,51,60,67,78,96,115,125,133,141,149,152,159,167,170,183,190
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  synthtaxParserStaticData = staticData.release();
}

}

SynthtaxParser::SynthtaxParser(TokenStream *input) : SynthtaxParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SynthtaxParser::SynthtaxParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SynthtaxParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *synthtaxParserStaticData->atn, synthtaxParserStaticData->decisionToDFA, synthtaxParserStaticData->sharedContextCache, options);
}

SynthtaxParser::~SynthtaxParser() {
  delete _interpreter;
}

const atn::ATN& SynthtaxParser::getATN() const {
  return *synthtaxParserStaticData->atn;
}

std::string SynthtaxParser::getGrammarFileName() const {
  return "Synthtax.g4";
}

const std::vector<std::string>& SynthtaxParser::getRuleNames() const {
  return synthtaxParserStaticData->ruleNames;
}

const dfa::Vocabulary& SynthtaxParser::getVocabulary() const {
  return synthtaxParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SynthtaxParser::getSerializedATN() const {
  return synthtaxParserStaticData->serializedATN;
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


std::any SynthtaxParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    } while (_la == SynthtaxParser::LETTER);
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


std::any SynthtaxParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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

SynthtaxParser::IdentifierContext* SynthtaxParser::FuncDeclarationContext::identifier() {
  return getRuleContext<SynthtaxParser::IdentifierContext>(0);
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
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(48);
    identifier();
    setState(49);
    match(SynthtaxParser::OPENPAREN);
    setState(51);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SynthtaxParser::LETTER) {
      setState(50);
      formalParameters();
    }
    setState(53);
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


std::any SynthtaxParser::FormalParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(55);
    identifier();
    setState(60);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SynthtaxParser::COMMA) {
      setState(56);
      match(SynthtaxParser::COMMA);
      setState(57);
      identifier();
      setState(62);
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
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(63);
    match(SynthtaxParser::OPENBRACKET);
    setState(67);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 107390) != 0)) {
      setState(64);
      statement();
      setState(69);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(70);
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


std::any SynthtaxParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(78);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(72);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(73);
      ifStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(74);
      whileStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(75);
      returnStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(76);
      assignmentStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(77);
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


std::any SynthtaxParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(80);
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
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(96);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(82);
      match(SynthtaxParser::IF);
      setState(83);
      match(SynthtaxParser::OPENPAREN);
      setState(84);
      expression();
      setState(85);
      match(SynthtaxParser::CLOSEPAREN);
      setState(86);
      block();
      setState(87);
      match(SynthtaxParser::ELSE);
      setState(88);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(90);
      match(SynthtaxParser::IF);
      setState(91);
      match(SynthtaxParser::OPENPAREN);
      setState(92);
      expression();
      setState(93);
      match(SynthtaxParser::CLOSEPAREN);
      setState(94);
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
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(98);
    match(SynthtaxParser::WHILE);
    setState(99);
    match(SynthtaxParser::OPENPAREN);
    setState(100);
    expression();
    setState(101);
    match(SynthtaxParser::CLOSEPAREN);
    setState(102);
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
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(104);
    match(SynthtaxParser::RETURN);
    setState(105);
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


std::any SynthtaxParser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(107);
    identifier();
    setState(108);
    match(SynthtaxParser::ASSIGN);
    setState(109);
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


std::any SynthtaxParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(111);
    match(SynthtaxParser::OPENPAREN);
    setState(115);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 107390) != 0)) {
      setState(112);
      statement();
      setState(117);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(118);
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


std::any SynthtaxParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(120);
    lessExpression();
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SynthtaxParser::EQUALITY) {
      setState(121);
      match(SynthtaxParser::EQUALITY);
      setState(122);
      lessExpression();
      setState(127);
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
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(128);
    addSubExpression();
    setState(133);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SynthtaxParser::LESS) {
      setState(129);
      match(SynthtaxParser::LESS);
      setState(130);
      addSubExpression();
      setState(135);
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
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(152);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(136);
      mulDivExpression();
      setState(141);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::ADD) {
        setState(137);
        match(SynthtaxParser::ADD);
        setState(138);
        mulDivExpression();
        setState(143);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(144);
      mulDivExpression();
      setState(149);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::SUB) {
        setState(145);
        match(SynthtaxParser::SUB);
        setState(146);
        mulDivExpression();
        setState(151);
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
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(170);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(154);
      atom();
      setState(159);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::MUL) {
        setState(155);
        match(SynthtaxParser::MUL);
        setState(156);
        atom();
        setState(161);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(162);
      atom();
      setState(167);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SynthtaxParser::DIV) {
        setState(163);
        match(SynthtaxParser::DIV);
        setState(164);
        atom();
        setState(169);
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


std::any SynthtaxParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(183);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(172);
      match(SynthtaxParser::OPENPAREN);
      setState(173);
      expression();
      setState(174);
      match(SynthtaxParser::CLOSEPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(176);
      identifier();
      setState(177);
      match(SynthtaxParser::OPENPAREN);
      setState(178);
      expression();
      setState(179);
      match(SynthtaxParser::CLOSEPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(181);
      identifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(182);
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


std::any SynthtaxParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    setState(185);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 94) != 0))) {
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

std::vector<tree::TerminalNode *> SynthtaxParser::IdentifierContext::LETTER() {
  return getTokens(SynthtaxParser::LETTER);
}

tree::TerminalNode* SynthtaxParser::IdentifierContext::LETTER(size_t i) {
  return getToken(SynthtaxParser::LETTER, i);
}


size_t SynthtaxParser::IdentifierContext::getRuleIndex() const {
  return SynthtaxParser::RuleIdentifier;
}


std::any SynthtaxParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SynthtaxVisitor*>(visitor))
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(188); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(187);
              match(SynthtaxParser::LETTER);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(190); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void SynthtaxParser::initialize() {
  ::antlr4::internal::call_once(synthtaxParserOnceFlag, synthtaxParserInitialize);
}
