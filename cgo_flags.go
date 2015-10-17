// Package graphqlparser uses the cgo compilation facilities to build the
// GraphQL C++ parser.
package graphqlparser

// #cgo CPPFLAGS: -Iinternal
// #cgo CXXFLAGS: -std=c++11 -fPIC -fno-omit-frame-pointer -momit-leaf-frame-pointer
// #cgo CXXFLAGS: -W -Wextra -Wno-deprecated-register -Wno-unused-parameter -Wno-sign-compare -Wno-backslash-newline-escape
import "C"
