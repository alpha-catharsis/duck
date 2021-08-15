# Initial tasks
AC_PREREQ([2.69])
AC_INIT([duck], [0.1.0], [alpha.catharsis@gmail.com])
AC_CONFIG_SRCDIR([src/duck-server/main.cpp])
AC_CONFIG_HEADERS([src/config.h])
AC_CONFIG_MACRO_DIRS([m4])
AM_INIT_AUTOMAKE([foreign])
LT_INIT

# Checks for programs.
AC_PROG_CXX

# Use the C language and compiler for the following checks
AC_LANG([C++])
AX_CXX_COMPILE_STDCXX([17],[noext],[mandatory])

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

# Defines

# Final tasks
AC_CONFIG_FILES([Makefile
                 src/Makefile
                 src/duck-base/Makefile
                 src/duck-cli/Makefile
                 src/duck-server/Makefile
                ])
AC_OUTPUT
