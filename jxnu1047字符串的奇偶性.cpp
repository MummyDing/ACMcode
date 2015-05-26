#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str; int i,j,s,t,L,flag,sum;
	while(cin>>str){
		L=str.size();
		if(str[L-1]=='#') break;
		if(str[L-1]=='e') flag=0;
		else flag=1;
		s=t=0;
		for(i=0;i<L-1;i++){
			if(str[i]=='1') s++;
		}
		if(s%2!=flag) str[L-1]='1'; 
     	else  str[L-1]='0';
	 cout<<str<<endl;
	}
	
	
	
	return 0;
}
