#include<iostream>
using namespace std;
int main()
{   
	int a[10000],t,i,j,temp,mid;
	while(cin>>t){
		if(!t) break;
	for(i=0;i<t;i++)  cin>>a[i];
	for(i=t-1;i>=0;i--)
	for(j=0;j<i;j++){
		if(a[i]<a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	if(t%2==0) mid=(a[t/2]+a[t/2-1])/2;
	else mid=a[t/2];
	cout<<mid<<endl;	
	}
	
	return 0;
}
 
