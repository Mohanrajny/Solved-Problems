#include<iostream>
using namespace std;
int main()
{
	int m;
	char ch,str[50][100];
	int n;
	int i,j,k,count=0,u=0;
	cin>>m>>ch>>n;
	for(i=0;i<n;i++)
	cin>>str[i];
	for(i=0;i<n;i++)
	{
		if(str[i][0]!='\0')
		{
			count=0;
			cout<<str[i]<<" ";
			for(j=0;str[i][j]!='\0';j++)
			{
				if(str[i][j]!=ch)
				count++;
			}
			for(j=i+1;j<n;j++)
			{
				if(str[i][0]!='\0')
				{
					u=0;
					for(k=0;str[j][k]!='\0';k++)
					{
						if(str[j][k]!=ch)
						u++;
					}
					if(u+count<=m)
					{
						cout<<str[j]<<" ";
						count=count+u;
						str[j][0]='\0';
					}
					
				}
				
			}
			if(str[i][0]!='\0')
			cout<<endl;
		}
		
	}
}
