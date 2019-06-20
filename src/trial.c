#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int i, *arr = (int *)malloc(sizeof(int) * 4);
    for (i = 0; i < 4; i++)
        arr[i] = i;
    for (i = 0; i < 4; i++) {
        printf("(%p => %d) ",arr++, *(arr));
    }
    printf("\n");
    free(arr);
    return 0;
}

//$ gcc trial.c
//$ ./a.out
// After running ./a.out I am getting following error can you guess what is wrong with code?
// Please push the code after you append solution to this file.
// Your solution should contain Explaination about Error and how to resolve it.
//(0x21f0010 => 0) (0x21f0014 => 1) (0x21f0018 => 2) (0x21f001c => 3)
//*** Error in `./a.out': munmap_chunk(): invalid pointer: 0x00000000021f0020 ***
//======= Backtrace: =========
///lib64/libc.so.6(+0x7f5d4)[0x7f8eadd3a5d4]
//./a.out[0x40068c]
///lib64/libc.so.6(__libc_start_main+0xf5)[0x7f8eadcdd3d5]
//./a.out[0x400539]
//======= Memory map: ========
//00400000-00401000 r-xp 00000000 08:01 395216                             /home/vagrant/cpp/aditiString/src/a.out
//00600000-00601000 r--p 00000000 08:01 395216                             /home/vagrant/cpp/aditiString/src/a.out
//00601000-00602000 rw-p 00001000 08:01 395216                             /home/vagrant/cpp/aditiString/src/a.out
//021f0000-02211000 rw-p 00000000 00:00 0                                  [heap]
//7f8eadaa5000-7f8eadaba000 r-xp 00000000 08:01 940969                     /usr/lib64/libgcc_s-4.8.5-20150702.so.1
//7f8eadaba000-7f8eadcb9000 ---p 00015000 08:01 940969                     /usr/lib64/libgcc_s-4.8.5-20150702.so.1
//7f8eadcb9000-7f8eadcba000 r--p 00014000 08:01 940969                     /usr/lib64/libgcc_s-4.8.5-20150702.so.1
//7f8eadcba000-7f8eadcbb000 rw-p 00015000 08:01 940969                     /usr/lib64/libgcc_s-4.8.5-20150702.so.1
//7f8eadcbb000-7f8eade7d000 r-xp 00000000 08:01 920061                     /usr/lib64/libc-2.17.so
//7f8eade7d000-7f8eae07d000 ---p 001c2000 08:01 920061                     /usr/lib64/libc-2.17.so
//7f8eae07d000-7f8eae081000 r--p 001c2000 08:01 920061                     /usr/lib64/libc-2.17.so
//7f8eae081000-7f8eae083000 rw-p 001c6000 08:01 920061                     /usr/lib64/libc-2.17.so
//7f8eae083000-7f8eae088000 rw-p 00000000 00:00 0
//7f8eae088000-7f8eae0aa000 r-xp 00000000 08:01 940986                     /usr/lib64/ld-2.17.so
//7f8eae29b000-7f8eae29e000 rw-p 00000000 00:00 0
//7f8eae2a6000-7f8eae2a9000 rw-p 00000000 00:00 0
//7f8eae2a9000-7f8eae2aa000 r--p 00021000 08:01 940986                     /usr/lib64/ld-2.17.so
//7f8eae2aa000-7f8eae2ab000 rw-p 00022000 08:01 940986                     /usr/lib64/ld-2.17.so
//7f8eae2ab000-7f8eae2ac000 rw-p 00000000 00:00 0
//7ffd39e7c000-7ffd39e9d000 rw-p 00000000 00:00 0                          [stack]
//7ffd39ed3000-7ffd39ed5000 r-xp 00000000 00:00 0                          [vdso]
//ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
//Aborted
//
