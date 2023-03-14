cmake_minimum_required(VERSION 3.26)
project(synthtax LANGUAGES CXX)

add_executable(synthtax
	src/synthtax.cpp
	src/lexer/lexer.cpp
	src/lexer/lexer.h)
