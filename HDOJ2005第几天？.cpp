//1985/1/20
#include<iostream>
using namespace std;
int year,month,day;
int Month[]={0,31,28,31,30,31,30,31,31,30,31,30};
char c;
bool Isleap(int x)
{
	if((x%4==0&&x%100!=0)||x%400==0)return true;
	return false;
}
int main()
{
	cin.sync_with_stdio(false);
	while(cin>>year>>c>>month>>c>>day)
	{
		int sum=day;
		for(int i=0;i<month;i++)
		sum+=Month[i];
		if(Isleap(year)&&month>2)sum++;
		cout<<sum<<endl;
	}
	return 0;	
} 
