#include<iostream>
#include<string>
#include<cstring>
#include <algorithm>
using namespace std;
struct S
{
string name;
int age;
double sorce;	
};
bool cmp(S a,S b)
{
	char c,d;
	if(a.sorce!=b.sorce) return a.sorce>b.sorce;
	 if(a.name==b.name)
       return a.age<b.age;
       return a.name>b.name ;
}
S a[1000];
int main()
{
	 int i,j,m;
	while(cin>>m)
	{
		for(i=0;i<m;i++)
		{
			cin>>a[i].name;
			cin>>a[i].age;
			cin>>a[i].sorce;
		}
		sort(a,a+m,cmp);
			while(m--)
	{
		cout<<a[m].name<<" ";
	    cout<<a[m].age<<" ";
	    cout<<a[m].sorce<<endl;
	}
}
	return 0;
}
