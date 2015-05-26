#include<iostream>
#include<string>
using namespace std;
int main()
{
	int m,L,i,sum;  string a;
	while(cin>>a)
	{
		L=a.size();m=0;
		for(i=0;i<L;i++)
		m+=a[i]-'0';
		if(!m)  break;
		while(m>9)
		{
			sum=0;
			while(m)
			{
				sum+=m%10;
				m/=10;
			}
			m=sum;
		}
		cout<<m<<endl;
	}
	return 0;
}
