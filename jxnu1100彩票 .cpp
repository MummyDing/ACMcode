#include<iostream>
using namespace std;
#define Max 100
int a[Max],b[Max],t;
void comb(int  k)
{
	if(k==6)
	{
		for(int i=0;i<k;i++)
		printf(i==k-1? "%d\n":"%d ",b[i]);
	}
	for(int i=k;i<t;i++)
	{
		b[k]=a[i];
		comb(k+1);
	}
	
}
int main()
{
	while(cin>>t)
	{
		int i;
		if(!t)
		break;
		for(i=0;i<t;i++)
		cin>>a[i];
		comb(0);
	}
	
	return 0;
} 
