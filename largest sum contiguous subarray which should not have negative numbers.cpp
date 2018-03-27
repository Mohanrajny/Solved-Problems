#include<iostream>
using namespace std;
void printContigous(int arr[],int n)
{
	int i,j,previous_sum=0,present_sum=0,start=0,end=0;
	for(i=0;i<n;i++)
	{
		present_sum+=arr[i];
		if(present_sum>previous_sum && present_sum>0 && arr[i]>0)
		{
			previous_sum=present_sum;
			end=i;
		}
		else if(arr[i]<0)
		{
			present_sum=0;
			start=i;
		}
		
	}
	cout<<"Max sum is "<<previous_sum<<endl;
	for(int l=end;arr[l]>=0;l--)
	cout<<arr[l]<<" ";
}
int main()
{
	int arr[]={-2, 7, 5, -1, 3, 2, 9, -7};
	int n=sizeof(arr)/sizeof(arr[0]);
	printContigous(arr,n);
}
