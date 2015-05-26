#include <iostream>
using namespace std;
int main()
{
int t,a[101],m,temp,i,j,sum;
while(cin>>t){
	sum=0;
	if(!t) break;
	for(i=0;i<t;i++){
		cin>>a[i];
	}
	for(i=t-1;i>=0;i--)
	for(j=0;j<i;j++){
		if(a[i]<a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	m=t/2;
	for(i=0;i<=m;i++){
		sum+=(a[i]/2+1);
	}
	cout<<sum<<endl;
}

	return 0;
}

