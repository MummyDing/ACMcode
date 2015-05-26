#include <iostream>
using namespace std;
int main()
{
int t,a,b,c,d,e,f,i;
cin>>t;
for(i=0;i<t;i++){
	cin>>a>>b>>c>>d>>e>>f;
	if(a>d){
		cout<<"First"<<endl; 
	}
	else if(a<d)cout<<"Second"<<endl; 
	else {
		if(b>e){
		cout<<"First"<<endl; 
	}
	else if(b<e) cout<<"Second"<<endl; 
	else {
		if(c>f) 	cout<<"First"<<endl; 
		else if (c<f)  cout<<"Second"<<endl; 
		else  cout<<"Same"<<endl; 	
	}
		
	}
}
	return 0;
}

