#include<iostream>
using namespace std;
void reverse(char *begin ,char *end)
{
	char temp;
	while(begin<end)
	{
	temp=*begin;
	*begin++=*end;
	*end--=temp;
	}
}
void reverseword(char *s)
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
			reverse(word_begin,temp);
			word_begin=NULL;
		}
		temp++;
	}
	reverse(s,temp-1);
}
int main()
{
	char str[]="Hello Zoho";
	//char *temp=str;
	reverseword(str);
	cout<<str;
	return 0;
}
/*

#include<iostream>
using namespace std;
void reverse(char *begin,char *end)
{
	char temp;
	while(begin<end)
	{
		temp=*begin;
		*begin++=*end;
		*end--=temp;
	}
}
void reverseWord(char *s)
{
	char *word_begin=NULL,*temp=s;
	while(*temp)
	{
		if(word_begin==NULL && *temp!=' ')
		word_begin=temp;
		if(word_begin && ((*(temp+1)==' ') || (*(temp+1))=='\0'))
		{
			reverse(word_begin,temp);
			word_begin=NULL;
		}
		temp++;
	}	
	reverse(s,temp-1);
}
int main()
{
	char str[50];
	gets(str);
	reverseWord(str);
	cout<<str;
}
*/
