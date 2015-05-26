#include<iostream>
int count=0,res=99999999,n,m,map[11][10][4],pd[11][2]={0},x,y,z,p,r;
int flag[11]={0};
using namespace std;
void dfs(int k){
	if(k==n){
		int i; bool f=true;
		for(i=1;i<=n;i++)
		if(!flag[i]) f=false;
		if(f&&count<res){
			res=count;	
		}	
		return ;
	}
	int i=k;
	for(int j=1;j<=n;j++){
		if(i!=j&&map[x][y][3]<3){
			int temp=flag[map[i][j][2]];
			if(temp>0)
			count+=map[i][j][1];
			else count+=map[i][j][0];
			flag[i]++;flag[j]++;
			map[x][y][3]++;
			dfs(j);
			map[x][y][3]--;
			flag[i]--;flag[j]--;
			if(temp>0)
			count-=map[i][j][1];
			else count-=map[i][j][0];
		}
	}
}
int main(){
	cin>>n>>m;
	while(m--){
		cin>>x>>y>>z>>p>>r;
		map[x][y][0]=p;map[x][y][1]=r;
		 map[x][y][2]=z;map[x][y][3]=0;
	}
	dfs(1);
	cout<<res<<endl;
	return 0;
}
