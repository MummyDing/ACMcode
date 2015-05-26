#include<iostream>
using namespace std;
#define Max 20
char s[Max][Max];
int sum,m,n;
int res(int a,int b)
{
if(a<0||a>=n||b<0||b>=m)
{
	return 0;
}	
if(s[a][b]=='#')
return 0;
else 
{
	s[a][b]='#'; 
	return 1+res(a-1,b)+res(a,b-1)+res(a+1,b)+res(a,b+1);
}
}
int main()
{
	int i,j,x,y;
	while(cin>>m>>n)
	{
	sum=0;
	if(!m&&!n)
	break;
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	{
		cin>>s[i][j];
		if(s[i][j]=='@')
		{
			x=i;
			y=j;
		}
	}
	sum=res(x,y);
	cout<<sum<<endl;
		
	}
	return 0;
} 
