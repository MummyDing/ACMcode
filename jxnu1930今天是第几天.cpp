#include<iostream>
using namespace std;
int y(int year)
{
	if(year%400==0||(year%4==0&&year%100!=0))
	return 1;
	else return 0;
}
int main()
{
	int year ,month,day,days,i,Month[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	while(cin>>year>>month>>day)
	{
		days=0;
		for(i=month-1;i>=0;i--) 
		days+=Month[i];
		days+=day;
		if(y(year)==1&&month>2)
		days++;
		cout<<days<<endl;
	}
	return 0;
}
