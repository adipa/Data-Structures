/* Print duplicate characters from string */
#include<stdio.h>
#include<string.h>

#include "printUsage.h"

#define ASCII_CHARACTER_LENGTH 256

char *printDuplicates(char *str, char newStr[]);

int main(int argc, char *argv[])
{
    char duplicates[ASCII_CHARACTER_LENGTH] = {'\0'};
    if(argc < 2)
    {
        printUsage(argv[0]);
        return 1;
    }
    printf("Duplicates character from string are: \"%s\"\n",\
        printDuplicates(argv[1], duplicates));
}

char *printDuplicates(char *str, char newStr[])
{
    int ascii[ASCII_CHARACTER_LENGTH] = {0}, i, j;

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        ascii[str[i]] += 1;
        if (ascii[str[i]] == 2 && str[i] != ' ')
            newStr[j++] = str[i];
    }

    return newStr;
}
