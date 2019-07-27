#include "strings.h"

#define ASCII_CHARACTER_LENGTH 256

int main(int argc, char *argv[])
{
  if(argc < 2)
  {
    usage(argv[0]);
  }
  else if(argc==2)
    printf("Enter correct option and input string(s)");
  if(!strcmp(argv[1],"maxchar"))
  {
    int maxcount[ASCII_CHARACTER_LENGTH] = {0}, size, i;
    size = maxOccuringChar(argv[1], maxcount);
    printf("Max occuring character(s): ");
    for(i = 0; i <= size; i++) {
      printf("'%c' ", (char) maxcount[i]);
    }
  }
  else if(!strcmp(argv[1],"prdup"))
  {
    int duplicates[ASCII_CHARACTER_LENGTH] = {0}, size, i;
    size = printDuplicates(argv[1], duplicates);
    printf("\nDuplicate characters from string are: ");
    for(i = 0; i <= size; i++) {
      printf("'%d' ",(char) duplicates[i]);
    }
  }
  else if(!strcmp(argv[1],"rmdup"))
  {
    char nonDuplicates[ASCII_CHARACTER_LENGTH] = {'\0'};
    printf("String after removing duplicates: %s\n", removeDuplicates(argv[1], nonDuplicates));
  }
  else if(!strcmp(argv[1],"nonrepeat"))
  {
    char c = firstNonRepeatingChar(argv[1]);
    if(c == '\0')
      printf("No non repeating character.\n");
    else
      printf("First non repeating character: %c\n", c);
  }
  else if(!strcmp(argv[1],"pal"))
  {
    if(isPalindrome(argv[1]))
      printf("%s is a palindrome\n", argv[1]);
    else
      printf("%s is not a palindrome\n", argv[1]);
  }

  else //if(argc == 3)
  {
    if(argc == 3)
      printf("Two strings required");
    else
    {
    if(areAnagrams(argv[1], argv[2]))
      printf("Strings are anagrams.\n");
    else
      printf("Strings are not anagrams.\n");
    }
  }
  return 0;
}
