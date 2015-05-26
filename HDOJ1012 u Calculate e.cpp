#include<iostream>
using namespace std;
int main()
{
	double e=2.5,n,sum=1,i,j;
	cout<<"n e"<<endl;  cout<<"- -----------"<<endl;
	cout<<"0"<<" "<<"1"<<endl;
	cout<<"1"<<" "<<"2"<<endl;
	cout<<"2"<<" "<<"2.5"<<endl; 
for(i=3;i<10;i++){
for( j=1;j<=i;j++){
	sum*=j;
}
		e+=1/sum;
		printf("%.0lf %.9lf\n",i,e);
		sum=1; 
}
	return 0;
}
