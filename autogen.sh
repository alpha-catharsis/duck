#!/usr/bin/env bash

aclocal && libtoolize && aclocal && autoconf && autoheader && automake --add-missing
