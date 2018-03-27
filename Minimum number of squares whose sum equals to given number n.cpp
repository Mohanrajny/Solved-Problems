#include<iostream>
using namespace std;
 
int minSquares(int x)
{
    //create an array to store results of the sub-problem
    int minSq[x+1];
 
    //minSq[i]=min. number of squares that sum upto i
 
    //initialization
    minSq[0]=0;
    minSq[1]=1;
 
    for(int i=2;i<=x;i++)
    {
        //the max. number of squares that sum upto i is equal to i
        minSq[i]=i;
 
        for(int j=1;j*j<=i;j++)
        {
            //select the minimum value for i by using already computed values
            minSq[i]=min(minSq[i],1+minSq[i-j*j]);
        }
    }
 
    return minSq[x];
}
 
int main()
{
    int x;
    cout<<"Enter the number "<<endl;
    cin>>x;
 
    cout<<"Min. number of squares that sum up to input number are "<<endl;
    cout<<minSquares(x);
    cout<<endl;
 
    return 0;
}
