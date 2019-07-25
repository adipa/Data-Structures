/* Print duplicate characters from string */
#include "string/strings.h"

int printDuplicates(char *str, int duplicates[])
{
  int ascii[ASCII_LENGTH] = {0}, i, j;
  for (i = 0, j = 0; str[i] != '\0'; i++) {
    ascii[(int) str[i]] += 1;
    if (ascii[(int) str[i]] == 2 && str[i] != ' ')
      duplicates[j++] = str[i];
  }
  return j - 1;
}
