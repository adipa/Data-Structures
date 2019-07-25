//Check if two strings are anagrams of each other

#include "strings.h"

#define ASCII_LENGTH 256
#define true 1
#define false 0

int areAnagrams(char *str1, char *str2)
{
  int i, ascii_array[ASCII_LENGTH] = {0};
  for(i = 0; (str1[i] != '\0') || (str2[i] != '\0'); i++) {
    //Increment the value at the character index by 1
    ascii_array[(int)str1[i]] += 1;
    //Decrement the value at the character index by 1.
    ascii_array[(int)str2[i]] -= 1;
  }
  //0 value at index indicates equal character count in both the strings.
  for(i = 0; i < ASCII_LENGTH; i++) {
    if(ascii_array[i] != 0)
      return false;
  }
  return true;
}
