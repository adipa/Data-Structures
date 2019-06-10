/* Remove duplicate characters from given string */

#include<stdio.h>
#include<string.h>

#define ASCII_CHAR_LENGTH 256

char* removeDuplicates(char *str, char newStr[]);
void printUsage(char *fileName);

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
        // check if this caracter already exists in our string.
        if (ascii[str[i]] == 0 || str[i] == ' ')
        {
            // set character flag to true.
            ascii[str[i]] = 1;
            // add character to our new string;
            newStr[j++] = str[i];
        }
    }
    return newStr;
}

void printUsage(char *fileName)
{
    printf("Usage: %s \"<string containing duplicate characters.>\"\n",\
        fileName);
}
