#!/bin/sh

set -eu

URL=${LIBGRAPHQLPARSER_URL:-"https://github.com/graphql/libgraphqlparser/archive/master.tar.gz"}

# Build libgraphqlparser
mkdir -p /data/libgraphqlparser
curl -sSL ${URL} \
  | tar -v -C /data/libgraphqlparser -xz --strip-components=1 \
  && cd /data/libgraphqlparser \
  && cmake . \
  && make \
  && make install
