#include<iostream>
#include<string.h>
using namespace std;

int main(){

char s[]="program";
//gets(s);
int n = strlen(s);
//Add space 
int spaces = n;
for(int i = 0;i<n ;i++){
   //Print spaces very first
   for(int j = 0;j<spaces;j++)
       cout<<" ";
   //Print last part of word
   for(int j = n/2 ;j<=n/2+i;j++)
      if(j<n)
       cout<<s[j];
   //Print starting part of word
   if(i>n/2){
      for(int j = 0;j<i-n/2;j++)
       cout<<s[j];
   }
 cout<<endl;	
 spaces -= 1;
  }
return 0;
}
/*
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int n=str.length();
	int spaces=n;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<spaces;j++)
		{
			cout<<" ";
		}
		for(j=n/2;j<=n/2+i;j++)
		{
			if(j<n)
			cout<<str[j];
		}
		if(i>n/2)
		{
			for(j=0;j<i-n/2;j++)
			{
				cout<<str[j];
			}
		}
		cout<<endl;
		spaces-=1;;
	}
return 0;
}
*/
