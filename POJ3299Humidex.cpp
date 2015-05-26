/*humidex = temperature + h
h = (0.5555)¡Á (e - 10.0)
e = 6.11 ¡Á exp [5417.7530 ¡Á ((1/273.16) - (1/(dewpoint+273.16)))]*/
#include<iostream>
#include<cmath>
#define E  2.718281828
using namespace std;
int main()
{
	double H,T,D,x,y,z; char a,b,c;
	while(cin>>a)
	{
		if(a=='E')
		break;
		cin>>x>>b>>y;
		int f1=1,f2=1,f3=1;
		switch (a)
		{
			case 'H':H=x;f1=0;break;
			case 'D':D=x;f2=0;break;
			case 'T':T=x;f3=0; break;
		}
		switch (b)
		{
			case 'H': H=y;f1=0;break;
			case 'D':D=y;f2=0;break;
			case 'T':T=y; f3=0;break;
		}
		if(f1)
		H= (0.5555)* (6.11 *pow(E,5417.7530 *((1/273.16) - (1/(D+273.16))))- 10.0)+T;
		else if(f2)
		D=1/(1/273.16-(log(E/6.11))/5417.7530 )-273.16;
		else if(f3)
		T=H-(0.5555)* (6.11 *pow(E,5417.7530 *((1/273.16) - (1/(D+273.16))))- 10.0);
	printf("T %.1lf D %.1lf H %.1lf\n",T,D,H);
	}
	return 0;
}
