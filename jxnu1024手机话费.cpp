#include<iostream>
using namespace std;
int main(){
	int m,k,days,temp;
	while(cin>>m>>k){
		if(!m&&!k) break;
		temp=0;
		for(days=0;m>0;days++){
			m--;
			temp++;
			if(temp%k==0){
				m++;
				temp=0;
			}
		}
		cout<<days<<endl;
	}
	
	
	
	return 0;
}
