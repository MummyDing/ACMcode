#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int sum(char *s)
{
	int num=0,L=strlen(s);
	for(int i=0;i<L;i++)
	{
		num+=(s[i]-'0')*pow(10,L-1-i);
	}
	return num;
}
int calc(char *s,char c)
{
	int L=strlen(s);
	if(!s)
	return 0;
	if(L==1)
	{
		if(*s>=c)
		return 1;
		else return 0;
	}
	else 
	{
		if(*s==c)
		return 1+sum(s+1)+pow(10,L-2)*(L-1)+calc(s+1,c);
		else if(*s>c)
		{
			return pow(10,L-1)+pow(10,L-2)*(L-1)*(*s-'0')+calc(s+1,c); 	
		}
		else 
		{
			return pow(10,L-2)*(L-1)*(*s-'0')+calc(s+1,c); 	
		}
	}
}
int main()
{
	char p[100];
	while((scanf("%s",p))!=EOF)
	{
		cout<<calc(p,'1')<<endl;
	}
	return 0;
}
