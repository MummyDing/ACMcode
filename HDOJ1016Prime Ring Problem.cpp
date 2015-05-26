#include<iostream>
#include<cmath>
#include<cstdio>
#define Max 100
using namespace std;
int t,a[Max],b[Max]={0};
bool Isprime(int i)
{
	if( i==2 || i==3 || i==5 || i==7 || i==11 ||
		i==13 || i==17 || i==19 || i==23 || 
		i==29 || i==31 || i==37 || i==39 )
		return 1;
	else return 0;
}
void dfs(int k)
{
		if(k==t+1)
			{
				if(!Isprime(1+a[t]))
				return ;
				for(int ii=1;ii<=t;ii++)
				printf(ii==t ? "%d\n":"%d ",a[ii]);
			}
	for(int i=2;i<=t;i++)
	{
		if(b[i])
		continue;
		if(Isprime(a[k-1]+i))
		{
			a[k]=i;
			b[i]=1;
			dfs(k+1);
			b[i]=0;
		}
	}	
}
int main()
{
	int count=0;
	while(cin>>t)
	{
		count++;
		cout<<"Case "<<count<<":"<<endl;
		a[1]=1;
		b[1]=1;
		dfs(2);
		cout<<endl;
	}
	return 0;
}
