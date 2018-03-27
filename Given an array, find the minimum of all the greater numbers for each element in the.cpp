#include<iostream>
using namespace std;
void sortAsc(int arr[],int n)
{
	int i,j,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
}
void printElement(int arr[],int sort[],int n)
{
	int i,j,next=sort[0];
	cout<<endl<<"{ ";
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sort[j]>arr[i])
			{
				next=sort[j];
				break;
			}
		}
		cout<<arr[i]<<">"<<next<<" , ";
	}
	cout<<arr[n-1]<<"> } ";
}
int main()
{
	int n=7,i,j;
	int arr[n]={2,3,7,1,8,5,11},sort[n];
	for(i=0;i<n;i++)
	sort[i]=arr[i];
	sortAsc(sort,n);
	for(i=0;i<n;i++)
	cout<<sort[i]<<" ";
	printElement(arr,sort,n);
	
}
