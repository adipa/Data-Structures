#include "string/strings.h"

int countWords(char* str)
{
  int i=0,c=1;
  while(str[i]!='\0'){
    if(str[i++]==' ')
      c++;
  }
  return c;
}
