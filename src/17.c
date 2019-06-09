#include<stdio.h>
char* remove_char(char* str,char c);

int main()
{
    char str[20],c;
    printf("Enter String: ");
    fgets(str,20,stdin);
    printf("Enter character to be removed: ");
    scanf("%c",&c);
    printf("After removal: %s",remove_char(str,c));
}

char* remove_char(char* str,char c)
{
    int i=0,k;
    while(str[i]!='\0'){
        if(str[i]==c)
        {
            k=i++;
            while(str[k]!='\0')
                str[k]=str[++k];
            i=0;
        }
        else i++;
    }
    return str;
}
