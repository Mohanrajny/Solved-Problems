#include <iostream>
#include <cstring>
#include<stdlib.h>
using namespace std;
bool isValidChar(char c)
{
    return (c>='A'&&c<='Z')||(c>='a'&&c<='z')||(c>='1'&&c<='9');
}
int main() {
    char temp, x[50];
   // scanf("%[^\n]", x);
    gets(x);
	int i = 0,j = strlen(x)-1;
    while(i<j) {
        if(!isValidChar(x[i])) { i++; continue; }
        if(!isValidChar(x[j])) { j--; continue; }
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
        i++;j--;
    }
    cout<<x<<endl;
    return 0;
}

/*

#include<iostream>
using namespace std;
bool isValidChar(char c)
{
	return (c>='A' && c<='Z') || (c>='a' && c<='z' ) ||(c>='0' && c<='9');
}
int main()
{
	char x[50],temp;
	gets(x);
	int i=0,j;
	for(j=0;x[j]!='\0';j++);
	while(i<j)
	{
		if(!isValidChar(x[i]))
		{
		i++;
		continue;
		}
		if(!isValidChar(x[j]))
		{
		j--;
		continue;
		}
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
		i++;
		j--;
		
	}
	cout<<endl<<x;
	
}

*/
