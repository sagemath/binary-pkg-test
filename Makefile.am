AM_CPPFLAGS = -Wall -Werror -DROOT_PATH=\"$(shell pwd)\" -DPREFIX_PATH=\"$(prefix)\"

lib_LTLIBRARIES = libhardcodedpath.la
libhardcodedpath_la_SOURCES = library.cpp

bin_PROGRAMS = main
main_SOURCES = main.cpp
main_LDFLAGS = -lhardcodedpath

