#include<iostream>
#include<cmath>
int j,n,temp,sum;
using namespace std;
int sushu(int k){
	int flag=1;
	temp=sqrt(k);
	for(int m=2;m<=temp;m++){
		if(k%m==0||(k%10!=1)) flag=0;
	}
	return flag;
}
int main()
{int i;
while(cin>>n){	
sum=0;
	for(i=10;i<n;i++){
		if(sushu(i))
	sum++;
	}
	if(!sum) cout<<"-1"<<endl;
	else {
		for(i=10,j=0;j<sum-1;i++)
		 {
			if(sushu(i)) {
				cout<<i<<" ";
				j++;
			}
		}
	
 	}
 		for(;i<n;i++) if(sushu(i))  cout<<i<<endl;
}
	return 0;
}
