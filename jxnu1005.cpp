#include <iostream>
using namespace std;
int main()
{ int n,M,j,a,sum;

	while(cin>>n){
		sum=0;
	for(j=0;j<n;j++){
		cin>>a;
		sum+=a;
	}
	cout<<sum<<endl;
} 
  
return 0;
}
