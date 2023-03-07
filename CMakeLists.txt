cmake_minimum_required(VERSION 3.26)
project(musicpp LANGUAGES CXX)

add_executable(musicpp
	src/musicpp.cpp
	src/lexer/lexer.cpp
	src/lexer/lexer.h)
