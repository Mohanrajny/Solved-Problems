#include<iostream>
using namespace std;
multiply_optimal(int a,int b){

if(a==0||b==0)
return 0;
if (b == 1)
return a;
if (b % 2 == 0)
return multiply_optimal(a + a, b >> 1);
else
return a + multiply_optimal(a + a, b >> 1);	
}
int main()
{
	int a=3,b=4;
	cout<<multiply_optimal(a,b);
}

