#include<iostream>
using namespace std;
int main(){
double m,n,temp,time,i,j;
	while(cin>>m>>n){
		time=0;
	for(i=1;m>0;i++){
		if(m>=n*i)
		time+=i;
		else if(m>=n) {
			if(m/n>int(m/n)) time+=int(m/n)+1;
			else time+=int(m/n);
		}
		else time++;  
		m-=n*i;
		time++;
	}
	time-=1;
	cout<<time<<endl;
	}
	return 0;
}
