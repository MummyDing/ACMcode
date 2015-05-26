#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,t;
	cin>>t;
	while(t--){
	  cin>>a>>b>>c;
	  if(a==b||b==c||a==c){
	  	cout<<"perfect"<<endl;
	  }
	  else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
	  {
	  	cout<<"good"<<endl;
	  }
	  else cout<<"just a triangle"<<endl;
	}
	
	return 0;
}
