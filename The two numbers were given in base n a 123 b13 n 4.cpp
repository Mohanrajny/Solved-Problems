#include<iostream>
#include<vector>
using namespace std;

void add(int a,int b,int n)
{
 int c=0,i=0;
 vector<int>sum;
 while(a>0||b>0)
 {
  int r1,r2;
  r1=a%10;
  r2=b%10;
  int s=r1+r2+c;
  c=0;
  if(s>n)
  {
   c=1;
   sum.push_back(s-n);
  }
  else if(s==n)
  {
   sum.push_back(0);
   c=1;
  }
  else{
   sum.push_back(s);
  }
  a=a/10;
  b=b/10;
  i++;
 }
 if(c==1)
 {
  sum.push_back(1);
  i++;
 }
 for(int j=i-1;j>=0;j--)
 {
  cout<<sum[j];
 } 
}
int main()
{
 int a,b,n;
 cin>>a>>b>>n;
 add(a,b,n);
 return 0;
}
