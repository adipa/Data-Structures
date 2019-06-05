//remove characters from the first String which are present in the second String
#include<stdio.h>
void rem_dup(char str1[],char str2[])
{
    int i=0,j=0,k;
    while(str2[i]!='\0')
    {
        //printf("%c%c\n",str1[j],str2[i]);
        if(str2[i]==str1[j])                //characters match
        {
            k=j;                            //start shifting from current match position
            while(str1[k]!='\0')
                str1[k]=str1[++k];
                //printf("%s\n",str1);
            j=0;                            //restore str1 index to 0

        }
        else j++;                           //go to the next char in str1 if no match
        if(str1[j]=='\0')                   //str1 checked for one str2 character, check for next
        {
            j=0;i++;
        }
    }
    printf("String1 after removing characters from String2: %s",str1);
}
int main()
{
    char str1[20],str2[20];
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);
    rem_dup(str1,str2);
}
