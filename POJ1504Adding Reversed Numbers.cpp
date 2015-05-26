#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#define M 100
using namespace std;
string Add(string a,string b)
{
	string c="";
	int L1=a.size(),L2=b.size();
//	cout<<L1<<endl;
	int num1[M],num2[M];
	memset(num1,0,sizeof(num1));
	memset(num2,0,sizeof(num2));
	for(int i=L1-1;i>=0;i--)
	num1[L1-i-1]=a[i]-'0';
	//for(int i=0;i<=L1;i++)
	//cout<<num1[i];
	//cout<<endl;
	for(int i=L2-1;i>=0;i--)
	num2[i]=b[L2-1-i]-'0';
	for(int i=0;i<=L1+L2;i++)
	{
		num1[i]+=num2[i];
		if(num1[i]>9)
		{
			num1[i+1]+=num1[i]/10;
			num1[i]%=10;
		}
	}

	int bit;
	for(int i=L1+L2;i>=0;i--)
	if(num1[i])
	{
		bit=i;
		break;
	}
	int falg=0;
	for(int i=0;i<=bit;i++)
	{
		if(num1[i])
		{
		c+=num1[i]+'0';
		falg=1;	
		}
		else if(falg)
		c+=num1[i]+'0';
	}
	return c;
}
string F(string k)
{
	string c=k;
	int L=k.size();
	for(int i=L-1;i>=0;i--)
	if(c[i]!='0')
	{
		L=i;
		break;
	}
	c[L+1]='\0';
	for(int i=L;i>=0;i--)
	c[L-i]=k[i];	
	return c;
}
int main()
{
	int n;string a,b,c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		a=F(a);
		b=F(b);
	
		c=Add(a,b);
		cout<<c<<endl;
	//	cout<<c<<endl;
	//	cout<<F(c)<<endl;
	}
	return 0;
}
