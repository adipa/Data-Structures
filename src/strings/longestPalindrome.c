#include<stdio.h>
#include<string.h>

#define MAX_SIZE 20

int longestPalindrome(char*);
void printPalindrome(char*, int, int);

int main()
{
  char str[MAX_SIZE];
  int len;
  scanf("%[^\n]s", str);
  printf("\nLength: %d\n",longestPalindrome(str));
  return 0;
}

int longestPalindrome(char* str)
{
  int maxLength = 1, start = 0, len = strlen(str);
  int i, low, high;
  for(i = 1; i <= len; i++) {
    //longest even palindromic substring
    low  = i - 1;
    high = i;
    while((low >= 0) && (high < len) && (str[low] == str[high])) {
      if((high - low + 1) > maxLength)
      {
	 start = low;
	 maxLength = high - low + 1;
      }
      low--;
      high++;
    }

    //longest odd palindromic substring with i as center
    low  = i - 1;
    high = i + 1;
    while((low >= 0) && (high < len) && (str[low] == str[high])) {
      if((high - low + 1) > maxLength)
      {
      start = low;
      maxLength = high - low + 1;
      }
      low--;
      high++;
    }
  }
  printPalindrome(str, start, maxLength);
  return maxLength;
}

void printPalindrome(char *str, int start, int maxLength)
{
  int i = start;
  if(maxLength == 1)
    printf("All unique characters. Each character is a palindromic substring.");
  else
  {
    printf("Longest palindromic string: ");
    while(i != start + maxLength) {
      printf("%c", str[i++]);
    }
  }
}
