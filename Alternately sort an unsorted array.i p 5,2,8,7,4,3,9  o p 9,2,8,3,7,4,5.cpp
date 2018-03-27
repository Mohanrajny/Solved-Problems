#include<iostream>
using namespace std;
void rearrange(int arr[],int n)
{
	int temp[n],max=n-1,min=0;
	int flag=true,i,j;
	for(i=0;i<n;i++)
	{
		if(flag)
		{
			temp[i]=arr[max--];
		}
		else
		{
			temp[i]=arr[min++];
		}
		flag=!flag;
	}
	for(i=0;i<n;i++)
	{
		arr[i]=temp[i];
	}
	
}
int main()
{
	int arr[]={5,2,8,7,4,3,9};
	int n=7,i,temp=0,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	rearrange(arr,n);
	for(i=0;i<n;i++)
	{
			cout<<arr[i];
	}
	cout<<endl;
}
