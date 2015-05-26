#include<iostream>
#include<cmath>
#define M 8
#define N 8
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int m,n,s,t,k,ix,iy,falg;
char a[N][M]; 
using namespace std;
void dfs(int x,int y,int count)
{
	if(x==s&&y==t&&count==k)	 falg=1;
	if(x<0||x>n||y<0||y>m||falg)
	return ;
	int temp=(k-count)-abs(ix-x)-abs(iy-y);
	if(temp<0||temp&1)//ÆæÅ¼ÓÅ»¯ 
	return ;
	for(int i=0;i<4;i++)
	{
		if(a[x+dir[i][0]][y+dir[i][1]]!='X'&&(x+dir[i][0])>=0&&(x+dir[i][0])<n&&(y+dir[i][1])>=0&&(y+dir[i][1])<m)
		{
			a[x][y]='X';
			dfs(x+dir[i][0],y+dir[i][1],count+1);
			a[x][y]='.';
		}
	}

}
int main()
{
	while(cin>>n>>m>>k)
	{
		int black=0; 
		if(m==0&&(n==0)&&(k==0))
		break;
		falg=0;
		int x,y;
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
		cin>>a[i][j];
		if(a[i][j]=='X')
		black++;
		if(a[i][j]=='S')
		{
			x=i;	y=j;
			a[i][j]='X';
		}		
		else if(a[i][j]=='D')
		{
			ix=s=i;	iy=t=j;
			a[i][j]='.';
		}
		}
		//¼ôÖ¦ 
		if((abs(x-s)+abs(y-t))>k||(n*m-black<k))
		{
			cout<<"NO"<<endl;
			continue;
		}
		dfs(x,y,0);
		if(falg)
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
} 

