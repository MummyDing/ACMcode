#include<iostream>
#include<string>
using namespace std;
string str[16];
string sort[16];
int main()
{
	int n,count=0;
	while(cin>>n&&n)
	{
		for(int i=1;i<=n;i++)
		cin>>str[i];
		for(int i=1;i<=n;i++)
		{
			if(i&1)
			sort[(i+1)/2]=str[i];
			else 
			sort[n-i/2+1]=str[i];
		}
		count++;
		cout<<"SET "<<count<<endl;
		for(int i=1;i<=n;i++)
		cout<<sort[i]<<endl;
	}	
	return 0;
}
