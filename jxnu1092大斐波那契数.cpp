#include<iostream>
#include<string>
#include<cstring>
#define M 1001
using namespace std;
int result[M],LL;
string str;
int *add(int x[],int y[])
{
	
}
int *f(int x[],int L)
{
	int y[M];
	for(int i=L-1;i>=0;i--)
	if(x[i])
	{
		L=i+1;
		break;
	}
	for(int i=0;i<L;i++)
	{
		if(x[i]>9)
		{
			x[i+1]+=x[i]/10;
			x[i]%=10;
		}
	}
	for(int i=0;i<LL;i++)
	{
		y[i]=x[i];
	}
	y[0]-=2;
		for(int i=0;i<LL;i++)
	{
		if(y[i]>9)
		{
			y[i+1]+=y[i]/10;
			y[i]%=10;
		}
	}
	if(L==1&&(x[0]=='1')||(x[0]=='1'))
	{
	x[0]++;
	return x;	
	}
	return add(f(x,L),f(y,L));
}
int main()
{
	while(cin>>str)
	{
		int *p;
		memset(result,0,sizeof(result));
		memset(a,0,sizeof(a));
		int L=str.size();
		for(int i=0;i<L;i++)
		a[i]=str[L-1-i]-'0';
		p=f(a,L);
		for(int i=2;i>=0;i--)
		cout<<p[i]<<" ";
	}
	
	return 0;
}
