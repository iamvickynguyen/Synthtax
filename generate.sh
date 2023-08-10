#!/bin/bash
set -o errexit

LOCATION=tool/antlr-4.12.0-complete.jar
java -jar $LOCATION -Dlanguage=Cpp -no-listener -visitor -o libs/ -package synthtax_antlr SynthtaxLexer.g4 SynthtaxParser.g4
