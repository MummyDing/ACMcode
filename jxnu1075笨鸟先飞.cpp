#include<iostream>
using namespace std;
int main()
{
	long long t,i,m,n,v;
	cin>>t;
	while(t--){
		cin>>m;v=1;n=0;
		for(i=0;i<m;i++,v+=2){
			n+=v;
		}
		cout<<n%10000<<endl;
		
	}
	
	return 0;
} 
