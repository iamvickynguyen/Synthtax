CMAKE_MINIMUM_REQUIRED(VERSION 3.16.3 FATAL_ERROR)

project(synthtax)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(CMAKE_CXX_STANDARD 17)

# Use clang++ compiler
set(CMAKE_CXX_COMPILER "clang++")

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)

# add external build for antlrcpp
include(ExternalAntlr4Cpp)

# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
set(ANTLR_EXECUTABLE tool/antlr-4.12.0-complete.jar)

# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)

# Call macro to add lexer and grammar to your build dependencies.
antlr_target(SynthtaxLexer SynthtaxLexer.g4 LEXER
             PACKAGE synthtax_antlr)
					 antlr_target(SynthtaxParser SynthtaxParser.g4 PARSER
             PACKAGE synthtax_antlr
             DEPENDS_ANTLR SynthtaxLexer
             COMPILE_FLAGS -lib ${ANTLR_SynthtaxLexer_OUTPUT_DIR})

# include generated files in project environment
include_directories(${ANTLR_SynthtaxLexer_OUTPUT_DIR})
include_directories(${ANTLR_SynthtaxParser_OUTPUT_DIR})

include_directories(${PROJECT_SOURCE_DIR}/include)

# Find LLVM package and get compilation flags and libraries
find_package(LLVM REQUIRED CONFIG)

# LLVM wrapper
include(CMake/LLVM.cmake)

# add generated grammar to synthtax binary target
add_executable(synthtax Synthtax.cpp
               ${ANTLR_SynthtaxLexer_CXX_OUTPUTS}
               ${ANTLR_SynthtaxParser_CXX_OUTPUTS})

# Set the required compilation flags and libraries
execute_process(COMMAND ${LLVM_CONFIG_PATH} --cxxflags OUTPUT_VARIABLE LLVM_CXX_FLAGS OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND ${LLVM_CONFIG_PATH} --ldflags OUTPUT_VARIABLE LLVM_LD_FLAGS OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND ${LLVM_CONFIG_PATH} --libs core OUTPUT_VARIABLE LLVM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)

target_link_libraries(synthtax PRIVATE antlr4_static LLVM sndfile ncurses)