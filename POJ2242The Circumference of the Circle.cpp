#include<iostream>
#include<cmath>
const double PI=3.141592653589793;
using namespace std;
struct P
{
	double x;
	double y;
};
int main()
{
	P A,B,C; 
	double a,b,c,p,s,d,L;
	while(cin>>A.x>>A.y)
	{
		cin>>B.x>>B.y>>C.x>>C.y;
		a=sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
		b=sqrt((B.x-C.x)*(B.x-C.x)+(B.y-C.y)*(B.y-C.y));
		c=sqrt((A.x-C.x)*(A.x-C.x)+(A.y-C.y)*(A.y-C.y));
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		d=(a*b*c)/(2*s);
		L=PI*d;
		printf("%.2lf\n",L);
	}
	return 0;
} 
