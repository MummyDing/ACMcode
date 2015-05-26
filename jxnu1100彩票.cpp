#include<iostream>
using namespace std;
int m=6,n,a[50]={0},b[50],c[50];
void print(int m)
{
	for(int i=1;i<m;i++)
	cout<<c[i]<<" ";
	cout<<c[m]<<endl;
}
void dfs (int i)
{
	for(int j=a[i-1]+1;j<=n;j++)
	{
		a[i]=j;
		c[i]=b[j];
		if(i==m)
		print(i);
		else dfs(i+1);
		
	}
}
int main()
{
	while(1)
	{
	cin>>n;
	if(!n)
	break;
	for(int i=1;i<=n;i++)
	cin>>b[i];
	dfs(1);	
	cout<<endl;	
	}

	return 0;
}  
