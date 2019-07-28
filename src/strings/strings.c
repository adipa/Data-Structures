#include "helperFunctions.h"
#include "string/strings.h"

int main(int argc, char *argv[])
{
  if(argc < 3)
  {
    usage(argv[0]);
    return 0;
  }
  int len = strlen(argv[2]);
  if(!strcmp(argv[1],"1"))
  {
    int maxcount[ASCII_LENGTH] = {0}, size, i;
    int duplicates[ASCII_LENGTH] = {0};
    char nonDuplicates[ASCII_LENGTH] = {'\0'};
    char c;

    size = maxOccuringChar(argv[2], maxcount);
    printf("Max occuring character(s): ");
    for(i = 0; i <= size; i++) {
      printf("'%c' ", (char) maxcount[i]);
    }

    size = printDuplicates(argv[2], duplicates);
    if (size > 0)
        printf("\nDuplicate characters from string are: ");
    for(i = 0; i <= size; i++) {
       printf("'%c' ",(char) duplicates[i]);
    }

    printf("\nAfter removing Duplicates: %s\n", rmDup(argv[2], nonDuplicates));

    c = firstUniqueChar(argv[2]);
    if(c == '\0')
      printf("No unique character.\n");
    else
      printf("First unique character: %c\n", c);

    if(isPalindrome(argv[2]))
      printf("%s is a palindrome\n", argv[2]);
    else
      printf("%s is not a palindrome\n", argv[2]);

    printf("\nLength of longest palindrome: %d\n", longestPalindrome(argv[2]));
  }

  else if(!strcmp(argv[1],"2"))
  {
    revStr(argv[2], 0, len - 1);
    printf ("Reverse String: %s\n", argv[2]);
    printf("Reverse String Iterative: %s\n", revStrIterative(argv[2]));
  }

  else if(!strcmp(argv[1],"3"))
  {
    printf("Permutations:\n");
    permuteString(argv[2], 0, len - 1);
  }

  else if(!strcmp(argv[1],"4"))
    RToIconvert(argv[2]);

  else if(!strcmp(argv[1],"5"))
  {
    if(areAnagrams(argv[2], argv[3]))
    {
      printf("Strings are anagrams of each other.");
      if(areRotations(argv[2], argv[3]))
        printf("\nStrings are rotations of each other.");
      else
        printf("\nStrings are not rotations of each other.");
      printf("After removing duplicates: %s\n", rmDupFromTwoStr(argv[2], argv[3]));
    }
    else
      printf("\nStrings are not anagrams of each other.");
  }

  else if(!strcmp(argv[1],"6"))
  {
    printf("Number of words: %d\n", countWords(argv[2]));

    revWords(argv[2]);
  }
  else //(!strcmp(argv[1],"7"))
    stringToInteger(argv[2]);

  return 0;
}
