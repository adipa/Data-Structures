//Check if a given String is Palindrome or not
#include<stdio.h>
#include<string.h>

#include "isPalindrome.h"

#define true 1
#define false 0

int isPalindrome(char* str)
{
    int f=0,l=strlen(str)-1;
    while(f<l)
        if(str[f++]!=str[l--])
            return false;
    return true;
}
