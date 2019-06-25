//find the first non-repeating character in a given String
#include<stdio.h>
void first(char str[])
{
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]==str[j] && i!=j)
        {
            i++;j=0;
        }
        else j++;
        if(str[j]=='\0')
            break;
    }
    if(str[i]=='\0')
        printf("No non-repeating character.");
    else
        printf("First non-repeating character: %c",str[i]);
}


int main()
{
    char str[20];
    printf("Enter String: ");
    scanf("%s", str);
    first(str);
    return 0;
}
