#include<iostream>

using namespace std;
int main()
{
	int arr1[]={20,7};
	int arr2[]={11,5};
	int i,j,isPrime=0;
	for(i=2;i<=45;i++)
	{
		isPrime=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
			isPrime=1;	
			}
		}
		if(isPrime==0)
		{
			
			if((7+j)%5==0)
			cout<<j<<"  ";
		}
	}
	
}

