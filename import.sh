#!/usr/bin/env sh

set -eu

URL="https://github.com/graphql/libgraphqlparser/archive/master.tar.gz"

rm -rf *.cpp internal/*
docker run --rm \
  -v $PWD/internal:/data/libgraphqlparser \
  -e LIBGRAPHQLPARSER_URL=$URL \
  tecbot/libgraphqlparser

# apply patches
patch -p1 < includes.patch
patch -p1 < gitignore.patch

# stuff we need to compile.
SOURCES='
Ast.cpp
GraphQLParser.cpp
JsonVisitor.cpp
lexer.cpp
parser.tab.cpp
'

# symlink so cgo compiles them
for file in $SOURCES; do
  ln -sf internal/$file .
done

# stuff we need to compile.
SOURCES='
GraphQLAst.cpp
GraphQLAstNode.cpp
GraphQLAstToJSON.cpp
GraphQLAstVisitor.cpp
GraphQLParser.cpp
'

# symlink so cgo compiles them
for file in $SOURCES; do
  ln -sf internal/c/$file ./c_$file
done
