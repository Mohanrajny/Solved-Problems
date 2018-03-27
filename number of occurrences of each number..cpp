// C++ program to print frequencies of all array
// elements in O(1) extra space and O(n) time
#include<bits/stdc++.h>
using namespace std;
 
// Function to find counts of all elements present in
// arr[0..n-1]. The array elements must be range from
// 1 to n
void findCounts(int *arr, int n)
{
    // Traverse all array elements
    int i = 0;
    while (i<n)
    {
        // If this element is already processed,
        // then nothing to do
        if (arr[i] <= 0)
        {
            i++;
            continue;
        }
 
        // Find index corresponding to this element
        // For example, index for 5 is 4
        int elementIndex = arr[i]-1;
 
        // If the elementIndex has an element that is not
        // processed yet, then first store that element
        // to arr[i] so that we don't loose anything.
        if (arr[elementIndex] > 0)
        {
            arr[i] = arr[elementIndex];
 
            // After storing arr[elementIndex], change it
            // to store initial count of 'arr[i]'
            arr[elementIndex] = -1;
        }
        else
        {
            // If this is NOT first occurrence of arr[i],
            // then increment its count.
            arr[elementIndex]--;
 
            // And initialize arr[i] as 0 means the element
            // 'i+1' is not seen so far
            arr[i] = 0;
            i++;
        }
    }
 
    printf("nBelow are counts of all elementsn");
    for (int i=0; i<n; i++)
        printf("\n%d -> %d\n", i+1, abs(arr[i]));
}
 
// Driver program to test above function
int main()
{
    int arr[] = {2, 3, 2, 6, 1, 6, 2,8};
    findCounts(arr, sizeof(arr)/ sizeof(arr[0]));
 
    return 0;
}
