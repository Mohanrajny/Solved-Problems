#include<iostream>
using namespace std;
int main()
{
	int t,i,l=8;
	int sum,carry=0;
	int arr1[]={9,2,8,1,3,5,6,7,3,1,1,6};
	int arr2[]={7,8,4,6,2,1,9,9,7};
	int res[]={9,2,8,1,3,5,6,7,3,1,1,6};
	for(t=11;t>=0;t--)
	{
		
		sum=arr1[t]+arr2[l]+carry;
		carry=0;
		carry=sum/10;
		sum=sum%10;
		res[t]=sum;
		l--;
	
		if(l<0 )
		break;	
}
	for(i=0;i<12;i++)
	{
		cout<<res[i];
	}
}

