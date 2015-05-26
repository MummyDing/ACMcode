#include <iostream>
using namespace std;
int main()
{
	int n,i,m,j,sum,t;
	cin>>n;
	for(i=0;i<n;i++){
		sum=0;
		cin>>m;
		for(j=0;j<m;j++){
			cin>>t;
			sum+=t;
		}
		if(i!=n-1)
		cout<<sum<<endl<<endl;
		else cout<<sum<<endl;
	}
	return 0;
}

