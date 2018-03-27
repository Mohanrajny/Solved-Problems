#include<stdio.h>
#include<conio.h>
void main()
{
int size=3;
int i,j;
for(i=size;i>=-size;i--)
{
	for(j=size;j>=abs(i);j--)
	{ 
	printf("*");
	}	
	printf("\n");
}

getch();
}

/*
*
**
***
****
***
**
*
*/
