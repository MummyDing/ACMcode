#include <iostream>
using namespace std;
int i;//1.5Ԫһƿ������2Ԫһƿ����֭3.5Ԫһƿ����  4.5
int main()
{
	int t,n,x,y,min;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>n;
if(n<150){
	cout<<n<<endl;
}
else if(n<200||n>300){
	cout<<n%50<<endl;
}
else cout<<n-200<<endl;
	
	}
	return 0;
}

