#include <iostream>
using namespace std;
int main()
{
	int  i,a[1000],t;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>a[i];
	}
	for(i=0;i<t;i++){
		printf("%c",a[i]);
	}
	return 0;
}

