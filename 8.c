#include<stdio.h>
char first(char* str);

int main()
{
    char str[20],c;
    printf("Enter String: ");
    scanf("%[^\n]s",str);
    c=first(str);
    if(c=='\0')
        printf("No non-repeating character.");
    else
        printf("First non-repeating character: %c",c);
}

char first(char* str)
{
    int i=0,j=0;
    while(str[i]!='\0'){
        if(str[i]==str[j] && i!=j)
        {
            i++;j=0;
        }
        else j++;
        if(str[j]=='\0' && str[i]!=' ')
            break;
    }
    return str[i];
}
