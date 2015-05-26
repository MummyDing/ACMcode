#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a[1000],str; int i,j,k,first,m;
	cin>>m;
	while(m--)
	{
		first=i=0;
		while(1)
		{
			cin>>str;
			if(str=="End")
			break;
			else if(str=="Add")
			{
				cin>>a[i++];
			}
			else if(str=="Delete")
			{
				cin>>str; j=i;
				for(k=0;k<j;k++)
				{
					if(str==a[k])
					{
						a[k]=" ";
					}
				}
			}
		}
		for(j=0;j<i;j++)
		{
			if(a[j]!=" ")
			{
			if(!first)
			first=1;
			else cout<<" ";
			cout<<1000+j;
			}
		}
		cout<<endl;
			for(j=0;j<i;j++)
		{
			if(a[j]!=" ")
			{
			if(first)
			first=0;
			else cout<<" ";
			cout<<a[j];	
			}
		}
		cout<<endl;
	}
	
	return 0;
}
