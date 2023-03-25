# Synthtax ( :construction: under construction :construction: )

Synthtax is a simple dynamically typed, imperative music programming language.

## Idea

A language that allows users to write their own sounds, and supports loops, conditionals, etc. like Chuck ([github.com/chuck](https://github.com/ccrma/chuck)), BUT much simpler.

See [Synthtax examples](test/)

## Resources

### Note: will write lexer and parser from scratch if have time :) Use ANTLR for now

1. [Antlr4 for C++ blog](https://beyondtheloop.dev/Antlr-cpp-cmake/)
2. [lab.antlr.org](http://lab.antlr.org/)
3. [Getting Started with ANTLR in C++](https://tomassetti.me/getting-started-antlr-cpp/)
4. [Demo application for the ANTLR4 C++ target](https://github.com/antlr/antlr4/tree/master/runtime/Cpp/demo)

## How to run

1. `./generate.sh` : generate lexer, parser, visitor classes
2. `cmake -S ./ -B build` : create build
3. `cd build; make`

## Reference

1. [github.com/antlr/antlr4/tree/master/runtime/Cpp/cmake](https://github.com/antlr/antlr4/tree/master/runtime/Cpp/cmake): build files for many platforms

## TODO

1. Grammmar file (fix bug empty string)
2. See what ANTLR4 generates for the AST
3. Write semantic checks
4. IR or generate a C++ file? because I need `RTAudio` library to play sound
