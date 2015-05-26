#include<iostream>
#include<cmath>
#include<cstring>
#include<stdio.h>
using namespace std;
double V,dis=0,time,H,M,S,h,m,s,a,b,c; 
string v;
void T()
{
	if(s>=S)
	{
		time+=(s-S)/3600.0;
	}
	else 
	{
		m--;
		time+=(s-S+60)/3600.0;
	}
	if(m>=M)
	{
		time+=(m-M)/60.0;
	}
	else
	{
		h--;
		time+=(m-M+60)/60.0;
	}
	while(m<0)
	{
		h--;
		m+=60;
	}
	time+=h-H;
	
}
void e()
{
		h=a; m=b; s=c;	
}
void E()
{
		H=a; M=b; S=c;
}
void change()
{
	V=0;
	int L,i;
	L=v.size();
   for(i=1;i<L;i++)
	{
		V+=pow(10,L-i-1)*(v[i]-'0');
	}
}
int main()
{
	scanf("%lf:%lf:%lf%lf",&H,&M,&S,&V);
	while(scanf("%lf:%lf:%lf",&a,&b,&c)!=EOF)
	{
	getline(cin,v);
		if(!v.size())
		{                               
			e();
			time=0;
	         T();
			dis+=V*time;
			printf("%02d:%02d:%02d %.2lf km\n",(int)a,(int)b,(int)c,dis);
			E();
		}
		else 
		{
			e();
			time=0;
	        T();
			dis+=V*time;
		   change();
			E();
		}
	}
	return 0;
}
