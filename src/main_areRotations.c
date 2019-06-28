//check if two strings are rotations of each other
#include"areRotations.h"

int areRotations(char* str1,char* str2)
{
    int i=0,j=0;
    if(str1==str2)          //strings equal
        return 1 ;
    if(strlen(str1)!=strlen(str2)) //strings not equal
        return 0;
    while(str2[i]!=str1[0] && str2[i]!='\0')  //find first character of str1 in str2
            i++;
    if(str2[i]=='\0')                           //char not found, strings unegual
        return 0;
    while(str1[j]!='\0') {
      //till str1 is not traversed check if every char in str1 matches str
        if(str1[j++]!=str2[i++])
            return 0;
        if(str2[i]=='\0') //come to first position when str2 ends
            i=0;
    }
    return 1;               //strings are rotations of each other
}
