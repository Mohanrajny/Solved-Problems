// Program to convert Roman Numerals to Numbers
#include<bits/stdc++.h>
using namespace std;
 
// This function returns value of a Roman symbol
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}
 
// Returns decimal value of roman numaral
int romanToDecimal(string &str)
{
    // Initialize result
    int res = 0;
 
    // Traverse given input
    for (int i=0; i<str.length(); i++)
    {
    	cout<<i<<endl;
        // Getting value of symbol s[i]
        int s1 = value(str[i]);
 
        if (i+1 < str.length())
        {
            // Getting value of symbol s[i+1]
            int s2 = value(str[i+1]);
 
            // Comparing both values
            if (s1 >= s2)
            {
                // Value of current symbol is greater
                // or equal to the next symbol
                res = res + s1;
            }
            else
            {
            	
                res = res + s2 - s1;
                i++; // Value of current symbol is
                cout<<res<<endl;     // less than the next symbol
            }
        }
        else
        {
        	//cout<<res<<endl;
            res = res + s1;
            i++;
        }
    }
    return res;
}
 
// Driver Program
int main()
{
    // Considering inputs given are valid
    string str ="IV";
    cout << "Integer form of Roman Numeral is "
         << romanToDecimal(str) << endl;
 
    return 0;
}/*

#include<iostream>
using namespace std;
int value(char x)
{
	if(x=='I')
	return 1;
	if(x=='V')
	return 5;
	if(x=='X')
	return 10;
	if(x=='L')
	return 50;
	if(x=='C')
	return 100;
	if(x=='D')
	return 500;
	if(x=='M')
	return 1000;
	
	return -1;
	
}
int printRoman(char str[])
{
	int i,j,res=0,len,s1,s2;
	for(len=0;str[len]!='\0';len++);
	
	for(i=0;i<len;i++)
	{
		s1=value(str[i]);
		if(i+1<len)
		{
			s2=value(str[i+1]);
			if(s1>=s2)
			{
				res=res+s1;
			}
			else
			{
				res=res+s2-s1;
				i++;
			}
		}
		else
		{
			res=res+s1;
			i++;
		}
	}
	return res;
}
int main()
{
	char str[50];
	cin>>str;
	cout<<"\nValue :"<<printRoman(str);
}

*/
