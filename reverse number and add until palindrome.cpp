#include<iostream>
using namespace std;
int reverseNumber(int number)
{
	int reverse=0,remain=0;
	while(number)
	{
		remain=number%10;
		reverse=reverse*10+remain;
		number=number/10;
	}
	return reverse;
}
bool isPalindrome(int num)
{
	if(reverseNumber(num)==num)
	return true;
	else 
	false;
}
int reverseAndAdd(int num)
{
	int sum=0,reverse=0,iteration=1;
	if(isPalindrome(num))
	{
		cout<<"Given No Is Already a Palindrome";
		return 0;
	}
	else
	{
	while(!isPalindrome(num) && iteration<=5)
	{
		reverse=reverseNumber(num);
		sum=num+reverse;
		num=sum;
		iteration++;
	}
	}
	cout<<"Palindrome are "<<sum;
	return 0;
}

int main()
{
	int n;
	cin>>n;
	reverseAndAdd(n);
}
