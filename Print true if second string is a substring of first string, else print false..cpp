// Recursive C++ program to check if a string is subsequence of another string
#include<iostream>
#include<cstring>
using namespace std;
 
// Returns true if str1[] is a subsequence of str2[]. m is
// length of str1 and n is length of str2
bool isSubSequence(char str1[], char str2[], int m, int n)
{
    // Base Cases
    if (m == 0) return true;
    if (n == 0) return false;
  
	if(str1[m-1]=='*')
	m--;

    // If last characters of two strings are matching
    if (str1[m-1] == str2[n-1])
        return isSubSequence(str1, str2, m-1, n-1);
 
    // If last characters are not matching
    return isSubSequence(str1, str2, m, n-1);
}
 
// Driver program to test methods of graph class
int main()
{
    char str1[] = "*o*o";
    char str2[] = "zoho";
    int m = strlen(str1);
    int n = strlen(str2);
    isSubSequence(str1, str2, m, n)? cout << "True ": cout << "False";
    return 0;
}


/*Alteranative instead of char type String used

#include<iostream>
#include<cstring>
using namespace std;
bool isSubStr(string str1,string str2,int m,int n)
{
	
	if(m==0)
	return true;
	if(n==0)
	return false;
	if(str1[m-1]=='*')
	m--;
	if(str1[m-1]==str2[n-1])
	return isSubStr(str1,str2,m-1,n-1);
	
	return isSubStr(str1,str2,m,n-1);
}
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	int m,n;
	m=str1.length();
	n=str2.length();
	isSubStr(str1,str2,m,n)? cout<<"True" : cout<<"False";
}
*/
