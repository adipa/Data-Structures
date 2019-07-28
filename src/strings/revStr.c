#include "string/strings.h"

void revStr(char *str, int start, int end)
{
  if (end <= 0 || start >= end)
    return;

  *(str + start) ^= *(str + end);
  *(str + end) ^= *(str + start);
  *(str + start) ^= *(str + end);

  revStr(str, start + 1, end - 1);
}
