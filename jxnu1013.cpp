#include <iostream>
using namespace std;
int main()
{
int t,i,a[50],sum,temp;
while(cin>>t)
{
	sum=0;
	if(!t) break;
	for(i=0;i<t;i++){
		cin>>a[i];
		sum+=a[i];
	}
	temp=sum/t;sum=0;
	for(i=0;i<t;i++){
		if(temp<a[i]){
			sum+=(a[i]-temp);
		}
	}
	cout<<sum<<endl<<endl;
}
	return 0;
}

