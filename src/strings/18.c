#include<stdio.h>
int words(char* str);

int main()
{
    char str[20];
    printf("Enter String: ");
    scanf("%[^\n]s",str);
    printf("No. of words %d",words(str));
    return 0;
}

int words(char* str)
{
    int i=0,c=1;
    while(str[i]!='\0') {
        if(str[i++]==' ')
            c++;
    }
    return c;
}
