/* Remove duplicate characters from given string */

#include<stdio.h>
#include<string.h>

#include "printUsage.h"

#define ASCII_CHAR_LENGTH 256

char* removeDuplicates(char *str, char newStr[]);

int main(int argc, char *argv[])
{
    char nonDuplicateStr[ASCII_CHAR_LENGTH] = {'\0'};

    if (argc < 2) {
        printUsage(argv[0]);
        return 1;
    }
    printf("String after removing duplicate character is: \"%s\"\n",\
        removeDuplicates(argv[1], nonDuplicateStr));
    return 0;
}

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
