// Simple C++ program to find subarrays
// whose averages are equal
#include<bits/stdc++.h>
using namespace std;
 
// Finding two subarrays with equal average.
void findSubarrays(int arr[], int n)
{
    bool found = false;
    int lsum = 0;
    for (int i = 0; i < n-1; i++)
    {
        lsum += arr[i];
        int rsum = 0;
        for (int j = i + 1; j < n; j++)
            rsum += arr[j];
 
        // If averages of arr[0...i] and arr[i+1..n-1]
        // are same. To avoid floating point problems
        // we compare "lsum*(n-i+1)" and "rsum*(i+1)"
        // instead of "lsum/(i+1)" and "rsum/(n-i+1)"
        if (lsum*(n-i-1) == rsum*(i+1))
        {
            printf("From (%d  %d) to (%d  %d)\n", 0, i,
                                            i+1, n-1);
                                            printf("\n  lsum=%d ",lsum);
            found = true;
        }
    }
 
    // If no subarrays found
    if (found == false)
        cout << "Subarrays not found" << endl;
}
 
// Driver code
int main()
{
    int arr[] = {4,2,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    findSubarrays(arr, n);
    return 0;
}

