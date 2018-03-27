 #include<iostream>

        using namespace std;
        int max(int arr[],int c)
        {
            int max=arr[0];
            for(int i=1;i<c;i++){
                if(arr[i]>max){
                    max=arr[i];
                }
            }
            return max;
        }
        int main() {
            int n,x,c=0,i=0,j=0;
            cin>>n;
            x=n;
            while(n!=0){
                n=n/10;
                c++;
            }
            int *a=new int[c];

            while(x!=0){
                a[i]=x%10;
                x=x/10;
                i++;
            }
            int r=max(a,c);
            int ans[r][c];
            for(int i=0;i<c;i++)
            {
                for(int j=0;j<r;j++)
                {
                    if(a[c-i-1]!=0){
                        ans[j][i]=1;
                        a[c-i-1]--;
                    }
                    else
                        ans[j][i]=0;
                }
            }
            for(i=0;i<r;i++){
                for(j=0;j<c;j++){
                    cout<<ans[i][j];
                }
                cout<<"\n";
            }

            }
            /*
			
			
			#include<iostream>
using namespace std;
int max(int a[],int c)
{
	int i,j,max=a[0];
	for(i=0;i<c;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
int main()
{
	int n;
	cin>>n;
	int r=0,c=0,i,j,a[50];
	while(n)
	{
		a[c]=n%10;
		n=n/10;
		c++;
	}
	r=max(a,c);
	int ans[r][c];
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			if(a[c-i-1]!=0)
			{
				ans[j][i]=1;
				a[c-i-1]--;
				
			}
			else
			{
				ans[j][i]=0;
				
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}*/
