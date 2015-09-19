# c-graphqlparser

This is a go-gettable version of the [libgraphqlparser](https://github.com/graphql/libgraphqlparser) C library for use in Go code that needs to link against the libgraphqlparser C library but wants to integrate with `go get` and `go build`.

To use in your project you need to import the package and set appropriate cgo flag directives:

```
import _ "github.com/tecbot/c-graphqlparser"

// #cgo CXXFLAGS: -std=c++11
// #cgo CPPFLAGS: -I <relative-path>/c-graphqlparser/internal
// #cgo darwin LDFLAGS: -Wl,-undefined -Wl,dynamic_lookup
// #cgo !darwin LDFLAGS: -Wl,-unresolved-symbols=ignore-all
import "C"
```

To update the upstream version of libgraphqlparser you'll want to run `./import.sh`.
