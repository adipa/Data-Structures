//Check if two strings are rotations of each other
#include "string/strings.h"

int areRotations(char *fstStr, char *sndStr)
{
    int i = 0, j = 0;
    if(fstStr == sndStr)
        return TRUE;
    if(strlen(fstStr) != strlen(sndStr))
        return FALSE;

    //Find first character of fstStr in sndStr.
    while((sndStr[i] != fstStr[0]) && (sndStr[i] != '\0'))
            i++;

    //Find first character of fstStr in sndStr.
    if(sndStr[i] == '\0')
        return FALSE;

    while(fstStr[j] != '\0') {
        //Till fstStr is not traversed, check if every char in fstStr matches str.
        if(fstStr[j++] != sndStr[i++])
            return FALSE;
	//Come to first position when sndStr ends.
        if(sndStr[i] == '\0')
            i = 0;
    }
    return TRUE;
}
