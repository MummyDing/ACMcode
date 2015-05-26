#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	string str,ch; int a[100],m,i,L,j,k;
	cin>>m;
	while(m--)
	{
		memset(a,0,sizeof(a));
		cin>>str;
		L=str.size();  k=0;
		for(i=0;i<L;i++)
	{
		if(str[i]==str[i+1])
		{
			a[k]++;
			ch[k]=str[i];
		}
		else 
		{
		a[k]++;
		ch[k]=str[i];
		k++;	
		}
	}
	for(i=0;i<k;i++)
	{
		if(a[i]>1)
		{
			printf("%d%c",a[i],ch[i]);
		}
		else if(a[i]==1)
		printf("%c",ch[i]);
	}
	cout<<endl;
	
	}
	
	
	return 0;
}
