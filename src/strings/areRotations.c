//Check if two strings are rotations of each other
#include<string.h>
#include "strings.h"

#define true 1
#define false 0

int areRotations(char *str1, char *str2)
{
    int i = 0, j = 0;
    if(str1 == str2)
        return true;
    if(strlen(str1) != strlen(str2))
        return false;

    //Find first character of str1 in str2.
    while((str2[i] != str1[0]) && (str2[i] != '\0'))
            i++;

    //Find first character of str1 in str2.
    if(str2[i] == '\0')
        return false;

    while(str1[j] != '\0') {
        //Till str1 is not traversed, check if every char in str1 matches str.
        if(str1[j++] != str2[i++])
            return false;
	//Come to first position when str2 ends.
        if(str2[i] == '\0')
            i = 0;
    }
    return true;
}
