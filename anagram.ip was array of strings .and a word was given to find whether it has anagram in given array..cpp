/*
 It’s about anagram.i/p was array of strings .and a word was given to find whether it has anagram in given array.

I/p catch, got, tiger, mat, eat, Pat, tap, tea

Word: ate

O/p eat, tea
*/

#include<iostream>
using namespace std;
bool checkAnagram(char *str1,char *str2)
{
	int count[256]={0};
	int i;
	for(i=0;str1[i] && str2[i];i++)
	{
		count[str1[i]]++;
		count[str2[i]]--;
	}
	if(str1[i] || str2[i])
	{
		return false;
	}
	for(i=0;i<256;i++)
	{
		if(count[i])
		return false;
	}
	return true;
}
int main()
{
	char str1[][8]={"catch", "got", "tiger", "mat", "eat", "pat", "tap", "tea"};
	char str2[]="pat";
	int len=sizeof(str1)/sizeof(str1[0]);
	for(int i=0;i<len;i++)
	{
	if(checkAnagram(str1[i],str2))
	cout<<str1[i]<<" ";
	}
}

