#include<string.h>
#include "strings.h"

char* reverseStringWORecursion(char *str)
{
  int start = 0, end = strlen(str) - 1;
  while(start < end) {
    str[start] = str[start] + str[end];
    str[end]   = str[start] - str[end];
    str[start] = str[start] - str[end];
    start++;
    end--;
  }
  return str;
}
