#!/run/current-system/sw/bin/bash

aclocal && libtoolize && autoconf && autoheader && automake --add-missing
