/*   Display Pattern

Problem Statement

Print the word with odd letters as

Input Format

String should have odd number of characters.

Output Format

*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[]="PROGRAM";
	int n,i,j,k,l;
	n=strlen(str);
	for(i=0,j=n-1;i!=j;i++,j--)
	{
		cout<<str[i];
		for(k=1;k<n/2;k++)
		{
			cout<<" ";
		}
		cout<<str[j];
		n=n-2;
		cout<<endl;
	}
	cout<<str[i]<<endl;
	n=n+2;
	for(i--,j++;i>=0;i--,j++)
	{
		cout<<str[i];
		for(k=1;k<n/2;k++)
		{
			cout<<" ";
		}
		cout<<str[j];
		n=n+2;
		cout<<endl;
	}
}
