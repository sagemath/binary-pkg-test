#include <iostream>
#include <string>
#include <cstdlib>


// Examples of hardcoded strings that are sometimes found in binaries
namespace {
  // Filename as null-terminated string
  const static std::string lib_root = ROOT_PATH;
  
  // Entry in a search path with IFS
  const static std::string lib_root_with_separator = "/foo:" ROOT_PATH ":/bar";
  
  // Install prefix
  const static std::string lib_prefix = PREFIX_PATH;
  
  // Entry in a search path with IFS
  const static std::string lib_prefix_with_separator = "/foo:" PREFIX_PATH ":/bar";
}


// Root path as null-terminated string
std::string get_path_root() {
  return lib_root;
}


// Entry in a search path with IFS
std::string get_path_root_with_separator() {
  return lib_root_with_separator;
}


// Prefix path as null-terminated string
std::string get_path_prefix() {
  return lib_prefix;
}


// Prefix in a search path with IFS
std::string get_path_prefix_with_separator() {
  return lib_prefix_with_separator;
}


