#include<iostream>
#define Max 100000
using namespace std;
int main()
{  std::ios::sync_with_stdio(false);
	int i,j,k,a[Max],m=0,n=0;
	for(k=3;n<Max;k+=3){
		if(k%5==0) continue ;
		a[n]=k;
		n++;
		if(k/5>m){
			m++;
			a[n-1]=m*5;
			a[n]=k;
			n++;
		}
	}
	while(cin>>i)
	cout<<a[i-1]<<endl;
	return 0;
}
