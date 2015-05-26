#include<iostream>
#include<string>
#define M 100
using namespace std;
struct Team
{
	string name;
	int Total_Time=0,Sum=0,p[4]_Sub,p[4]_Time;	
};
int main()
{
	int n;Team t[M];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t[i].name;
		for(int j=0;j<4;j++)
		cin>>t[i].p[j]_Sub>>t[i].p[j]_Time;	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(t[i].p[j]_Time)
			{
				t[i].Sum++;
				Total_Time+=t[i].p[j]_Time+t[i].p[j]_Sub;
			}
		}
	} 
	return 0;
} 
