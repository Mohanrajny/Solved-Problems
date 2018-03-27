/*
Given an array, print all duplicate values. If no duplicates found print -1.
I/P
12,13,14,12,125,24,24,12  
7,9,1,21  
32,6,12,45,12  
O/P
12,24  
-1  
12  

*/

#include<iostream>
using namespace std;
int  main()
{
	//int arr[]={12,13,14,12,125,24,24,12};
	int arr[]={7,9,1,21};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,j,k=1,temp=0;
	bool isDup=false;
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
	for(i=0;i<n;i++)
	{
	isDup=false;
	for(j=0;j<i;j++)
	{
		if(arr[i]==arr[j])	
		{
			isDup=true;
			k=0;
			break;
			
		}
	}
	if(isDup && temp!=arr[i])
	{
		cout<<arr[i]<<" ";
		temp=arr[i];
	}
	}
	if(k)
	{
		cout<<"-1";
	}
}
