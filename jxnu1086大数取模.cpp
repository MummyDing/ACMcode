#include<iostream>
#include<string>
#define Max 1005
using namespace std;
int num[Max];
int p(string m,int mod){
	for(int i=0;i<m.size();i++)
	num[i]=m[i]-'0';
	int sum=0;
	for(int i=0;i<m.size();i++)
		sum=(sum*10+num[i])%mod;
	return sum;
}
int main(){
	string m;int mod; 
	while(cin>>m>>mod){
	cout<<p(m,mod)<<endl;	
	}
	return 0;
}
