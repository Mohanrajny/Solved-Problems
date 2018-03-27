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
/*

#include<bits/stdc++.h>
using namespace std;
 
// function to check if paranthesis are balanced
bool areParanthesisBalanced(char expr[])
{
    stack<char> s;
    char a, b, c;
 
    // Traversing the Expression
    for (int i=0; i<strlen(expr); i++)
    {
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{')
        {
            // Push the element in the stack
            s.push(expr[i]);
        }
        else
        {
            switch (expr[i])
            {
            case ')':
 
                // Store the top element in a
                a = s.top();
                s.pop();
                if (a=='{'||a=='[')
                    s.push(a);
                break;
            case '}':
 
                // Store the top element in b
                b = s.top();
                s.pop();
                if (b=='('||b=='[')
                    s.push(a);
                break;
            case ']':
 
                // Store the top element in c
                c=s.top();
                s.pop();
                if (c=='('||c=='{')
                    s.push(a);
                break;
            }
        }
    }
 
    // Check Empty Stack
    if (s.empty())
        return true;
    else
        return false;
}
 
// Driver program to test above function
int main()
{
    char expr[]="{()[]}([)]";
 
    if(areParanthesisBalanced(expr))
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
    return 0;
}*/
