#include<iostream>
#define Max 9999999
using namespace std;
int map[11][5],n,m,count=0,res=Max;
int p[11],pt[11]={0};
void dfs(int k){
	if(k==n){
		if(count<res) res=count;
		return ;
	}
	for(int i=1;i<=m;i++)
	if(k==map[i][0]&&pt[map[i][0]]<3){
		count+=map[i][p[map[i][2]]+3];
		int tempx=p[map[i][0]];
		p[map[i][0]]=0;
		pt[map[i][0]]++;
		if(count<res)
		dfs(map[i][1]);
		pt[map[i][0]]--;
		p[map[i][0]]=tempx;
		count-=map[i][p[map[i][2]]+3];
	}
}
int main(){
	cin>>n>>m; 
	for(int i=1;i<=m;i++) p[i]=1;
	for(int i=1;i<=m;i++)
	cin>>map[i][0]>>map[i][1]>>map[i][2]>>map[i][3]>>map[i][4];
	dfs(1);
	if(res!=Max)
	cout<<res<<endl;
	else cout<<"impossible\n";
	return 0;
}
