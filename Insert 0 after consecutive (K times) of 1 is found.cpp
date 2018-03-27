#include<iostream>
using namespace std;
int main()
{
	int n,k,i,count=0,temp;
	cin>>n>>k;
	int arr[50];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==1)
		{
			count++;
		}
		if(count==k)
		{
			arr[i+1]=0;
			count=0;
		}
	}
	temp=n;
	for(i=count;i<k;i++)
	{
		arr[temp++]=1;
	}
	arr[temp+1]=0;
	for(i=0;i<temp+1;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}
