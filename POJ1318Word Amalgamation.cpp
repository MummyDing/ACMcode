#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string dir[105],strX="XXXXXX",stars="******",dir2[105],word[200],word2[200];
void sort_in(string &s,int len)
{
	char temp;
	for(int i=len-1;i>=0;i--)
	for(int j=0;j<i;j++)
	{
		if(s[i]<s[j])
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
	}
}
int main()
{
	int count1,count2;
	for(int i=0;;i++)
	{
		cin>>dir[i];
		dir2[i]=dir[i];
		if(dir[i]==strX)
		{
			count1=i;
			break;
		}
	}
	sort(dir,dir+count1);
	sort(dir2,dir2+count1);
	for(int i=0;;i++)
	{
		cin>>word[i];
		word2[i]=word[i];
		if(word[i]==strX)
		{
			count2=i;
			break;
		}
	}
	for(int i=0;i<count1;i++)
		sort_in(dir2[i],dir2[i].size());
	for(int i=0;i<count2;i++)
	    sort_in(word2[i],word2[i].size());
	for(int i=0;i<count2;i++)
	{
		string temp=word2[i];
		int falg=1;
		for(int j=0;j<count1;j++)
		{
			if(temp==dir2[j])
			{
				falg=0;
				cout<<dir[j]<<endl;
			}
		}
		if(falg)
		cout<<"NOT A VALID WORD"<<endl; 
		cout<<stars<<endl;
	}
	
	return 0;
}
