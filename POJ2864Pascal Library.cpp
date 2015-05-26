#include<iostream>
using namespace std;
int s[105];
int main()
{
	int N,D;
	while(cin>>N>>D&&(N||D))
	{
		int falg=0,temp;
		for(int i=0;i<N;i++)
		s[i]=1;
		for(int i=0;i<D;i++)
		{
		for(int j=0;j<N;j++)
		{
			cin>>temp;
			s[j]&=temp;
		}
		}
		for(int i=0;i<N;i++)
		{
			if(s[i])
			falg=1;
		}
		if(falg)
		cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}
