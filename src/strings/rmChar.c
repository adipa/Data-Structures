#include "string/strings.h"

char *rmChar(char *str, char c)
{
  int i = 0, k;
  while(str[i] != '\0'){
    if(str[i] == c)
    {
      k = i++;
      while(str[k] != '\0') {
	str[k] = str[k+1];
	k += 1;
      }
      i = 0;
    }
    else i++;
  }
  return str;
}
