#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=1;i<=2*n-1;i++)
		{
		for(int j=1;j<=abs(n-i);j++)
		cout<<' ';
		int j;
		for(j=1;j<=n-abs(n-i);j++)
		cout<<j;
		for(j=n-abs(n-i)-1;j>=1;j--)
		cout<<j;
		cout<<endl;
		} 
	}
	
	return 0;
}
