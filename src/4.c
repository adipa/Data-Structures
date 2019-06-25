//remove characters from the first String which are present in the second String
#include<stdio.h>
char* rem_dup(char* str1,char* str2);

int main()
{
    char str1[20],str2[20];
    printf("Enter String 1: ");
    fgets(str1,20,stdin);
    printf("Enter String 2: ");
    fgets(str2,20,stdin);
    printf("String1 after removing characters from String2: %s",rem_dup(str1,str2));
    return 0;

}

char* rem_dup(char* str1,char* str2)
{
    int i=0,j=0,k;
    while(str2[i]!='\0'){
        if(str2[i]==str1[j])                //characters match
        {
            k=j;                            //start shifting from current match position
            while(str1[k]!='\0') {
                str1[k]=str1[k+1];
		k += 1;
	    }
            j=0;                            //restore str1 index to 0

        }
        else j++;                           //go to the next char in str1 if no match
        if(str1[j]=='\0')                   //str1 checked for one str2 character, check for next
        {
            j=0;i++;
        }
    }
    return str1;
}
