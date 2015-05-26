#include<iostream>
#include<string> 
using namespace std;
int main()
{
	string s;int quicksum;
	while(getline(cin,s))
	{
		if(s[0]=='#')
		break;
		quicksum=0;
		int L=s.size();
		for(int i=0;i<L;i++)
		{
			if(s[i]!=' ')
			quicksum+=(i+1)*(s[i]-'A'+1);
		}
		cout<<quicksum<<endl;
	}
	return 0;
}
