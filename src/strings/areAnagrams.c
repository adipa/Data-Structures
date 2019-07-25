//Check if two strings are anagrams of each other
#include "string/strings.h"

int areAnagrams(char *fstStr, char *sndStr)
{
  int i, ascii_array[ASCII_LENGTH] = {0};
  for(i = 0; (fstStr[i] != '\0') || (sndStr[i] != '\0'); i++) {
    //Increment the value at the character index by 1
    ascii_array[(int)fstStr[i]] += 1;
    //Decrement the value at the character index by 1.
    ascii_array[(int)sndStr[i]] -= 1;
  }
  //0 value at index indicates equal character count in both the strings.
  for(i = 0; i < ASCII_LENGTH; i++) {
    if(ascii_array[i] != 0)
      return FALSE;
  }
  return TRUE;
}
