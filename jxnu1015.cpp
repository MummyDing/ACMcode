#include <iostream>
using namespace std;
int main()
{
int n,i,j,k,t;
 cin>>t;
 for(k=0;k<t;k++){
 	cin>>n;
 	for(i=1;i<=n;i++){
 		for(j=1;j<n;j++){
 		cout<<i*j<<" ";
 	}
 	cout<<i*j<<endl;
 	} 
 }

	return 0;
}

