#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int numarray[5]={10,36,54,89,12};
	int len=sizeof(numarray)/sizeof(numarray[0]);
	int i,j,temp;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(numarray[i]>numarray[j])
			{
				int temp=numarray[i];
				numarray[i]=numarray[j];
				numarray[j]=temp;
				
			}
		}
	}
	int warray[len];
	for(i=0;i<len;i++)
	{
		warray[i]=0;
		int sq=sqrt(sq);
		if(sq==numarray[i])
		warray[i]=warray[i]+5;
		if(numarray[i]%4==0 && numarray[i]%6==0)
		warray[i]=warray[i]+4;
		if(numarray[i]%2==0)
		warray[i]=warray[i]+3;
		
		
}
for(i=0;i<len;i++)
cout<<"<"<<numarray[i]<<","<<warray[i]<<">"<<endl;
}
