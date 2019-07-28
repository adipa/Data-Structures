#include "string/strings.h"

char *revStrIterative(char *str)
{
  int start = 0, end = strlen(str) - 1;
  while(start < end) {
    str[start] ^= str[end];
    str[end]   ^= str[start];
    str[start++] ^= str[end--];
  }
  return str;
}
