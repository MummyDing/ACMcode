#include<iostream>
#include<string>
int next[500000],result[500000];
using namespace std;
void get_next(string s,int next[])
{
	int L=s.size(),i=0,j=-1;
	next[0]=-1;
	while(i<L)
	{
		if(j==-1||s[i]==s[j])
		{
			i++;
			j++;
			next[i]=j;
		}
		else j=next[j];
	}
}
int main()
{
	string s;
	while(cin>>s)
	{
    int count=0;
	int L=s.size();
	get_next(s,next);
	result[0]=L;
	int i=L;
	while(next[i]>0)
	{
		result[++count]=next[i];
		i=next[i];
	}
	for(int i=count;i>0;i--)
	cout<<result[i]<<" ";
	cout<<result[0]<<endl;		
	}


	return 0;
}
