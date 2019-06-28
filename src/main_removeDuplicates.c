/* Remove duplicate characters from given string */
#include<stdio.h>
#include<string.h>

#include "removeDuplicates.h"

#define ASCII_CHAR_LENGTH 256

char *removeDuplicates(char* str, char newStr[])
{
    int ascii[ASCII_CHAR_LENGTH] = {0}, i, j;
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
