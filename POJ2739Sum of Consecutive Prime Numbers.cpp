#include<iostream>
#include<cmath>
#define M 10005
using namespace std;
int prime[M];
int Is_prime(double k)
{
	int falg=1;
	for(double i=2;i<=sqrt(k);i++)
	{
		if((int)k%(int )i==0&&k!=i)
		falg=0; 
	}
	return falg;
}
int main()
{
	int count=0,sum=0;
    for(int i=2;i<M;i++)
	{
		if(Is_prime(i))
		{
			prime[count]=i;
			count++;
		}
	} 
	int num;
	while(cin>>num&&num)
	{
	int S=0;
	for(int i=0;i<=count;i++)
	{
		if(prime[i]>num)
		break;
		int sum=0;
		for(int j=i;j<=count;j++)
		{
			sum+=prime[j];
			if(sum==num)
			{
				S++;
				break;
			}
			else if(sum>num)
			break;
		}
	}
	cout<<S<<endl;		
	}

	return 0;
} 
