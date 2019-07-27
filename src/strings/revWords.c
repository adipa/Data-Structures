#include "string/strings.h"

void revWords(char *str)
{
  int i = 0;
  //traverse till you reach a space or the end of the string
  while(str[i] != ' ' && str[i] != '\0')
    i += 1;
  //last word, print first
  if(str[i] == '\0')
  {
    printf("%s ", str);
    return;
  }
    //recursively call the function by passing the address of the next word (first letter)
  revWords(&str[i+1]);
  /*replace space by null to print the word as a string and to avoid printing the previous words
   * for example,
   * a b c
   * => c b a
   * if null char not appended
   * => a b a c b a
   */
  str[i] = '\0';
  printf("%s ", str);
}
