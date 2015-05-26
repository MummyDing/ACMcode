#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	double money,Do_RMB[12];
	cin>>money;
	for(int i=0;i<12;i++)
	cin>>Do_RMB[i];
	sort(Do_RMB,Do_RMB+12);
	printf("%.2lf\n",money*Do_RMB[11]);	
	return 0;
}
