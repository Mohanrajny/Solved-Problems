#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && a>c)
	cout<<"A Is Bigger "<<a;
	else if(b>c)
	cout<<"B Is Bigger "<<b;
	else
	cout<<"C is Bigger "<<c;
}
