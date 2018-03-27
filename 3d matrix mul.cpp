#include<stdio.h>
int main()
{
	int i,j,k,sum;
	int a[3][3],b[3][3],c[10][10];
	
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("a[%d][%d]=",i,j);
	scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("b[%d][%d]=",i,j);
	scanf("%d",&b[i][j]);
	}
	}
	for(i=0;i<=2;i++)
	{
	for(j=0;j<=2;j++)
	{
	sum=0;
	for(k=0;k<=2;k++)
	{
	sum=sum+a[i][k]*b[k][j];
	
	printf("%d",sum);
	}
	c[i][j]=sum;
	printf("%d",sum);
	}
	}
	printf("\nA Matrix\n");
	
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%d \t",a[i][j]);
	}
	printf("\n");
	}
	printf("\nB Matrix\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	
	printf("%d \t",b[i][j]);
	}
	printf("\n");
	}
	printf("\nResultant Matrix\n");
	
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%d \t",c[i][j]);
	}
	printf("\n");
	}	
}

