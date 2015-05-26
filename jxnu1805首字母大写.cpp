#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str; int i,j,star,m=32,L;
	while(getline(cin,str))
{
	L=str.size();
	star=0;
	for(i=0;i<L;i++)
	{
		if(str[i]==' '||str[i]=='\t'||str[i]=='\r'&&str[star]<='z'&&str[star]>='a')
		{
			   if(str[star]<='z'&&str[star]>='a')
			   str[star]&=95;
			star=i+1;
		}
	}
    if(str[star]<='z'&&str[star]>='a')str[star]&=95;
    cout<<str<<endl;
}
	return 0;
}
