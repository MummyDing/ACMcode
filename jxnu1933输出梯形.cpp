#include<iostream>
using namespace std;
int  main()
{
    int n,i,j,k,m;
    while(cin>>n){
    k=n;
    for(i=0;i<n;i++){
    	for(j=(n-1-i)*2;j>0;j--){
    		cout<<" ";
    	}
    	for(j=0;j<k;j++){
    		cout<<'*';
    	}
    	cout<<endl;
    	k+=2;
    }		
    }
	return 0;
}
