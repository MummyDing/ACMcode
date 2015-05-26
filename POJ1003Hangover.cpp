#include<iostream>
using namespace std;
int main()
{
	double j=2,m,sum,L[301];
	L[0]=0;
	for(int  i=1;i<=300;i++)
	{
		L[i]=1.0/double(i+1)+L[i-1];
	}
	while(cin>>m,m)
	{
		int falg=1,mid=150,left=1,right=300;
		while(falg)
		{
			if(L[mid]==m)
			{
				falg=0;
				cout<<mid;
			}
			else if(L[mid]<m)
			{
				if(m<=L[mid+1])
				{
					falg=0;
					cout<<mid+1;
				}
				else
				{
				left=mid;
				mid=(left+right)/2;		
				}
			}
			else 
			{
				if(m>=L[mid-1])
				{
					falg=0;
					cout<<mid;
				}
				else 
				{
					right=mid;
					mid=(right+left)/2;
				}
			}
		}
		cout<<" card(s)"<<endl;
	}
	return 0;
} 
