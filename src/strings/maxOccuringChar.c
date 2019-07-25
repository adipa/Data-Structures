#include "string/strings.h"

int maxOccuringChar(char *str, int maxCount[])
{
  int i, j, ascii_array[ASCII_LENGTH] = {0};
  for (i = 0; str[i] != '\0'; i++) {
    //count occurrence of each character by its ASCII value
    ascii_array[(int) str[i]] += 1;
  }
  for (i = 1, j = 0; i < ASCII_LENGTH; i++) {
    //calculate ASCII value of character with max count
    if ((ascii_array[i] > ascii_array[maxCount[j]]) && (i != 32))
    {
      j = 0;
      maxCount[j] = i;
    }
    // If any charater has same number of occurences as max occuring character
    if (ascii_array[i] == ascii_array[maxCount[j]])
    {
      if (i != maxCount[j])
	maxCount[++j] = i;
    }
  }
  return j;
}
