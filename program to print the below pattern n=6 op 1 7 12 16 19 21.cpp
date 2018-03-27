#include <iostream>
using namespace std;

int main()
{
 int n=6;
 int c=n;
 for(int i=1;i<=n;i++)
 {
     int a=n,b=i;
     for(int j=0;j<c;j++)
     {
         cout<<b<<" ";
         b=b+a;
         a--;
     }
     c--;
     cout<<endl;
 }
}
