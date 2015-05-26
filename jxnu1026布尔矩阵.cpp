#include<iostream>
#include<cstring>
using namespace std;
#define M 104
int mat[M][M];
int main()
{
	int n;
	while(cin>>n,n)
	{
		int x=-1,x_i=0,y=-1,y_i=0;
		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			cin>>mat[i][j];
		}
		for(int i=1;i<=n;i++)
		{
			int falg=mat[i][1];
		for(int j=2;j<=n;j++)
		{
			falg^=mat[i][j];
		}
		if(falg)
		{
			x=i;
			x_i++;
		}
		}
	
		for(int j=1;j<=n;j++)
		{
		int falg=mat[1][j];
		for(int i=2;i<=n;i++)
		{
			falg^=mat[i][j];
		}
		if(falg)
		{
			y=j;
			y_i++;
		}
		}
		if(x==-1&&y==-1)
		cout<<"OK\n";
		else if((x==-1&&y!=-1)||(x!=-1&&y==-1))
		cout<<"Corrupt\n";
		else 
		{
			if(x_i==1&&y_i==1)
			printf("Change bit (%d,%d)\n",x,y);
			else cout<<"Corrupt\n";
		}
	}
	return 0;
} 
