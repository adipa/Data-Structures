#include<stdio.h>
#include<string.h>

#define MAX_SIZE 20

void reverseString(char *str, int l);

int main()
{
    char str[MAX_SIZE];
    int len;
    scanf("%[^\n]s", str);
    //length of string including null
    len = strlen(str);
    reverseString(str, len);
}

void reverseString(char *str, int len)
{
    char c = str[0];
    //when length becomes 0 (null character is reached), return
    if(len == 0)
        return;
    //recursively call the function by passing the substring starting from the subsequent character and reducing size by 1
    reverseString(&str[1], len - 1);
    //print current character
    printf("%c", c);
}
