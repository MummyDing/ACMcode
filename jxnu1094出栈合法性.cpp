#include<iostream>
using namespace std;
int main()
{
	int n,a[101],now,ok=1,temp,p;
	while(cin>>n,n)
	{
		ok=1;
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
		p=now=a[i];
		for(int j=i+1;j<n;j++)
		{
		if(a[j]<now)
		{
			temp=p;
			p=a[j];	
			if(temp<p)
			{
				ok=0;
				break;
			}
		}
		}		
		}
		printf(ok ?"Yes\n":"No\n");
	}
	return 0;
} 
