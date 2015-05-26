#include<iostream>
using namespace std;
int main()
{
int a[12],left=0,i,b,c=1;double savings=0;
for(i=0;i<12;i++)
{
	cin>>a[i];
}
for(i=0;i<12;i++)
{
   left+=300;
	if(a[i]<=left)
	{	
		left-=a[i];
		savings+=(left/100)*100;
		left%=100;
	
	}
	else 
	{
		i++; 
		c=0;
		cout<<-i<<endl;
		break;
	}
}
while(c){
	savings*=1.2;
	savings+=left;
	cout<<savings<<endl;
}
return 0;
}

