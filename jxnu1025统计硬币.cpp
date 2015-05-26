#include<iostream>
using namespace std;
int main()
{
	int k,a1,a2,a5,sum,num,count,n,m;
	cin>>k;
	while(k--)
	{
		count=0;
		cin>>n>>m;
		for(a5=0;a5*5<=m;a5++)
		for(a2=0;a2*2+a5*5<=m;a2++)
		{
			a1=m-a2*2-a5*5;
			if(a1+a2+a5==n)
			count++;
		} 
		cout<<count<<endl; 
	}
	return 0;
} 
