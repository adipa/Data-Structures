/* Remove duplicate characters from given string */
#include "string/strings.h"

char *rmDup(char* str, char newStr[])
{
  int ascii[ASCII_LENGTH] = {0}, i, j;
  for (i = 0, j = 0; str[i] != '\0'; i++) {
    // check if this character already exists in our string.
    if (ascii[(int) str[i]] == 0 || str[i] == ' ')
    {
      // set character flag to true.
      ascii[(int) str[i]] = 1;
      // add character to our new string;
      newStr[j++] = str[i];
    }
  }
  return newStr;
}
