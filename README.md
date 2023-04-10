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
3. `cd build; make` : compile and link
4. `./synthtax <filename>` : run the file

## Reference

1. [github.com/antlr/antlr4/tree/master/runtime/Cpp/cmake](https://github.com/antlr/antlr4/tree/master/runtime/Cpp/cmake): build files for many platforms

## TODO

1. Implement AST. Print C++ syntax
2. Write functions to generate Osicalltors and play sound with `RTAudio`
3. Documentation

## Roles

| Members | Roles |
| --- | --- |
| Vicky | - Set up github repo </br>- Designed the language </br>- Researched tool for creating a programming language (ANTLR) and how to generate C++ code (C++ runtime) </br>- Wrote and debugged ANTLR grammar :tired_face: </br>- Integrated C++ runtime </br>- Wrote project report </br>- Output to C++ code with the Visitor (in progress) |
| Skylar | - Wrote project report </br>- Designed and created the functions </br>- Researched audio output through different waves (sine, triangle, sawtooth, square) for C++ </br>-Output those waves to the speakers of user for C++ </br>-Researched PortAudio</br>-Figured out how ADSR envelopes and applying them can be done more optimally in C++</br>-More Defining of the language's syntax and grammar (in progress) </br>-More Developing a library of musical functions and algorithms (in progress)|
