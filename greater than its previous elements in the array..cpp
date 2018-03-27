#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max = a[0];
	cout<<max<<" ";
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			cout<<a[i]<<" ";
			max = a[i];
		}
	}
}
