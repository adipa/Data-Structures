#include "helperFunctions.h"

void usage(char *filename)
{
  printf("Usage %s <Options> <String1> <String2(optional)>", filename);
  printf("\n<1> <string> \
  \n\t Maximum occuring character  \
  \n\t Print duplicates  \
  \n\t Remove duplicates  \
  \n\t First unique character  \
  \n\t Check if palindrome  \
  \n\t Longest Palindrome  \
  \n<2> <string>  \
  \n\t Reverse string  \
  \n\t Reverse string (W/O Recursion)  \
  \n<3> <string>  \
  \n\t Permutations of string  \
  \n<4> <string>  \
  \n\t Covert Roman number to Integer \
  \n<5> <string1> <string2> \
  \n\t Are strings anagrams? \
  \n\t Are strings rotations? \
  \n<6> <string> \
  \n\t Count words \
  \n\t Reverse words \
  \n<7> <string> \
  \n\t String to integer\n");
}
