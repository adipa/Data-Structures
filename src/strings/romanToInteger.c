#include"strings.h"

int value(int v)
{
  if(v == 'i' || v == 'I') return 1;
  else if(v == 'v' || v == 'V') return 5;
  else if(v == 'x' || v == 'X') return 10;
  else if(v == 'l' || v == 'L') return 50;
  else if(v == 'c' || v == 'C') return 100;
  else if(v == 'd' || v == 'D') return 500;
  else if(v == 'm' || v == 'M') return 1000;
  else
    return -1;
}

int convert(char *str)
{
  int v = 0, i = 0;
  while(str[i] != '\0') {
    if(value(str[i]) < value(str[i+1]))
      v= v - value(str[i]);
    else
      v = v + value(str[i]);
    i++;
  }
  return v;
}
