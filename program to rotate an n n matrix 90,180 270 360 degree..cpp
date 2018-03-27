#include<iostream>
using namespace std;
#define M 4
void displaymatrix(int mat[][M],int N)
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<"  "<<mat[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
}
void rotatematrix(int mat[][M],int N)
{
	int x,y,temp;
	for(x=0;x<N/2;x++)
	{
		for(y=x;y<N-1-x;y++)
		{
			temp=mat[x][y];
			mat[x][y]=mat[y][N-1-x];
			mat[y][N-1-x]=mat[N-1-x][N-1-y];
			mat[N-1-x][N-1-y]=mat[N-1-y][x];
			mat[N-1-y][x]=temp;
		}
	}
}
int main()
{

	int N;
	cout<<"enter n*n \n";
	cin>>N;
	int mat[M][M];
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<"mat["<<i<<"]"<<"["<<j<<"] = ";
			cin>>mat[i][j];
			cout<<endl;
		}
	}
	int deg;
	cout<<"enter degree";
	cin>>deg;
	
	while(deg!=0)
	{
		deg=deg-90;
		rotatematrix(mat,N);
		displaymatrix(mat,N);
	}

}
