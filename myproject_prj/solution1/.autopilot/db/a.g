#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/YL_HUANG/7_15/8filter/array_of_stream/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
