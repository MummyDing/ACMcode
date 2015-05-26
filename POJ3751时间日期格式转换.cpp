#include<iostream>
using namespace std;
int main()
{
	char PA[][3]={"am","pm"};
	int t,year,month,day,h,m,s;
	cin>>t;
	while(t--)
	{
		int ok=0;
		scanf("%d/%d/%d-%d:%d:%d",&year,&month,&day,&h,&m,&s);
		if(h>=12)
		ok=1;
		if(h>12)
		h-=12;
		if(h==0)
		h=12;
		printf("%02d/%02d/%d-%02d:%02d:%02d%s\n",month,day,year,h,m,s,PA[ok]);
		
	}
	return 0;
} 
