#!/bin/bash
(
    if [[ ! -d .git ]]; then
        exit; fi
    gtest_url=https://github.com/google/googletest.git
    git submodule add -f $gtest_url tools/googletest
)
(
    if [[ -d tools/googletest/lib ]]; then
        exit; fi
    cd tools/googletest

    line="add_compile_options(-std=c++11)"
    txt=$( cat CMakeLists.txt | grep -v "$line" )
    echo "$line" > CMakeLists.txt
    echo "$txt" >> CMakeLists.txt

    cmake -D GTEST_HAS_PTHREAD=0 .
    make
    echo "$txt" > CMakeLists.txt
)
cmake . && make
./algollection << EOF
132
213121
32313213
41
EOF

