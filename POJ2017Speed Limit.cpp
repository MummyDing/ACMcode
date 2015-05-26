#include<iostream>
using namespace std;
int main()
{
	int n,s,v,t1,t2;
	while(cin>>n&&n!=-1)
	{
		t1=0;
		s=0;
		for(int i=0;i<n;i++)
		{
			cin>>v>>t2;
			s+=v*(t2-t1);
			t1=t2;
		}
		cout<<s<<" miles\n";
	}
	return 0;
}
