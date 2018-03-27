#include<iostream>
using namespace std;
int sum(int arr[],int x)
{
	int flag=0,i,j;
	for(i=0;i<5;i++)
	{
		for(j=1;j<5;j++)
		{
			if(arr[i]+arr[j] ==x)
			{
				
				flag=1;
				return flag;
			}
			
		}	
	}
	
	return 0;
}
int main()
{
	int arr[]={1,2,3,4,5};
	int x;
	cin>>x;
	if(sum(arr,x))
	{
		cout<<"true";
	}
	else{
		cout<<"flase";
	}
}

