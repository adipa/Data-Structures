//valid parentheses
#include<iostream>
#include<stack>
using namespace std;

int validParentheses(char* str);

int main()
{
  char str[20];
  cout<<"Enter String: ";
  cin>>str;
  if(validParentheses(str))
    cout<<"Valid parentheses";
  else
    cout<<"Invalid parentheses";
}

int validParentheses(char* str)
{
  stack<char> s;
  char c, t;
  int i = 0;
  while(str[i] != '\0') {
    c = str[i++];
    if(c == '{' || c == '[' || c == '(')
      s.push(c);
    if(c == '}' || c == ']' || c == ')')
    {
      if(s.empty())
	return 0;
      t = s.top();
      if((c == '}' && t == '{') || (c == ']' && t == '[') || (c == ')' && t == '('))
	s.pop();
      else return 0;
    }
  }
  return (s.empty());
}
