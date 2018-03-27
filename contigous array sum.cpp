
// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 	int start=0,end=0,count=0;
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        	end=i;
		}
        if (max_ending_here < 0 )
        {
		    max_ending_here = 0;
        	start=i+1;
		}
        
    }
    for(int l=start;l<=end;l++)
    cout<<a[l]<<" ";
    return max_so_far;
}
 
/*Driver program to test maxSubArraySum*/
int main()
{
    int a[] = {-2, 7, 5, -1, 3, 2, 9, -7};
    //int a[] = {-1,-2,-3,-4};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}

/*#include<iostream>
using namespace std;
int main()
{
	int start,end,i,j,n;
	int a[]={-2,-3,4,-1,-2,1,5,-3};
	n=sizeof(a)/sizeof(a[0]);
	int present_sum=0,max_sum=0;
	for(i=0;i<n;i++)
	{
		present_sum=present_sum+a[i];
		if(present_sum>0 && present_sum>max_sum)
		{
			max_sum=present_sum;
			end=i;
		}
		else if(present_sum<0)
		{
			present_sum=0;
			start=i;
		}
		
	}
	
	cout<<"Max sum is "<<max_sum;
	cout<<"\nelements\n";
	for(i=start+1;i<=end;i++)
	cout<<a[i]<<" ";
}
*/
