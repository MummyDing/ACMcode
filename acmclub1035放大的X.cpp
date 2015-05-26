#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int mid=( n+1)/2;
		for(int i=1;i<=n;i++)
		{
			int blank=fabs(mid-1-fabs(i-mid));
			for(int j=0;j<blank;j++)
			cout<<' ';
			cout<<'X';
			blank=fabs((fabs(i-mid)-1)*2+1);
			if(i!=mid)
			for(int j=0;j<blank;j++)
			cout<<' ';
			if(i!=mid)
			cout<<'X';
		    blank=fabs(mid-1-fabs(i-mid));  
			for(int j=0;j<blank;j++)
			cout<<' ';
			cout<<endl;	
		} 
	 cout<<endl;
	}
	return 0;
} 
