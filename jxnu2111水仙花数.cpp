#include<iostream>
using namespace std;
int a,b,c;
void bit(int k){
	a=k/100;
	b=(k/10)%10;
	c=k%10;
}
int main()
{
	int m,n,sum=0,i,j,x[100];
	cin>>m>>n;
	for(i=m;i<=n;i++){
		bit(i);
		if(i==a*a*a+b*b*b+c*c*c){
			x[sum]=i;
			sum++;
		}
	}
	if(!sum){
		cout<<"no"<<endl;
	}
	else {
		for(i=0;i<sum-1;i++){
		cout<<x[i]<<" ";
	}
	cout<<x[i]<<endl;
	}
	return 0;
}
