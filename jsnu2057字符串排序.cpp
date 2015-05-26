#include<iostream>
#include<string>
using namespace std;
int main()
{
	int m,n,i,j,a[110],temp; 
	string str[110];
	while(cin>>m)
	{
		getchar();
		n=0;
		for(i=0;i<m;i++)
		{
	   		getline(cin,str[n]);
	   		a[n]=str[n].size();
	   		if(str[n]=="stop") break;
	   		else n++;
		}	
		for(i=n-1;i>=0;i--)
		for(j=0;j<i;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
			for(i=n-1;i>=0;i--)
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
			a[i]=0;
			}
		}
		for(i=0;i<n;i++)
		{
		  for(j=0;j<n;j++)
		  {
		  	if(a[i]==str[j].size())
		  	cout<<str[j]<<endl;
		  }
		}
		
	}
	return 0;
} 
