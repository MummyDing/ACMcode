#include<iostream>
using namespace std;
int leap(int y)
{
        return y%4==0&&y%100!=0||y%400==0?1:0;
}
int main()
{
	int t,year,n,i,j;
	cin>>t;
	while(t--){
		cin>>year>>n;
		for(i=0;i<n;year++){
			if(leap(year)) i++;
		}
		year--;
		cout<<year<<endl;
	
	}
        return 0;
}
