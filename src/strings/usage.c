#include "helperFunctions.h"

void usage(char *filename)
{
  printf("Usage %s <Options> <String1> <String2(optional)> \
  \nOptions: \
  \n\t maxchar \n\t\t-Maximum Occuring Character \n\t prdup \n\t\t-Print Duplicates \
  \n\t rmdup \n\t\t-Remove Duplicates from string \n\t pal \n\t\t-Check for Palindrome \
  \n\t anagram \n\t\t-Check for Anagram\n ", filename);
}
