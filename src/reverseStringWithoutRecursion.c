#include<stdio.h>
#include<string.h>

#define MAX_SIZE 20

char* reverseString(char *str);

int main()
{
    char str[MAX_SIZE];
    scanf("%[^\n]s", str);
    printf("%s", reverseString(str));
}

char* reverseString(char *str)
{
    int start = 0, end = strlen(str) - 1;
    while(start < end) {
        str[start] = str[start]   + str[end];
        str[end]   = str[start]   - str[end];
        str[start] = str[start++] - str[end--];
    }
    return str;
}
