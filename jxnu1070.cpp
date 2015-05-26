#include<iostream>
using namespace std;
#define Max 100
int main()
{
	int c,i,j,k,n,sum,temp,a[Max];
	cin>>c;
	for(i=0;i<c;i++){
		sum=0;
		cin>>n;
		for(j=0;j<n;j++){
			cin>>a[j];
		}
		for(j=n-1;j>=0;j--)
		for(k=0;k<j;k++)
		{
			if(a[j]>a[k]){
				temp=a[k];
				a[k]=a[j];
				a[j]=temp;
			}
		}
		for(j=n-1;j>0;j--){
			if(a[j]<a[j-1]){
				sum++;
				if(sum==1)cout<<a[j-1]<<endl;
			}
			}
			if(sum==0)
			cout<<"NO"<<endl;
		}
	return 0;
} 
