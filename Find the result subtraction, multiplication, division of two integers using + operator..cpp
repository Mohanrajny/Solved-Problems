/*
Find the result subtraction, multiplication, division of two integers using + operator.
Input: 6 and 4
output:
addition 6+4 = 10,    subtraction  6+(-4) = 2,   multiplication = 24,   division = 1

Input : -8 and -4
Output:
addition -8+(-4) = -12,    subtraction  (-8)+(-(-4)) = -4,   multiplication = 32,   division = 2
*/
#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a+(-b);
}
int mul(int a,int b)
{
	if(b==0)
	return 0;
	if(b>0)
	return (a+mul(a,b-1));
	if(b<0)
	return -mul(a,-b);
}
int div(int a,int b)
{
	int sum=0,count=0;
	if(b<0)
	{
		b=-b;
	}
	if(a<0)
	{
		a=-a;
	}
	while((a-sum)>=b)
	{
		sum+=b;
		count++;
	}
	return count;
}
int main()
{
	int a=-8,b=-4;
	//cin>>a>>b;
	cout<<"Addition "<<add(a,b);
	cout<<"\nSubtraction "<<sub(a,b);
	cout<<"\nMultiplication "<<mul(a,b);
	cout<<"\nDivison "<<div(a,b); 
}
