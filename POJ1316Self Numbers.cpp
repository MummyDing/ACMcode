#include<iostream>
#define M 10000
int N[M],n,sum;
using namespace std;
int main()
{
	for(int i=0;i<M;i++)
	N[i]=1;
	for(int i=1;i<M;i++)
	{
		n=i;
		sum=0;
		while(n)
		{
			sum+=(n%10);
			n/=10;
		}
		sum+=i;
		if(sum<M)
		N[sum]=0;
	}
	for(int i=1;i<M;i++)
	{
		if(N[i])
		cout<<i<<endl;
	}
	return 0;
}
