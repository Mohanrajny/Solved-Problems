#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int rows=pow(2,n);
	for(int i=0;i<rows;i++)
	{
		for(int j=n-1;j>=0;j--)
		{
			cout<<i/(int)pow(2,j)%2<<" ";
		}
	cout<<endl;
	}
}
