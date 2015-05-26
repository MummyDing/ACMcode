#include<iostream>
#include<cmath>
#include<algorithm>
#define M 10005
using namespace std;
double a[M],b[M];
int main()
{
	int n;double s=4500;
	while(cin>>n&&n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
			if(b[i]>=0)
			{
			a[i]=s/(a[i]*(1000/3600.0));
			b[i]+=a[i];	
			}
		}
		sort(b,b+n);
		double min=b[n-1];
		for(int i=0;i<n;i++)
		{
			if(min>b[i]&&(b[i]>0))
				min=b[i];
		}
		min=ceil(min);
		cout<<min<<endl;
	}
	return 0;
} 
