//remove all the duplicate characters from a given input String
#include<stdio.h>
char* rem_dup(char* str);

int main()
{
    char str[20];
    printf("Enter String: ");
    scanf("%[^\n]s",str);
    printf("String after removing duplicates: %s",rem_dup(str));
    return 0;
}

char* rem_dup(char* str)
{
    int i=1,j=0,k;
    while(str[i]!='\0'){
        if(str[i]==str[j] && str[i]!=' ') //if the character has occurred earlier
        {
            k=i;
            while(str[k]!='\0') {
	      //shift by 1 to left
              str[k]=str[k+1];
	      k += 1;
            }
            j=0;
        }
        else j++;
        if(j==i)
        {
            j=0;
            i++;
        }
    }
    return str;

 }
