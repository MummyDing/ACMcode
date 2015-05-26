#include<iostream>
#include<cmath>
using namespace std;
int m,T,H,D,falg;
void Ten()
{
	int n=m;T=0;
	for(int i=0;i<4;i++)
	{
		T+=n%10;
		n/=10;
	}	
}
void Hex()
{
	int n=m;H=0;
	for(int i=0;i<4;i++)
	{
		H+=n%16;
		n/=16;
	}
}
void Duo()
{
	int n=m;D=0;
	for(int i=0;i<4;i++)
	{
		D+=n%12;
		n/=12;
	}	
}
int main()
{
	for(int i=2992;i<10000;i++)
	{
		 m=i;
		 falg=1;
		 Ten();
		 Hex();
		 Duo();
		 if(T==H&&T==D)
		 {
		 	cout<<i<<endl;
		 }
	}
	return 0;
}
 
