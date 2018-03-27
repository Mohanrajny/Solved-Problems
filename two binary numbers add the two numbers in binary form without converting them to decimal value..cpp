#include <iostream>
using namespace std;

int main()
{
	int a[]={0,1,0,1,0};
	int b[]={1,1,0,0,1};
	int i,j,temp,n=5;
	int sum[n],c=0;
	for(i=n-1;i>=0;i--)
	{
		sum[i]=((a[i]^b[i])^c);
		c=((a[i]&b[i])|(b[i]&c)|(a[i]&c));
	}
	cout<<c;
	for(i=0;i<n;i++)
	cout<<sum[i];
}
/*

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	
	
	int i,j,temp,n=5;
	int c=0;
	int x,y;
	cin>>x>>y;
	int a_len=log10(x)+1,b_len=log10(y)+1;
	int a[254]={0},b[254]={0},sum[254];
	while(x)
	{
		a[i++]=x%10;
		x=x/10;
	}
	while(y)
	{
		b[i++]=y%10;
		y=y/10;
	}
	if(b_len>a_len)	
	n=b_len;
	else
	n=a_len;
	
	for(i=n-1;i>=0;i--)
	{
		sum[i]=((a[i]^b[i])^c);
		c=((a[i]&b[i])|(b[i]&c)|(a[i]&c));
	}
	cout<<c;
	for(i=0;i<n;i++)
	cout<<sum[i];
}


*/
