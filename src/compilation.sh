#!/bin/bash

files=$(ls *.c| cut -d '.' -f1)
rm -v $files 2> /dev/null
for i in $files;
    do echo "       Compiling $i.c";
    gcc -g ${i}.c -o $i 2> /dev/null;
    ret=$(echo $?);
    if [ $ret -eq 0 ]; then
        echo "[OK]:  Creating executable $i";
    else
        echo "[FAIL]: Compilation failed for $i.c"
    fi ;
    sleep 3;
done
