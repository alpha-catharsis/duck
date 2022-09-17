# Initial tasks
AC_PREREQ([2.71])
AC_INIT([duck],[0.1.0],[alpha.catharsis@gmail.com])
AC_CONFIG_SRCDIR([src/quack/main.c])
AC_CONFIG_HEADERS([src/config.h])
AC_CONFIG_MACRO_DIRS([m4])
AM_INIT_AUTOMAKE([foreign subdir-objects])
LT_INIT

# Checks for programs.
AC_PROG_CC
AC_PROG_AWK
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_PROG_MKDIR_P

# Use the C language and compiler for the following checks
AC_LANG([C])

# Setting POSIX version
AC_DEFINE([_POSIX_C_SOURCE], [200809L], [Define the POSIX version])

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

# Defines

# Final tasks
AC_CONFIG_FILES([Makefile
                 src/Makefile
                 src/libduck/Makefile
                 src/quack/Makefile
                ])
AC_OUTPUT
