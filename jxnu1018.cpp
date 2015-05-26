#include<iostream>
using namespace std; 
int main()
{
	int n,sum,i,j,temp;
	while(cin>>n){
		sum=0; 
		while(n!=0){
			temp=n%10;
			n/=10;
			if(temp%2==0)
			sum+=temp;
		}
		cout<<sum<<endl<<endl;
	}
	return 0;
}
