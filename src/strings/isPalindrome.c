//Check if a given String is Palindrome or not
#include "string/strings.h"

int isPalindrome(char *str)
{
    int start = 0, end = strlen(str)-1;
    while(start < end)
        if(str[start++] != str[end--])
            return FALSE;
    return TRUE;
}
