#include<iostream>
using namespace std;
int main()
{
	int m,i,x,y,max,min,a[20];
	while(cin>>m)
	{
		cin>>a[0];
		max=min=a[0];    x=y=0;
		for(i=1;i<m;i++)
		{
			cin>>a[i];
			if(max<a[i])
			{
				max=a[i];
				x=i;
			}
			if(min>a[i])
			{
				min=a[i];
				y=i;
			}
		}
		a[y]=max;  a[x]=min;
		for(i=0;i<m;i++)
		{
			printf(i==m-1?"%d\n":"%d ",a[i]);
		}
		}
		return 0;
} 
