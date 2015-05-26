#include<iostream>
#include<string>
using namespace std;
int main()
{
int n,i,j,num,flag;  string str; char c;
cin>>n;
for(i=0;i<n;i++){
	j=0;flag=1;
	while(j<3){
	cin>>num;
	if(num<0||num>255){
	flag=0;
	}
	c=getchar();
	if(c!='.'){
	 flag=0;
	}
	else j++;
}
if(j==3){
	cin>>num;
		if(num<0||num>255) 
		flag=0;
		}
if(flag) cout<<"Yes!"<<endl;
else cout<<"No!"<<endl;
 
}  
return 0;
} 

 
