//remove characters from the first String which are present in the second String
#include"string/strings.h"

char* rmDupFromTwoStr(char* fstStr, char* sndStr)
{
  int i = 0,j = 0,k;
  while(sndStr[i] != '\0'){
    //characters match$
    if(sndStr[i] == fstStr[j])
    {
      //start shifting from current match position
      k = j;
      while(fstStr[k] != '\0') {
        fstStr[k] = fstStr[k+1];
        k += 1;
      }
      //restore fstStr index to 0
      j = 0;
    }
    else
      //go to the next char in fstStr if no match
      j++;
    //fstStr checked for one sndStr character, check for next
    if(fstStr[j] == '\0')
    {
      j = 0;
      i++;
    }
  }
  return fstStr;
}
