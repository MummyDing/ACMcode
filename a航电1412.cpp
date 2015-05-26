#include<iostream>
#include<cstring> 
using namespace std;
#define NUM 10000
int main()
{
	int m,n,i,j,k,a[NUM],b[NUM],c[NUM*2],d[NUM*2],f,temp;   
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	memset(d,0,sizeof(d));
	while (cin>>m>>n){
	for(i=0;i<m;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	cin>>b[i];              //对集合A和B赋值 

for(i=0;i<m;i++)                  
c[i]=a[i];
f=i+n+1;
for(j=i+1,k=0;j<f;k++,j++)
	c[j]=b[k];
	f=k+1;
for(i=0;i<f;i++)
for(j=0;j<f-i;j++)
{
     if(c[i]>c[j])
	 {
	 	temp=c[i];
	 	c[i]=c[j];
	 	c[j]=temp;
	 }
}
for(i=0,j=0;i<f;i++){
	if(c[i]=c[i+1])
	continue ;
	else {
		d[j]=c[i];
		j++;
	}
}

for(i=0;i<j;i++)
cout<<d[i]<<" ";
cout<<d[i+1]<<endl;

}
	
	return 0;
} 
