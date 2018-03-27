// C program to print all permutations with duplicates allowed
#include <stdio.h>
#include <string.h>
 
/* Function to swap values at two pointers */
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(char *a, int l, int r)
{
   int i;
   if (l == r)
     printf("%s\n", a);
   else
   {
       for (i = l; i <= r; i++)
       {
			printf(" l =%d  i=%d a =%s\n",l,i,a);
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
       }
   }
}
 
/* Driver program to test above functions */
int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}

/*#include<iostream>
#include<string.h>
using namespace std;
void swap(char *a,char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void permutate(char *a,int l,int r)
{
	int i;
	if(l==r)
	{
		cout<<a<<"\n";
	}
	else
	{
		for(i=l;i<=r;i++)
		{
			swap((a+l),(a+i));
			permutate(a,l+1,r);
			swap((a+1),(a+i));
		}
	}
}
int main()
{
	char str[]="AB";
	int len=strlen(str);
	permutate(str,0,len-1);
}*/
