#include<iostream>
using namespace std;
int main()
{
	int k,a[12],i,j,t,star;
	while(cin>>k){
		if(!k) break;
		for(i=0;i<k;i++) cin>>a[i];
		star=0;
		for(t=0;t<k-5;t++){        //最前面一位 
			for(j=0;j<k-(star+5);j++){// 
		for(i=star;i<star+5;i++){
			cout<<a[i]<<" ";
		}
		cout<<a[star+5+j]<<endl;	
		}
		star++;
		}
		
		
	}
	
	
	return 0;
}
