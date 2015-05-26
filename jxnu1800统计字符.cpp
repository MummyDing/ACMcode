#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	string str1,str2; int i,j,L1,L2,sum[5];
	while(getline(cin,str1)){
		memset(sum,0,sizeof(sum));
		if(str1[0]=='#') break;
		getline(cin,str2);
		L1=str1.size(); L2=str2.size();
		for(i=0;i<L1;i++)
		for(j=0;j<L2;j++){
			if(str1[i]==str2[j]){
				sum[i]++;
			}
		}
		for(i=0;i<L1;i++){
			cout<<str1[i]<<" "<<sum[i]<<endl;
		}
	}



return 0;
} 
