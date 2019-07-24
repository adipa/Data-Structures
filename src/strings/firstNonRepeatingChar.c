//find the first non-repeating character in a given String
#include"firstNonRepeatingChar.h"

char firstNonRepeatingChar(char *str)
{
  int i = 0, j = 0;
  while(str[i] != '\0')
  {
    if((str[i] == str[j]) && (i != j))
    {
      i++;
      j = 0;
    }
    else
      j++;
    if(str[j] == '\0')
      break;
  }
  return str[i];
}
