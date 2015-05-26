#include<iostream>
#define M 1000000
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
string str;
int main()
{
	int t,m,count;
	char  temp[]="              ";
	str=" ";
	count=0;
	for(int ii=1;ii<=M;ii++)
	{
		for(int k=1;k<=ii;k++)
		{
		sprintf(temp,"%d",k);
		for(int j=0;j<strlen(temp);j++)
			str+=temp[j];	
		}
		if(str.size()>2147483647)
		break;
	}
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	scanf("%d",&m);
	printf("%c\n",str[m]);
	}
	return 0;
}
