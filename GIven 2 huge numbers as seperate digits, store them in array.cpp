#include<iostream>
using namespace std;
int main()
{
	int a[]={9,2,8,1,3,5,6,7,3,1,1,6};
	int b[]={7,8,4,6,2,1,9,9,7};
	int res[50];
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	int i,j,k=0,carry=0;
	int l=n > m ? n: m;
	
	for(i=n-1,j=m-1;i>=0 && j>=0;i--,j--)
	{
		res[k]=a[i]+b[j]+carry;
		carry=res[k]/10;
		res[k]=res[k]%10;
	 	k++;
	}
	for(i;i>=0;i--)
	res[k++]=a[i];
	
	for(j;j>=0;j--)
	res[k++]=a[j];
	
	for(l=l-1;l>=0;l--)
	cout<<res[l]<<" ";
}
