#include<iostream>
using namespace std;
#include<cstring>
int main()
{
	int n,a[10],m,i,j,temp;
	while(cin>>n){
		memset(a,0,sizeof(a));
		while(n!=0){
		temp=n%10;
		for(i=0;i<=temp;i++){
			a[i]++;
		}	
		if(n>9)
		for(i=0;i<=9;i++){
			a[i]+=(n/10);
			
		}
		n/=10;
		}
		for(i=0;i<10;i++){
			cout<<a[i]<<endl;
		}
		
	}
	
	
	return 0;
}
