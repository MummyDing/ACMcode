#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	int N,i,n;  double sum,j;
	cin>>N;
	for(i=0;i<N;i++){
		sum=1;
		cin>>n;
		for(j=1;j<=n;j++)
		sum+=log10(j);
		cout<<(int)sum<<endl;
	} 
	return 0;
}
