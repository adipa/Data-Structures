#include "string.h"
char* removeChar(char* str,char c)
{
    if (!str)
        return NULL;
    int i, j, len = strlen(str);
    char *newString = (char *) malloc(len);
    for (i = 0, j = 0; i < len; i++) {
        if (c != str[i])
            newString[j++] = str[i];
    }
    return newString;
}
