#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str; int i,j,L; char c;
	while(getline(cin,str))
	{
		L=str.size();
		for(i=L-1;i>=0;i--)
		for(j=0;j<i;j++){
			if(str[i]<str[j]){
				c=str[i];
				str[i]=str[j];
				str[j]=c;
			}
		}
		cout<<str<<endl;
		}
	return 0;
} 
