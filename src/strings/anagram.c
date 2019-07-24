//check if two strings are anagrams of each other
#include "string.h"

#define ASCII_LENGTH 256
#define FALSE 0
#define TRUE 1

int areAnagrams(char *src, char *dest)
{
    int i, ascii_array[ASCII_LENGTH] = {0};
    if (strlen(src) != strlen(dest))
        return FALSE;
    for(i = 0; src[i] != '\0'; i++) {
        //increment the value at the character index by 1
      ascii_array[(int)src[i]] += 1;
        //decrement the value at the character index by 1
      ascii_array[(int)dest[i]] -= 1;
    }
    //0 value at index indicates equal character count in both the strings
    for(i = 0; i < ASCII_LENGTH; i++) {
        if(ascii_array[i] != 0)
            return FALSE;
    }
    return TRUE;
}
