#include <iostream>
using namespace std;

int main()
{
 int arr[6]={5,8,10,13,6,2};
 int count=0,tr=3;
 for(int i=0;i<6;i++)
 {
     int div=0;
     div=arr[i]/tr;
     if(arr[i]%tr!=0)
         div++;
         cout<<div<<endl;
     count+=div;
 }
 cout<<count;
}

