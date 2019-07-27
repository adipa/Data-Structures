#include "string/strings.h"

int stringToInteger(char *str)
{
  int i, d = 1, value = 0;
  for(i = strlen(str) - 1; i > 0; i--) {
    //calculate value digit by digit starting from the units place
    value = value + (d * (str[i] - 48));
    d = d * 10;
  }
  //positive number
  if(str[0] == '+')
    return value;
  //negative number
  if(str[0] == '-')
    return value * (-1);
  //character is a digit
  return value + (d * (str[0] - 48));
}
