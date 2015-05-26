#include<iostream>
using namespace std;
int a[20];
int main()
{
	while(cin>>a[0]&&a[0]!=-1)
	{   int sum=1,ok=0;
		for(int i=1;;i++)
		{
			cin>>a[i];
			sum++;
			if(!a[i])
			break;
		}
		for(int i=0;i<sum;i++)
		{
			int temp=a[i]*2;
			for(int j=0;j<sum;j++)
			{
				if(i!=j&&temp==a[j])
				ok++;
			}
		}
		cout<<ok<<endl;
	}
	return 0;
} 
