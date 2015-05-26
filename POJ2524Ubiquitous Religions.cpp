#include<iostream>
using namespace std;
int m,n,t=0,uset[50001],rank[50001],tempx,tempy,step;
int find(int x){
	while(x!=uset[x]) x=find(uset[x]);
	return x;
}
void union_set(int x,int y){
	if((x=find(x))==(y=find(y))) return ;
	step--;
	if(rank[x]>rank[y]) uset[y]=x;
	else {
		uset[x]=y; 
		if(rank[x]==rank[y])rank[y]++;
	}
}
int main(){
		while(cin>>n>>m,m||n){
		step=n;
		for(int i=1;i<=n;i++){
			uset[i]=i; rank[i]=1;
		}
		for(int i=0;i<m;i++){
			cin>>tempx>>tempy;
			union_set(tempx,tempy);
		}
		printf("Case %d: %d\n",++t,step);
		} 
	return 0;
} 
