#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	 int i,j,n;  double sum,m;
	 while(cin>>n)
	{   sum=n;
		for(i=0;i<n-1;i++){
			sum*=n;
			while(sum>9){
				sum/=10;
			}
		}
		printf("%d\n",int(sum));
	}
	return 0;
}
