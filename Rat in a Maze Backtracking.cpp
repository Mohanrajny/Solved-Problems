/*
. NxN matrix will be provided. 0->block, 1->Not a block
Always starting point is (0,0), Ending point is (N-1,N-1).
You have to go from starting point to ending point. One valid solution is enough.
Example:

 
   Input:
   N=4 
   1 1 0 0
   1 0 0 1
   1 1 1 1
   0 0 0 1
   Output:
   _ 1 0 0
   _ 0 0 1
   _ _ _ _
   0 0 0 _
*/
#include<iostream>
#define N 4 
using namespace std;
bool solvemazeutil(char maze[N][N],int x,int y);
void printsol(char maze[N][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		cout<<maze[i][j]<<" ";
		
		cout<<endl;
	}
}
int solvemaze(char maze[N][N])
{

	if(solvemazeutil(maze,0,0)==false)
	{
		cout<<"Solution Doesnt Exist";
		return 0;
	}
	printsol(maze);
	return 0;
}
bool isSafe(char maze[N][N],int x,int y)
{
	if(x>=0 &&x<N && y>=0 && y<N &&maze[x][y]=='1')
		return true;
	
	return false;
}
bool solvemazeutil(char maze[N][N],int x,int y)
{
	if(x==N-1 && y==N-1)
	{
		maze[x][y]='_';
		return true;
	}
	if(isSafe(maze,x,y)==true)
	{
		maze[x][y]='_';
		if(solvemazeutil(maze,x+1,y)==true)
		return true;
		
		if(solvemazeutil(maze,x,y+1)==true)
		return true;
		
		maze[x][y]=0;
		return false;
	}
	return false;
	
}
int main()
{
	char maze[N][N];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		cin>>maze[i][j];
	}
	solvemaze(maze);
	return 0;
 } 
/*
/* C/C++ program to solve Rat in a Maze problem using
   backtracking */
#include<stdio.h>
 
// Maze size
#define N 4 
 
bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N]);
 
/* A utility function to print solution matrix sol[N][N] */
void printSolution(int sol[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf(" %d ", sol[i][j]);
        printf("\n");
    }
}
 
/* A utility function to check if x,y is valid index for N*N maze */
bool isSafe(int maze[N][N], int x, int y)
{
    // if (x,y outside maze) return false
    if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
        return true;
 
    return false;
}
 
/* This function solves the Maze problem using Backtracking.  It mainly
   uses solveMazeUtil() to solve the problem. It returns false if no 
   path is possible, otherwise return true and prints the path in the
   form of 1s. Please note that there may be more than one solutions, 
   this function prints one of the feasible solutions.
bool solveMaze(int maze[N][N])
{
    int sol[N][N] = { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
 
    if(solveMazeUtil(maze, 0, 0, sol) == false)
    {
        printf("Solution doesn't exist");
        return false;
    }
 
    printSolution(sol);
    return true;
}
 
/*
// A recursive utility function to solve Maze problem 
bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N])
{
    // if (x,y is goal) return true
    if(x == N-1 && y == N-1)
    {
        sol[x][y] = 1;
        return true;
    }
 
    // Check if maze[x][y] is valid
    if(isSafe(maze, x, y) == true)
    {
        // mark x,y as part of solution path
        sol[x][y] = 1;
 
        // Move forward in x direction 
        if (solveMazeUtil(maze, x+1, y, sol) == true)
            return true;
 
        // If moving in x direction doesn't give solution then
          ]
        if (solveMazeUtil(maze, x, y+1, sol) == true)
            return true;
 
        //If none of the above movements work then BACKTRACK: 
            //unmark x,y as part of solution path 
        sol[x][y] = 0;
        return false;
    }   
 
    return false;
}
 
// driver program to test above function
int main()
{
    int maze[N][N]  =  { {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
 
    solveMaze(maze);
    return 0;
}
*/
