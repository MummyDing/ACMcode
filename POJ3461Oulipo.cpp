#include<iostream>
#include<cstring>
using namespace std;
char w[10005],t[1000005];
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int count=0;
		scanf("%s%s",w,t);
		int L1=strlen(w),L2=strlen(t);
		for(int i=0;i<L2-L1+1;i++)
		{
			char temp[10005];
			strncpy(temp,t+i,L1);
			temp[i+L1]='\0';
			if((strcmp(w,temp))==0)
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
