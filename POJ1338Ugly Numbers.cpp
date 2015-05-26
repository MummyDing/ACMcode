#include<iostream>
#define M 300000000000
using namespace std;
int num[M]={0};
int  ugly[505]={};
int main()
{
	
	
	for(int i=1;i<=M;i++)
	{
		if(count==500)
		break;
		if(num[i])
		{
		count++;
		ugly[count]=i;	
		}
	}
	cout<<count<<endl;
	while(cin>>n)
	cout<<ugly[n]<<endl;
	return 0;
}
