#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;  int i,j,m,n,L,a[100],star,temp;
	while(getline(cin,str)){
		m=star=0;
		for(i=0;str[i]!='.';i++){
		if(str[i]==' '&&str[i-1]!=' '){
			a[m]=i-star;
			star=i+1;
			m++;
		}
		else if(str[i]==' '&&str[i-1]==' ')  star++;
	}
	if(str[i-1]!=' ')a[m]=i-star;
	else m--;
	for(i=0;i<m;i++) {
		cout<<a[i]<<" "; 
	}
	cout<<a[i]<<endl;
	}
	
	return 0;
}

