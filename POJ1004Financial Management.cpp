#include<iostream>
using namespace std;
int main()
{
	double temp,sum=0;
	for(int i=0;i<12;i++)
	{
		cin>>temp;
		sum+=temp;
	}
	printf("$%.2lf\n",sum/12);
	return 0;
} 
