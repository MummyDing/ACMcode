#include<iostream>
#include<cmath>
using namespace std;
int Is_prime(double k)
{
	if(k<2)
	return 0;
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
	int a,d,n;
	while(scanf("%d%d%d",&a,&d,&n)!=EOF)
	{
		if(!(a||d||n))
		break;
		int count=0,sum=a;
		for(;count!=n;sum+=d)
		{
			if(Is_prime(sum))
				count++;
		}
		cout<<sum-d<<endl;
	}
	return 0;
}
