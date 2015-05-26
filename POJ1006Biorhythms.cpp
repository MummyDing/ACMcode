#include<iostream>
#include<cstdlib>
using namespace std;
int a,b,c,d,x,m,t;
int main()
{
	while(cin>>a>>b>>c>>d,(~a&&~b&&~c&&~d))
	{
		for(int i=d+1;;i++)
		{
			if(!(abs(i-a)%23)&&!(abs(i-b)%28)&&!(abs(i-c)%33))
			{
				x=i-d;
				break;
			}
		}
		cout<<"Case "<<++t<<": the next triple peak occurs in "<<x<<" days."<<endl;
	}
	return 0;
} 
