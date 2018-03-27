#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int n;
    scanf("%d", &n);
    int p = 1, charCount = 0;
    while(true) {
        int max = pow(10, p);
        int min = pow(10, p-1);
        if(n > max)
            charCount += (max-min) * p;
        else {
            if(n < max) charCount += (n-min+1) *p;
            else if(n == max) {
                charCount += (n-min) *p;
                charCount += p+1;
            }
            break;
        }
        p++;
    }
    cout<<charCount<<endl;
    return 0;
}/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int charCount=0,max=0,min=0,p=1;
	while(true)
	{
		max=pow(10,p);
		min=pow(10,p-1);
		if(n>max)
		{
			charCount+=(max-min)*p;
		}
		else
		{
			if(n<max)
			{
				charCount+=(n-min+1)*p;	
			}
			else if(n==max)
			{
				charCount+=(n-min)*p;
				charCount+=p+1;
			}
			break;
		}
		p++;
		
	}
	cout<<endl<<charCount;
}
*/
