#include <iostream>
#include <string>
#include <cstdlib>


// Examples of hardcoded strings that are sometimes found in binaries


// Root path as null-terminated string
std::string get_path_root() {
  return std::string(ROOT_PATH);
}


// Entry in a search path with IFS
std::string get_path_root_with_separator() {
  return std::string("/foo:" ROOT_PATH ":/bar");
}


// Prefix path as null-terminated string
std::string get_path_prefix() {
  return std::string(PREFIX_PATH);
}


// Prefix in a search path with IFS
std::string get_path_prefix_with_separator() {
  return std::string("/foo:" PREFIX_PATH ":/bar");
}


