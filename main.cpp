#include <iostream>
#include <string>
#include <cstdlib>
#include "library.h"


// Examples of hardcoded strings that are sometimes found in binaries

// Filename as null-terminated string
const static std::string root = ROOT_PATH;

// Entry in a search path with IFS
const static std::string root_with_separator = "/foo:" ROOT_PATH ":/bar";

// Install prefix
const static std::string prefix = PREFIX_PATH;

// Entry in a search path with IFS
const static std::string prefix_with_separator = "/foo:" PREFIX_PATH ":/bar";



int main(void)
{
  using std::cout;
  using std::endl;
  cout << "Root path: "
       << root << endl;
  cout << "Root path with separators: "
       << root_with_separator << endl;
  cout << "Root path from shared library: "
       << get_path_root() << endl;
  cout << "Root path with separators from shared library: "
       << get_path_root_with_separator() << endl;
  cout << "Prefix path: "
       << prefix << endl;
  cout << "Prefix path with separators: "
       << prefix_with_separator << endl;
  cout << "Prefix path from shared library: "
       << get_path_prefix() << endl;
  cout << "Prefix path with separators from shared library: "
       << get_path_prefix_with_separator() << endl;

  return EXIT_SUCCESS;
}
       
