#include<iostream>
using namespace std;
int a;
int main()
{
	while(cin>>a)
	{
		while(a%5==0&&a!=1)
		{
			a/=5;
		}
		while(a%3==0&&a!=1)
		{
			a/=3;
		}
		while(a%2==0&&a!=1)
		{
			a/=2;
		}
		if(a!=1)
		cout<<0<<endl;
		else cout<<1<<endl;
	}	
	return 0;
} 
