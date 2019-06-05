//Read more: http://www.java67.com/2018/04/21-string-programming-and-coding-interview-questions-answers.html#ixzz5po7Wj3BT
//find the maximum occurring character in given String
#include<stdio.h>
void maxchar(char str[])
{
    int i,c[256]={0};
    for(i=0;str[i]!='\0';i++)
    {
        c[str[i]]+=1;   //count occurrence of each character by its ASCII value
    }
    int max=0;
    for(i=1;i<256;i++)
    {
        if(c[i]>c[max] && i!=32)  //calculate ASCII value of character with max count
            max=i;
    }
    printf("Max. occuring char: %c",max); //character with max count
    return;
}
int main()
{
    char str[20];
    printf("Enter String: ");
    gets(str);
    maxchar(str);
}
