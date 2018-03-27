/*
Given two dimensional matrix of integer and print the rectangle can be formed using given indices and also find the sum of the elements in the rectangle
Input: mat[M][N] = {{1, 2, 3, 4, 6}, {5, 3, 8, 1, 2}, {4, 6, 7, 5, 5}, {2, 4, 8, 9, 4} };
index = (2, 0) and (3, 4)
Output:
Rectangle
4 6 7 5 5
2 4 8 9 4
sum 54
*/#include<iostream>
using namespace std;
#define M 50
#define N 50
int printSum(int x1,int y1,int x2,int y2,int mat[M][N])
{
	int i,j,sum=0;
	for(i=x1;i<=x2;i++)
	{
		for(j=y1;j<=y2;j++)
		{
			sum+=mat[i][j];
		}
	}
	return sum;
}
int main()
{
	int mat[][N]={{1, 2, 3, 4, 6}, {5, 3, 8, 1, 2}, {4, 6, 7, 5, 5}, {2, 4, 8, 9, 4}};
	int x1,y1,x2,y2;
	cout<<"enter indices";
	cin>>x1>>y1>>x2>>y2;
	int res=printSum(x1,y1,x2,y2,mat);
	cout<<"\nResult is"<<res;
}
