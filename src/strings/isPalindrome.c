//Check if a given String is Palindrome or not
#include "string.h"

#define TRUE 1
#define FALSE 0

int isPalindrome(char *str)
{
    int start = 0, end = strlen(str)-1;
    while(start < end)
        if(str[start++] != str[end--])
            return FALSE;
    return TRUE;
}
