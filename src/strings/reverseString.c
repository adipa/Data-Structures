#include "string.h"

void reverseString(char *str, int start, int end)
{
  int len = strlen(str);
  if (len == 0 || len == 1 || start >= end)
    return;

  *(str + start) ^= *(str + end);
  *(str + end) ^= *(str + start);
  *(str + start) ^= *(str + end);

  reverseString(str, start + 1, end - 1);
}
