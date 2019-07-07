#include<stdio.h>
#include<string.h>

#define MAX_SIZE 20

void permuteString(char *str, int start, int end);
void swap(char *i, char *j);

int main()
{
  char str[MAX_SIZE];
  int l;  
  scanf("%[^\n]s", str);
  l= strlen(str) - 1;
  printf("Permutations:\n");
  permuteString(str, 0, l);
  return 0;
}

void permuteString(char *str, int start, int end)
{
  int i;
  if(start == end)
    printf("%s\n", str);
  else
  {
    for(i = start; i <= end; i++) {
      //dont permute if chars are same to avoid repetition
      if((*(str + start) != *(str + i)) || (i == start))
      {
	swap((str + start), (str + i));
	permuteString(str, start + 1, end);
	swap((str + start), (str + i));
      }   
    }
  }
}

void swap(char *i, char *j)
{
  char temp;
  temp = *i;
  *i = *j;
  *j = temp;
}    
