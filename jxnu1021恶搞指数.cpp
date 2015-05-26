#include <iostream>
#include<iostream>
using namespace std;
int main()
{
 int i,j,L,sum; string str;
 while(cin>>str){
 	L=str.size();  sum=0;
 	for(i=0;i<L;i++){
 		if(str[i]=='('&&str[i+1]=='(')  sum++;
 		if(str[i]=='('&&str[i+1]=='B'){
 		sum++;
 		break;
 		}
 		if(str[i]==')'&&str[i+1]==')') sum--;
 	   if(str[i]==')'&&str[i+1]=='B') break;
  
 	}
 	
 	cout<<sum<<endl; 
 }

	return 0;
}

