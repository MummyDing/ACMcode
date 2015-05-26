#include<iostream>
using namespace std;
int main()
{
	int i,j,a[1001],t,m,n,sum;
	cin>>t;
	for(i=0;i<t;i++){
		sum=0;
		cin>>m>>n;
		for(j=1;j<=m;j++)
		cin>>a[j];
		for(j=1;j<=m;j++){
			if(a[j]>a[n])
			sum++;
		}
		cout<<sum<<endl;
	}

	
	return 0;
} 
 
