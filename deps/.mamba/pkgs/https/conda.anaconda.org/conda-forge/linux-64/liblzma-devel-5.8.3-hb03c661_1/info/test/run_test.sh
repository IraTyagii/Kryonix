

set -ex



test ! -f ${PREFIX}/lib/liblzma.a
test -f ${PREFIX}/lib/liblzma${SHLIB_EXT}
exit 0
