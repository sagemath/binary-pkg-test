#This line defines the name of the output tarball
AC_INIT([binary-pkg-test],[0.0])
#this line defines what compilation flags will be used
AM_INIT_AUTOMAKE

#this line defines what libraries should be used during building
AC_CHECK_LIB([pthread],[pthread_create])
AC_CHECK_LIB([pthread],[pthread_join])
AC_PROG_CXX
LT_INIT()

#This line defines where Makefiles are stored for projects and sources
AC_CONFIG_MACRO_DIRS([m4])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
