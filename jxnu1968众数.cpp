#include<iostream>
#include<cstring> 
using namespace std;
int main()
{
	int a[20],b[11],i,max;
	while(cin>>a[0]){
		memset(b,0,sizeof(b));
		b[a[0]]++;
		for(i=1;i<20;i++){
			cin>>a[i];
            b[a[i]]++;
		}
		max=b[1];
		for(i=2;i<=10;i++){
			if(max<b[i]){
				max=b[i];
			}
		}
		for(i=1;i<=10;i++){
			if(max==b[i]){
				cout<<i<<endl;
				break;
			}
		}
	}
	
	
	return 0;
}
