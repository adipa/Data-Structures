#include<stdio.h>

#include"maxOccuringChar.h"
#include"printDuplicates.h"
#include"removeDuplicates.h"
#include"areAnagrams.h"
#include"isPalindrome.h"

#define ASCII_CHARACTER_LENGTH 256
#define MAX_SIZE 20

int main(int argc, char *argv[])
{
  if(argc==1)
  {
    int maxcount[ASCII_CHARACTER_LENGTH] = {0}, size, i = 0;
    char duplicates[ASCII_CHARACTER_LENGTH] = {'\0'}, nonDuplicates[ASCII_CHARACTER_LENGTH] = {'\0'};
    size = maxOccuringChar(argv[1], maxcount);
    printf("Max occuring character(s): ");
    for(i =0; i < size; i++) {
      printf("%c ", (char)maxcount[i]);
    }
    printf("Duplicate characters from string are: %s\n", printDuplicates(argv[1], duplicates));
    printf("String after removing duplicates: %s\n", removeDuplicates(argv[1], nonDuplicates));
    if(isPalindrome(argv[1]))
      printf("%s is a palindrome", argv[1]);
    else
      printf("%s is not a palindrome", argv[1]);
  }
  else //(argc == 2)
  {
    if(areAnagrams(argv[1], argv[2]))
      printf("Strings are anagrams.");
    else
      printf("Strings are not anagrams.");
  }
    return 0;
}
