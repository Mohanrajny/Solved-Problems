#include<iostream>
using namespace std;
void pattern(string str, int len){
     
    // i and j are the indexes of characters 
    // to be displayed in the ith iteration
    // i = 0 intially and go upto length of
    // string
    // j = length of string initially 
    // in each iteration of i, we increment
    // i and decrement j, we print character
    // only of k==i or k==j
    for (int i = 0; i < len; i++)
    {
        int j = len -1 - i;
        for (int k = 0; k < len; k++)
        {
            if (k == i || k == j)
                cout << str[k];
            else
                cout << " ";
        }
        cout << endl;       
    }
}
 
// driver code
int main ()
{
    string str = "geeksforgeeks";
    //cin>>str;
    int len = str.size();
 	pattern(str, len);
 
    return 0;
}
