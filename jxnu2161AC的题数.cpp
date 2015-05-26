#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a[10001],i,j,temp,t,flag,mid;
	while(cin>>t){
		flag=1;
		memset(a,0,sizeof(a));
		for(i=0;i<t;i++){
			cin>>temp;
			a[temp]++;
		}
		mid=t/2;
		for(i=1;i<10001;i++){
			if(a[i]>mid){
				cout<<i<<endl;
				flag=0;
				break;
			} 
		} 
		if(flag) cout<<'0'<<endl;
	}
	
	return 0;
}
