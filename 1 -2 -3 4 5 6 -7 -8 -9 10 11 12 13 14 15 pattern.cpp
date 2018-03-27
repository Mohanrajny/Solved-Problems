#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n,count=1;
	cin>>n;
	for(i=1,j=1;i<=n;j++)
	{
		count=j;
		if(j%2==0)
		{
			while(count)
			{
			cout<<-i<<" ";
			i++;
			count--;
			}
		}
		if(j%2!=0)
		{
			while(count)
			{
				cout<<i<<" ";
				i++;
				count--;
			}
		}
	}
			
}
