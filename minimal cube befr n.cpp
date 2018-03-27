#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,cube=0,pre_cube=0,pre_no=0;
	for(i=1;i<=n/2;i++)
	{
		cube=i*i*i;
		
		if(cube<n)
		{
			pre_cube=cube;
			pre_no=i;
			continue;
		}
		else if(cube>n)
		{
			
			break;
		}
		
	}
	cout<<"cube "<<pre_no<<" "<<pre_cube;
}
