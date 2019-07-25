#include<stdio.h>
#include "strings.h"

void swap(char *i, char *j)
{
  char temp;
  temp = *i;
  *i = *j;
  *j = temp;
}

void permuteString(char *str, int start, int end)
{
  int i;
  if(start == end)
    printf("%s\n", str);
  else
  {
    for(i = start; i <= end; i++) {
      //dont permute if chars are same to avoid repetition
      if((*(str + start) != *(str + i)) || (i == start))
      {
	swap((str + start), (str + i));
	permuteString(str, start + 1, end);
	swap((str + start), (str + i));
      }
    }
  }
}
