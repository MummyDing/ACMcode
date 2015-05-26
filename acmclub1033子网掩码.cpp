#include<iostream>
using namespace std;
int main()
{
	int ip1,ip2,ip3,ip4,IP[4],n,In1,In2,In3,In4;
	scanf("%d.%d.%d.%d",&ip1,&ip2,&ip3,&ip4);
	scanf("%d.%d.%d.%d",&In1,&In2,&In3,&In4);
	ip1&=In1;
	ip2&=In2;
	ip3&=In3;
	ip4&=In4;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d.%d.%d.%d",&IP[0],&IP[1],&IP[2],&IP[3]);
	IP[0]&=In1;
	IP[1]&=In2;
	IP[2]&=In3;
	IP[3]&=In4;
	if(IP[0]==ip1&&IP[1]==ip2&&IP[2]==ip3&&IP[3]==ip4)
	cout<<"INNER\n";
	else cout<<"OUTER\n";	
	}
	return 0;
} 
