#include<bits/stdc++.h>
using namespace std;
char checkBalancedParenthesis(char exp[])
{
	stack<char> s;
	char a,b,c;
	
	for(int i=0;i<strlen(exp);i++)
	{
		if(exp[i]=='{' || exp[i]=='(' || exp[i]=='[')
		{
			s.push(exp[i]);
		}
		else
		{
			switch(exp[i])
			{
				case '}':
					a=s.top();
					s.pop();
					if(a=='(' || a==']')
						return false;
					break;
				case ']':
					b=s.top();
					s.pop();
					if(b=='{' || b=='(')
					return false;
					break;
				case ')':
					c=s.top();
					s.pop();
					if(c=='{' || c=='[')
					return false;
					break;
				default:
					cout<<"Invalid Expression";
					return false;
			}
		}
		
	}
	if(s.empty())
	return true;
	else
	return false;
	
	
}
int main()
{
	char exp[50]={"{[]{}}"};
	if(checkBalancedParenthesis(exp))
	{
		cout<<"Balanced";
	}
	else
	{
		cout<<"Not Balanced";
	}
}
