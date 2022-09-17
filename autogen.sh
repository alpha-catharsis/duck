#!/run/current-system/sw/bin/bash

aclocal && libtoolize && aclocal && autoconf && autoheader && automake --add-missing
