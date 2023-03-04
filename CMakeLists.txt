cmake_minimum_required(VERSION 3.26)
project(musicpp LANGUAGES CXX)

add_executable(musicpp src/musicpp.cpp lib/lexer.cpp)
target_include_directories(musicpp PUBLIC include)

