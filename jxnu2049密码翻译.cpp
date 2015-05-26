#include<iostream>
using namespace std;
int main(){
int n,L,i;
string a="bcdefghijklmnopqrstuvwxyza",b="BCDEFGHIJKLMNOPQRSTUVWXYZA",str1,str2;
while(cin>>n){
	getchar();
	while(n--){
	getline(cin,str1);
	L=str1.size();
	for(i=0;i<L;i++){
		if(str1[i]>='a'&&str1[i]<='z'){
			str2[i]=a[str1[i]-'a'];
		}
		else if(str1[i]>='A'&&str1[i]<='Z'){
				str2[i]=b[str1[i]-'A'];
		}
		else str2[i]=str1[i];
	}
	for(i=0;i<L-1;i++){
		cout<<str2[i];
	}
	cout<<str2[i]<<endl;	
		
	}
}
	
	return 0;
}
