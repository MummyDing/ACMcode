#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
long long main()
{
	long long map[26];
	for(long long i=0;i<26;i++)
	map[i]=0;
	string str[4];
	for(long long i=0;i<4;i++)
	getline(cin,str[i]);
	for(long long i=0;i<4;i++)
	{
		long long L=str[i].size();
		for(long long j=0;j<L;j++)
		{
			if(str[i][j]<='Z'&&str[i][j]>='A')
			map[str[i][j]-'A']++;
		}
	}
	long long max=map[0];
	for(long long i=0;i<26;i++)
	{
		if(max<map[i])
		max=map[i];
	}
	for(;max>=1;max--)
	{
		for(long long i=0;i<26;i++)
		{
			if(map[i]>=max)
			{
				if(i!=25)
				cout<<"* ";
				else cout<<'*';
			}
			else if(i!=25)cout<<"  ";
			else cout<<' ';
		} 
		cout<<endl;
	}
	for(long long i=(long long)'A';i<(long long)'Z';i++)
	prlong longf("%c ",i);
	cout<<'Z'<<endl;
	return 0;
} 
