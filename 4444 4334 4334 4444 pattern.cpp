#include <iostream>
#define N 100
using namespace std;
int pattern[N][N];
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n/2; i++) {
        for(int j=i; j<n/2; j++) {
            pattern[i][j] = n-i;
			pattern[j][i] = n-i;
            pattern[n-i][j] = n-i;
            pattern[j][n-i] = n-i;
        }
    }
    
    for(int i=0; i<n/2; i++) 
	{
    for(int j=0; j<n/2; j++) 
	cout<<pattern[i][j];
    for(int j=(n/2)-1; j>=0; j--) 
	cout<<pattern[i][j];
    cout<<endl;
    }
    for(int i=(n/2)-1; i>=0; i--) 
	{
    for(int j=0;j<n/2;j++) 
	cout<<pattern[i][j];
    for(int j=(n/2)-1;j>=0;j--) 
	cout<<pattern[i][j];
    cout<<endl;
    }
    return 0;
}

