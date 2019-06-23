#!/bin/bash

usage() {
    echo "./compilation.sh [compile|rm]"
    exit 1
}
files=$(ls *.c| cut -d '.' -f1)

remove_files() {
    rm -v $files 2> /dev/null
}

compile_files() {
    for i in $files;
        do echo "       Compiling $i.c";
        gcc -g ${i}.c -o $i 2> /dev/null;
        ret=$(echo $?);
        if [ $ret -eq 0 ]; then
            echo "[OK]:  Creating executable $i";
        else
            echo "[FAIL]: Compilation failed for $i.c"
        fi ;
    done
}

if [ "$1" = "compile" ]; then
    compile_files
elif [ "$1" = "rm" ]; then
    remove_files
else
    usage
fi
