#include<iostream>
#include<cmath>
using namespace std;
const double PI=3.1415926535898;
int main() 
{
	int t;double x,r,y,s;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int count=0;
		cin>>x>>y;
		r=sqrt(x*x+y*y);
		s=r*r*PI/100.0;
		count=ceil(s);
		printf("Property %d: This property will begin eroding in year %d.\n",t,count);
	}
	printf("END OF OUTPUT.\n");
	return 0;
}
