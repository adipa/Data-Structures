//check if a given String is Palindrome or not
#include<stdio.h>
#include<string.h>
int check(char* str);

int main()
{
    char str[20];
    printf("Enter String: ");
    scanf("%[^\n]s",str);
    if(check(str))
        printf("Palindrome");
    else
        printf("Not a palindrome");
}

int check(char* str)
{
    int f=0,l=strlen(str)-1;
    while(f<l)
        if(str[f++]!=str[l--])
            return 0;
    return 1;
}
