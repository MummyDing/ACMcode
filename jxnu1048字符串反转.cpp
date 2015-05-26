#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;int i,m,L,star,end;
	cin>>m;
	getchar();
	while(m--){
		getline(cin,str);
		L=str.size();
		for(i=0,star=0;i<L;i++){
			if(str[i]==' '){
				for(end=i-1;end>=star;end--){
					cout<<str[end]; 
				}
				cout<<' ';
				star=i+1;
			}
		}
		for(i=L-1;i>=star;i--){
		cout<<str[i];	
		}
		cout<<endl;
	} 
	
	
	return 0;
} 
