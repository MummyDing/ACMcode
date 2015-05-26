#include<iostream>
using namespace std;
int m,n,k,uset[30001],rank[30001],tempx,tempy ;
int find(int x){
	while(x!=uset[x]) x=find(uset[x]);
	return x;
}
void union_set(int x,int y){
	if((x=find(x))==(y=find(y))) return ;
	if(rank[x]>rank[y]){
		uset[y]=x; rank[x]+=rank[y];
	} 
	else {
		uset[x]=y; rank[y]+=rank[x];
	}
}
int main(){
		while(cin>>n>>m,m||n){
		for(int i=0;i<n;i++){
			uset[i]=i; rank[i]=1;
		}
		for(int i=0;i<m;i++){
			cin>>k; cin>>tempx;
			if(k==1) continue;
			for(int i=0;i<k-1;i++) {
			cin>>tempy;
			union_set(tempx,tempy);	
			}
		}
		cout<<rank[find(0)]<<endl;
		} 
	return 0;
} 
