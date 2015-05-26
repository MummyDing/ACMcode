#include<iostream>
using namespace std;
int main()
{
	int a[10000],m,i,j,min,max;
	while(cin>>m)
	{
		cin>>a[0]; 
		max=min=a[0];
		for(i=1;i<m;i++)
		{
			cin>>a[i];
			if(max<a[i])  max=a[i];
			if(min>a[i])  min=a[i];
		}
		cout<<max<<" "<<min<<endl;
	}
	
	
	return 0;
}
