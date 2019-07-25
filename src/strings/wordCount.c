#include "string.h"

int words(char* str)
{
    if (!str)
        return 0;
    int wordCount = 0, i = 0;
    while(i <= strlen(str)) {
        if(str[i] == ' ' || (str[i] == '-' || str[i] == '\0'))
            wordCount++;
        i++;
    }
    return wordCount;
}
