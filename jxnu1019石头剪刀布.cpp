#include<iostream>
using namespace std;
int main()
{     int n,t,i,j,p1,p2;char P1,P2;
    cin>>n;
	for(i=0;i<n;i++){
		cin>>t;//用R代表石头，S代表剪子，P代表布
		p1=0;  p2=0;
		for(j=0;j<t;j++){
			cin>>P1>>P2;
			if(P1=='R'){
				  if(P2=='S')
			     p1++;
				else 	if(P2=='P') p2++;
			}
			else if(P1=='S'){
			   if(P2=='P')
			     p1++;
				else 	if(P2=='R')p2++;
			}
			else {   if(P2=='R')
			     p1++;
				else if(P2=='S')p2++;
			}
			
		}
			if(p1>p2)  cout<<"Player 1"<<endl;
			else if(p1<p2)  cout<<"Player 2"<<endl;
			else cout<<"TIE"<<endl;	
 	}
    
	return 0;
}

