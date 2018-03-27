#include<bits/stdc++.h>
#define MAX 50
using namespace std;
 
// Function to print Excel column name for a given column number
void printString(int n)
{
    char str[MAX];  // To store result (Excel column name)
    int i = 0;  // To store current index in str which is result
 
    while (n>0)
    {
        // Find remainder
        int rem = n%26;
 
        // If remainder is 0, then a 'Z' must be there in output
        if (rem==0)
        {
            str[i++] = 'Z';
            n = (n/26)-1;
        }
        else // If remainder is non-zero
        {
            str[i++] = (rem-1) + 'A';
            n = n/26;
        }
    }
    str[i] = '\0';
 
    // Reverse the string and print result
    reverse(str, str + strlen(str));
    cout << str << endl;
 
    return;
}
 
// Driver program to test above function
int main()
{
    printString(28);
    return 0;
}/*
#include<iostream>
using namespace std;
int reverse(char str[],int i,int j)
{
	char temp;
	while(i<j){
		temp=str[i];
		str[i++]=str[j];
		str[j--]=temp;
	}
}
int printExcel(int n)
{
	char str[50];
	int rem,i=0;
	while(n>0)
	{
		rem=n%26;
		if(n%26==0)
		{
			str[i++]='Z';
			n=(n/26)-1;
		}
		else
		{
		str[i++]=(rem-1)+'A';
		n=n/26;
		}
	}
	str[i]='\0';
	reverse(str,0,i-1);
	cout<<str;
}
int main()
{
	int n;
	cout<<"Enter N: ";
	cin>>n;
	printExcel(n);
	
}
*/
