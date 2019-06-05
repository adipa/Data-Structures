//print the duplicate characters from the given String
#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
void rem_dup_no_order(char str[])
{
    int i,c[256]={0};
    for(i=0;str[i]!='\0';i++)
    {
        c[str[i]]+=1;   //count occurrence of each character by its ASCII value
    }
    cout<<"Duplicate Characters: ";
    for(i=0;i<256;i++)
    {
        if(c[i]>1 && i!=32)
            printf("%c ",i);  //print if count more than 1
    }
}
void rem_dup_order(char str[])
{
    int i,c[256]={0};
    queue<int> q;
    for(i=0;str[i]!='\0';i++)
    {
        c[str[i]]+=1;
        if(c[str[i]]==2 && str[i]!=' ') //push if occurs twice
            q.push(str[i]);

    }
    cout<<"Duplicate Characters(In order): ";
    while(!q.empty())
    {
        printf("%c ",q.front());
        q.pop();
    }

}
int main()
{
    char str[20];
    printf("Enter String: ");
    gets(str);
    rem_dup_no_order(str);
    cout<<endl;
    rem_dup_order(str); //character that repeats first printed first
}
