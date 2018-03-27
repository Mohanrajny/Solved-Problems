#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		{
			cout<<"ThreeFive";
			continue;
		}

		if(i%3==0)
		cout<<"three"<<" ";
		else if(i%5==0)
		cout<<"Five"<<" ";
		else
		cout<<i<<" ";
	}
}
