#include<iostream>
using namespace std;
int main()
{
	int n,arr[50],i=0,k=0;
	cin>>n;
	int odd=0,even=0;
	while(n)
	{
		arr[k++]=n%10;
		n=n/10;
	}
	for(i=k-1;i>=0;i--)
	{
		if(arr[i]%2==0)
		even++;
		else if(arr[i]%2!=0)
		odd++;
	}
	cout<<"ODD "<<odd <<endl;
	cout<<"EVEN "<<even;
	
}
