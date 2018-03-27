#include <iostream>
using namespace std;
int main()
{
 int num;
 int sum;
 int i=1;
 int rem;
 cout<<"please enter number "<<endl;
 cin>>num;
 
 while(num>0)
 {
 rem=num%7;
 sum=sum+(rem*i);
 i*=10;
 num=num/7;
 }
 cout<<"your number is "<<sum<<endl;
}
