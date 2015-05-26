#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str,str2,c="VWXYZABCDEFGHIJKLMNOPQRSTU";int i,flag,j,L;
	while(getline(cin,str)){
		flag=0;
		if(str=="START"){
			getline(cin,str2);
			L=str2.size();
		for(i=0;i<L;i++){
			if(str2[i]>='A'&&str2[i]<='Z'){
				str2[i]=c[str2[i]-'A'];
			}
		}
		} 
		else if(str=="ENDOFINPUT")  break;
		else if(str=="END")	cout<<str2<<endl;
	}
		return 0;
}
