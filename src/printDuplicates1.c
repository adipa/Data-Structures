/* Print duplicate characters from string */
#include "printDuplicates.h"

#define ASCII_CHARACTER_LENGTH 256 

char *printDuplicates(char *str, char newStr[])
{
    int ascii[ASCII_CHARACTER_LENGTH] = {0}, i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
      ascii[(int) str[i]] += 1;
      if (ascii[(int) str[i]] == 2 && str[i] != ' ')
            newStr[j++] = str[i];
    }

    return newStr;
}