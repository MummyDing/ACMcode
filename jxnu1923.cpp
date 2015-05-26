#include<iostream>
using namespace std;
#define Max 1000
int main()
{
	int a[Max],i,j,temp,n;
	while(cin>>n)
	{
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=n-1;i>=0;i--)
		for(j=0;j<i;j++)
		{
			if(a[i]<a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
		for(i=0;i<n-1;i++)
		cout<<a[i]<<" ";
		cout<<a[i];
	}
	
	
	return 0;
} 
