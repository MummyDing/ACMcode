#include<iostream>
using namespace std;
int main()
{
	int max,min,m,n,temp,a[5],b[5],k,i,j,flag;
	while(cin>>a[0])
	{
		max=min=flag=n=k=0;
			if(a[0])
			{
			max=min=a[0];
			b[k++]=a[0];	
			}
			else n++;
		for(i=1;i<5;i++)
		{
			cin>>a[i];
			if(a[i])
			{
			max=min=a[i];
			b[k++]=a[i];	
			}
			else n++;
		}
		for(i=1;i<k;i++)
		if(b[0]==b[i])
		{
			flag=1;
			cout<<'0'<<endl;
			break;
		}
		if(!flag)
		{
		for(i=0;i<5;i++)
	   {
	   	if(a[i])
	   	{
	   		if(max<a[i]) max=a[i];
	   		if(min>a[i]) min=a[i];
	   	}
	   }
	   temp=max-min;
	   if(temp<=4)
	   {
	   	cout<<'1'<<endl;
	   }		
	   else cout<<'0'<<endl;
	}
 
	
	}
	return 0;
}
