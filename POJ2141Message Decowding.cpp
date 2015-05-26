#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
	string key1,key2="",str;
	cin>>key1;
	getchar();
	getline(cin,str);
	for(int i=0;i<26;i++)
	key2+=(char)(key1[i]-32);
	int L=str.size();
	for(int i=0;i<L;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		str[i]=key1[str[i]-'a'];
		else if(str[i]>='A'&&str[i]<='Z')
		str[i]=key2[str[i]-'A'];
	}
	cout<<str<<endl;
	return 0;
} 
