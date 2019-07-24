#include<stdio.h>
#include<string.h>

#define MAX_SIZE 20

void reverseString(char *str, int start, int end);

int main()
{
  char str[MAX_SIZE];
  int len;
  char c;

  // scan input string. flush newline character from next buffer.
  scanf("%[^\n]s", str);
  scanf("%c",&c);

  //length of string including null
  len = strlen(str);
  reverseString(str, 0, len - 1);
  printf("Reverse of string: %s\n",str);
  return 0;
}

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
