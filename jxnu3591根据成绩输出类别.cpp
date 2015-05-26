#include<iostream>
using namespace std;
int main()
{
	int m;
	while(cin>>m){
		if(m>=90)  cout<<'A'<<endl;
		else if(m>=80) cout<<'B'<<endl;
		else if(m>=60) cout<<'C'<<endl;
		else cout<<'D'<<endl;
	}
	
   return 0; 
}

