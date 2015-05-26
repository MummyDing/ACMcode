#include<iostream>
#include<string>
using namespace std;
int i,j,falg,m,n,t,k,S,T,y,mapx[4]={1,0,-1,0},mapy[4]={0,1,0,-1};
string str[50];

bool dfs(int s,int t )
{
	if(str[s][t]=='D')
	{
		if(k==y)
	return true;
	}
	
	else 
	{
		int ii,jj;
		for(ii=0;ii<t;ii++)
		{
			if((str[mapx[ii]][mapy[ii]]=='.'||str[mapx[ii]][mapy[ii]]=='D')&&(t+mapx[ii]<n)&&(t+mapx[ii]>=0)&&(s+mapy[ii]<m)&&(s+mapy[ii]>=0))
			{
				k++;
				str[mapx[ii]][mapy[ii]]=='X';
				dfs(s+mapx[ii],t+mapy[ii]);
				
			}
			else 
			{
			s-=mapx[ii];t-=mapy[ii];
			str[mapx[ii]][mapy[ii]]='.';
			k--;
			}
		}
	}
}
int main()
{
	while(cin>>m>>n>>y)
	{
	    if(!(m||n||y)) break; 
		k=0;
		for(i=0;i<m;i++)
		cin>>str[i];
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			if(str[i][j]=='S')
			{
				S=j;T=i;
			}
		}
		falg=dfs(S,T);
		if(falg) cout<<"YES\n";
		else cout<<"NO\n"; 
	}
}
