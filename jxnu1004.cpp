#include<iostream>
using namespace std;
#define Max 100
int main()
{
	int N,n,i,j,k,sum;
	cin>>N;
	for(k=0;k<N;k++)
	{
		cin>>n;
		sum=0;
		if(n==0) break;
		for(i=0;i<n;i++)
		{
		cin>>j;
		sum+=j;
		}
	cout<<sum<<endl;
	}
}
