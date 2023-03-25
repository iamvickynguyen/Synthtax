#!/bin/bash
set -o errexit

LOCATION=tool/antlr-4.12.0-complete.jar
#java -jar $LOCATION -Dlanguage=Cpp -listener -visitor -o generated/ -package antlrcpptest TLexer.g4 TParser.g4
java -jar $LOCATION -Dlanguage=Cpp -listener -visitor -o libs/ -package synthtax_antlr SynthtaxLexer.g4 SynthtaxParser.g4
#java -jar $LOCATION -Dlanguage=Cpp -o generated/ Synthtax.g4 
