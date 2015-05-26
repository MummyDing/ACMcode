#include<iostream>
#define M 1000005
using namespace std;
int t[M];
int main()
{
	int i,j,max,count,n;
	while(cin>>i>>j)
	{
		int temp;
		if(i>j)
		{
			temp=i;
			i=j;
			j=temp;
		}
		for(int ii=i;ii<=j;ii++)
		t[ii]=0;
		for(int ii=i;ii<=j;ii++)
		{
			n=ii;
			count=0;
			while(1)
			{
			if(n==1)
			break;
			count++;
			if(n%2==1)
			n=3*n+1;
			else n/=2;	 		
			}
			t[ii]=count;
		}
		max=t[i];
		for(int i1=i;i1<=j;i1++)
		{
			if(max<t[i1])
			max=t[i1];
		}
		cout<<i<<" "<<j<<" "<<max+1<<endl;
	}
	return 0;
}
