#include<iostream>
#include<string>
#include<string.h>
#define Max 110
int a[Max],b[Max],L,i;
using namespace std;
void add()
{
	for(i=0;i<L;i++)
	{
		a[i]+=b[i];
		if(a[i]>9)
		{
			a[i]-=10;
			a[i+1]++;
		}
	}
}
int main()
{
	string str;  int falg,n;
	cin>>n;
	while(n--)
	{
		memset(a,0,sizeof(a));
		falg=1;
		while(cin>>str)
		{
			memset(b,0,sizeof(b));
			L=str.size();
			if(L==1&&str[0]=='0')
			{
				break;
			}
			for(i=0;i<L;i++)
			{
				b[L-i-1]=str[i]-'0';
			}
			add();
		}
		for(i=Max-1;a[i]==0&&i>0;) i--;
		for(;i>=0;i--)
		cout<<a[i];	
		printf(n!=0 ? "\n\n":"\n");
	}
	return 0;
} 
