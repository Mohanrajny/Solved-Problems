/*
 * C program to Increase l to all of the given Integer Digit
 */
#include <stdio.h>
 
int main()
{  int a,b,c,d,e,s,n;
	int l;
   printf("\n Enter the value of n = ");
    scanf("%d",&n);
	scanf("%d",&l);
      a=(n%10);
      b=(n/10)%10;
      c=(n/100)%10;
      d=(n/1000)%10;
      //printf("%d %d %d %d ",a,b,c,d);
	  a=a+l;
	  b=b+l;
	  c=c+l;
	  d=d+l;
	  //printf("\n%d %d %d %d ",a,b,c,d);
	  s=d*100+c;
	  s=s*100+b;
	  s=s*10+a;
	
   printf("\n The required no is = %d",s);
   getch();
  }
