#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string Haab[]={"pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};
string Holly[]={"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};
int day,n,ayear,aday,oyear,omonth,oday;
char amonth[20];
int main()
{
	cin>>n;
	cout<<n<<endl;
	while(n--){
		scanf("%d. %s %d",&aday,amonth,&ayear);
		day=ayear*365+aday;
		for(int i=0;i<19;i++)
		if(Haab[i]==amonth){
			day+=20*i;
			break;
		}
		cout<<day%13+1<<" "<<Holly[day%20]<<" "<<day/260<<endl;
	}
	return 0;
}
