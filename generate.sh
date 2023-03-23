#!/bin/bash
set -o errexit

LOCATION=antlr-4.12.0-complete.jar
#java -jar $LOCATION -Dlanguage=Cpp -listener -visitor -o generated/ -package antlrcpptest TLexer.g4 TParser.g4
#java -jar $LOCATION -Dlanguage=Cpp -o generated/ Synthtax.g4 
java -jar $LOCATION -Dlanguage=Cpp -no-listener -visitor -o libs/ Synthtax.g4
