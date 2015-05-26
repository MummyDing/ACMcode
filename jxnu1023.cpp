#include <iostream>
using namespace std;
int i;//1.5元一瓶，可乐2元一瓶，橙汁3.5元一瓶。”  4.5
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

