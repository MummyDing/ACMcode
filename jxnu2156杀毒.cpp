#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a,b,c;int i,j,m,n;
	while(cin>>a>>b)
	{
		m=a.size();
		n=b.size();
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			if(b[i]==a[j])
			a[j]=' ';
		}
		for(i=0;i<m;i++)
		if(a[i]!=' ')
		cout<<a[i];
		cout<<endl; 
	}
	
	return 0;
}
