#include<iostream>
using namespace std;
int main()
{
	int a[12][2],n,start1,start2,end;
	while(cin>>n)
	{
		int sum1=0,sum2=0;
		for(int i=0;i<n;i++)
		cin>>a[i][0]>>a[i][1];
		start1=1,start2=2;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(start1==a[j][0])
				{
					start1=a[j][1];
					sum1++;	
				}
				if(start2==a[j][0])
				{
					start2=a[j][1];
					sum2++;
				}
			}
		}
		if(sum1>sum2)
		cout<<"You are my elder\n";
		else if(sum1<sum2)
		cout<<"You are my younger\n";
		else cout<<"You are my brother\n"; 
	} 
	
	return 0;
} 
