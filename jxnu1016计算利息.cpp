#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,sum,i,j,L;  string str;
	while(cin>>str){
		sum=0;
		L=str.size();
		for(i=0;i<L;i++){
			if(str[i]=='('&&str[i+1]=='(')  sum++;
			else if(str[i]=='('&&str[i+1]=='B')  {
				sum++;  break;
			}
			else if(str[i]=='('&&str[i+1]==')')  i++;
			 
		}
		cout<<sum<<endl;
	}

	
	return 0;
} 
 
