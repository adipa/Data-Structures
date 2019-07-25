#include<string.h>
#include "strings.h"

#define ASCII_CHARACTER_LENGTH 256

int main(int argc, char *argv[])
{
  if(argc < 2)
  {
    usage(argv[0]);
  }
  int len = strlen(argv[2]);
  if(!strcmp(argv[1],"one"))
  {
    int maxcount[ASCII_CHARACTER_LENGTH] = {0}, size, i;
    int duplicates[ASCII_CHARACTER_LENGTH] = {0};
    char nonDuplicates[ASCII_CHARACTER_LENGTH] = {'\0'};
    char c;

    size = maxOccuringChar(argv[2], maxcount);
    printf("Max occuring character(s): ");
    for(i = 0; i <= size; i++) {
      printf("'%c' ", (char) maxcount[i]);
    }

    size = printDuplicates(argv[2], duplicates);
    printf("\nDuplicate characters from string are: ");
    for(i = 0; i <= size; i++) {
      printf("'%d' ",(char) duplicates[i]);
    }

    c = firstNonRepeatingChar(argv[2]);
    if(c == '\0')
      printf("No non repeating character.\n");
    else
      printf("First non repeating character: %c\n", c);

    if(isPalindrome(argv[2]))
      printf("%s is a palindrome\n", argv[2]);
    else
      printf("%s is not a palindrome\n", argv[2]);
    
    printf("Length of longest palindrome: %d\n", longestPalindrome(argv[2]));
  }
  
  else if(argv[1] == 'Op2')
  {
    printf("\nReversed String: "); 
    reverseString(argv[2], 0, len - 1);

    printf("\n%s", reverseStringWORecursion(argv[2]));
  }

  else if(argv[1] == 'Op3')
  {
    printf("\nPermutations:\n");
    permuteString(argv[2], 0, len - 1);
  }

  else if(argv[1] == 'Op4')
    convert(argv[2]);

  else if(argv[1] == 'Op5')
  {
    if(areAnagrams(argv[2], argv[3]))
    {  
      printf("\nStrings are anagrams of each other.");
      if(areRotations(argv[2], argv[3]))
	printf("\nStrings are rotations of each other.");
      else 
	printf("\nStrings are not rotations of each other.");
    }
    else 
      printf("\nStrings are not anagrams of each other.");
  }

  else if(argv[1] == 'Op6')
  {
    printf("\nNumber of words: %d\n", countWords(argv[2]));
    
    reverseWords(argv[2]);
  }
  else if(argv[1] == 'Op7')
    stringToInteger(argv[2]);
}
