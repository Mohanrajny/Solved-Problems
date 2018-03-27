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

/*#include<iostream>
using namespace std;
int main()
{
	char str[50];
	gets(str);
	int n,i,j,k;
	for(n=0;n<str[n]!='\0';n++);
	for(i=0;i<n;i++)
	{
		j=n-i-1;
		for(k=0;k<n;k++)
		{
			if(k==i||k==j)
			{
				cout<<str[k];
			}
			else
			cout<<" ";
		}
		cout<<endl;
	}
}*/
