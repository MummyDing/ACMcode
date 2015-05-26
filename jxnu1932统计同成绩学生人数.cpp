#include<iostream>
using namespace std;
int main()
{
	int t,n,i,a[1000],sum;
	while(cin>>t){
		if(!t) break;
		sum=0;
		for(i=0;i<t;i++){
			cin>>a[i];
		}
		cin>>n;
		for(i=0;i<t;i++){
			if(n==a[i])
			sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
} 
