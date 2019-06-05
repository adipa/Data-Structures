//valid parentheses
#include<iostream>
#include<stack>
using namespace std;
int check(char str[])
{
    stack<char> s;
    char c,t;int i=0;
    while(str[i]!='\0')
    {
        c=str[i++];
        if(c=='{' || c=='[' || c=='(')   //push if opening  bracket
            s.push(c);
        if(c=='}' || c==']' || c==')')   //pop if closing bracket and stack not empty
        {
            if(s.empty())
                return 0;
            t=s.top();
            if((c=='}' && t=='{') || (c==']' && t=='[') || (c==')' && t=='(') )
                s.pop();
            else return 0;
        }
    }
    return (s.empty()); //valid if stack empty
}
int main()
{
    char str[20];
    cout<<"Enter String: ";
    cin>>str;
    if(check(str))
        cout<<"Valid parentheses";
    else
        cout<<"Invalid parentheses";

}
