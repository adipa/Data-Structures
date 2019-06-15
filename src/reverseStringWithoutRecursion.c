#include<stdio.h>
#include<string.h>

#define MAX_SIZE 20

void reverseString1(char *str, int len);
char* reverseString2(char *str, int len);

int main()
{
    char str[MAX_SIZE];
    int len;
    scanf("%[^\n]s", str);
    len = strlen(str) - 1;
    reverseString1(str, len);
    printf("\n%s", reverseString2(str, len));
}

void reverseString1(char *str, int len)
{
    int i;
    for(i = len; i >= 0; i--)
        printf("%c", str[i]);
}

char* reverseString2(char *str, int len)
{
    int i = 0;
    while(i < len) {
        str[i]   = str[i] + str[len];
        str[len] = str[i] - str[len];
        str[i] = str[i++] - str[len--];
    }
    return str;
}


