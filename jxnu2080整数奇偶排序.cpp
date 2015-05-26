#include<iostream>
using namespace std;
int main()
{
	int  x[10],y[10],i,k,j,m,n,sum,temp;
	while(cin>>sum){
			m=0,n=0;
		if(sum%2==0){
				y[n]=sum;
				n++;
		}
		else {
			x[m]=sum;
			m++;
		}
		 	
		for(i=0;i<9;i++){
				cin>>sum;
		if(sum%2==0){
				y[n]=sum;
				n++;
		}
		else {
			x[m]=sum;
			m++;
		}
		 	
		}
		for(i=m-1;i>=0;i--)
		for(j=0;j<i;j++){
		 if(x[i]>x[j]){
		 	temp=x[j];
		 	x[j]=x[i];
		 	x[i]=temp;
		 }  	
	}
		for(i=n-1;i>=0;i--)
		for(j=0;j<i;j++){
		 if(y[i]<y[j]){
		 	temp=y[j];
		 	y[j]=y[i];
		 	y[i]=temp;
		 }  	
	}
	for(i=0;i<m-1;i++)
	cout<<x[i]<<" ";
	if(m==10){
		cout<<x[i]<<endl;
	}
    else if(m>0) cout<<x[i]<<" ";
	for(i=0;i<n-1;i++)
	cout<<y[i]<<" ";
	if(y>0) cout<<y[i]<<endl;

}
	
	return 0;
}
