#include<iostream>
using namespace std;
int main()
{
	int num[9];
	int a,b;
	while(cin>>num[0])
	{
		int falg1=1,falg2=1;
		int end,star;
		for(int i=1;i<9;i++)
		cin>>num[i];
		for(int i=0;i<9;i++)
		{
			if(num[i])
			{
			falg1=0;
			star=i;
			break;	
			}
		}
		for(int i=8;i>=0;i--)
		{
			if(num[i])
			{
			falg2=0;
			end=i;
			break;	
			}
		}
		if(falg1||falg2)
		{
			cout<<0<<endl;
			continue;
		}
		for(int i=star;i<=end;i++)
		{
			if(!num[i])
			continue;
			if(i==star&&i!=8)
			{
				if(i==7&&num[i]!=1&&num[i]!=-1)
				cout<<num[i]<<"x";
				else if(i==7&&num[i]==1)
				cout<<"x";
				else if(i==7&&num[i]==-1)
				cout<<"-x";
				else if(num[i]!=1&&num[i]!=-1)
				cout<<num[i]<<"x^"<<8-i;
				else if(num[i]==-1)
				cout<<"-x^"<<8-i;
				else
				cout<<"x^"<<8-i;	
			}
			else if(i==star&&i==8)
				cout<<num[i];
			else if(i!=star&&i!=end)
			{
				if(num[i]>0)
				cout<<" + ";
				else if(i!=star)
				{
				num[i]=0-num[i];
				cout<<" - ";	
				}
				
				if(i==7&&num[i]!=1)
				cout<<num[i]<<"x";
				else if(i==7&&num[i]==1)
				cout<<"x";
				else if(num[i]==1)
				cout<<"x^"<<8-i;	
				else 	
				cout<<num[i]<<"x^"<<8-i;	
			}
			else if(i==end&&i!=8)
			{
				if(num[i]>0)
				cout<<" + ";
				else if(i!=star)
				{
				num[i]=0-num[i];
				cout<<" - ";	
				}
				if(i==7&&num[i]!=1)
				cout<<num[i]<<"x";
				else if(i==7&&num[i]==1)
				cout<<"x";
				else if(num[i]==1)
				cout<<"x^"<<8-i;	
				else 	
				cout<<num[i]<<"x^"<<8-i;			
			}			
			else 
			{
				if(num[i]>0)
				cout<<" + ";
				else if(i!=star) 
				{
				num[i]=0-num[i];
				cout<<" - ";	
				}
			cout<<num[i];	
			}
		}
		cout<<endl;
		
	}
	return 0;
} 
