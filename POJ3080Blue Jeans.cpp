#include<iostream>
#include<string>
using namespace std;
string str[11],temp;
void get_next(string s,int next[])
{

	int i=0,j=-1,L=s.size();
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
int kmp_match(string s,string t)
{
	int L1=s.size(),L2=t.size(),next[100];
	int i=0,j=0;
	get_next(t,next);
	while(j<L2&&i<L1)
	{
		if(j==0||s[i]==s[j])
		{
			i++;
			j++;
		}
		else if(s[i]!=t[j])
		j=next[j];
	} 
	if(j>=L2)
	return -1;
	else 
	return 1;
}
int main()
{
	int t,m,pos=0;
	//输入测试数据的组数t 
	cin>>t;
	while(t--)
	{
		//输入m行碱基 
		cin>>m;    
		for(int i=0;i<m;i++)
		cin>>str[i];
		int len=0;string res="";    
		for(int i=3;i<=str[0].size();i++)
		{
			res=""; 
		    for(int j=0;j<i-2;j++)
		    {
		    	temp=str[0].substr(j,i);
		    int falg =1;
		    for(int k=1;k<m;k++)
		    {
		  	if(str[k].find(temp)==string ::npos)
		  	{
		  		falg=0;
		  		break;
		  	}
			else if(temp.size()>=len)
			{
				if((temp.size()==len&&res>temp)||temp.size()>len)
				{
					res=temp;
					len=temp.size();
				} 
			}
			}
		    }
		}
		if(res.size()>2)
		cout<<res<<endl;
		else
		cout<<"no significant commonalities"<<endl;
	}
	return 0;
} 
