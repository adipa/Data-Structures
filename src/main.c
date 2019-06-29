#include<stdio.h>

#include"areAnagrams.h"

#include"areRotations.h"

#include"firstNonRepeatingChar.h"

#include"isPalindrome.h"

#include"maxOccuringChar.h"

#include"printDuplicates.h"

#include"removeDuplicates.h"

#include"removeDuplicatesFrom2Strings.h"

#define ASCII_CHARACTER_LENGTH 256

int main(int argc, char *argv[])
{
  if(argc==2)
  {
    int maxcount[ASCII_CHARACTER_LENGTH] = {0}, size, i = 0;
    char duplicates[ASCII_CHARACTER_LENGTH] = {'\0'}, nonDuplicates[ASCII_CHARACTER_LENGTH] = {'\0'};
    char c = firstNonRepeatingChar(argv[1]);
    size = maxOccuringChar(argv[1], maxcount);
    printf("Max occuring character(s): ");
    for(i =0; i <= size; i++) {
      printf("%c ", (char)maxcount[i]);
    }
    printf("\nDuplicate characters from string are: %s\n", printDuplicates(argv[1], duplicates));
    printf("String after removing duplicates: %s\n", removeDuplicates(argv[1], nonDuplicates));
    if(c == '\0')
      printf("No non repeating character.\n");
    else
      printf("First non repeating character: %c\n", c);
    if(isPalindrome(argv[1]))
      printf("%s is a palindrome\n", argv[1]);
    else
      printf("%s is not a palindrome\n", argv[1]);
  }
  else if(argc==3)
  {
    if(areAnagrams(argv[1], argv[2]))
      printf("Strings are anagrams.\n");
    else
      printf("Strings are not anagrams.\n");
  }
    return 0;
}
