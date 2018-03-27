/*
Given a sentence of string, in that remove the palindrome words and print the remaining.
Input:
He did a good deed
Output:
He good

Input:
Hari speaks malayalam
Output:
Hari speaks
*/#include<iostream>
using namespace std;
bool isPalindrome(char *begin,char *end)
{
	while(end>begin)
	{
		if(*begin++ != *end--)
		return false;
	}
	return true;
}
void printPalindrome(char *s)
{
	char *word_begin=NULL;
	char *temp=s;
	while(*temp)
	{
		if(word_begin==NULL && *temp!=' ')
		{
			word_begin=temp;
		}
		if (word_begin && ((*(temp+1)==' ') ||(*(temp+1)=='\0')))	
		{
			if(!isPalindrome(word_begin,temp))
			{
				while(*word_begin!=' ')
				{
					cout<<*word_begin++;
				}
				cout<<" ";
			}
			word_begin=NULL;
		}
		temp++;
	}
}

int main()
{
	char str[]="He did a good deed";
	printPalindrome(str);
}
