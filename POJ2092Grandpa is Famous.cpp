#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int p[10005],result[10001],q[10005];
int main()
{
	int N,M;
	while(cin>>N>>M)
	{
		if(!N&&!M)
		break;
		memset(p,0,sizeof(p));
		memset(q,0,sizeof(q)); 
		int sum=N*M,temp,max=0,min,count=0;
		for(int i=0;i<sum;i++)
		{
			cin>>temp;
			p[temp]++;
			q[temp]++;
		}
		sort(p,p+10005);
		max=p[10003];//第二大的数字 
		for(int i=1;i<10001;i++)
		{
			if(q[i]==max)
			result[++count]=i;
		}
		for(int i=1;i<count;i++)
		cout<<result[i]<<" ";
		cout<<result[count]<<endl;
	}
	
	return 0;
} 
