#include<iostream>
#include<cstring>
using namespace std;
string map[25];
int chess[25][25],visit[25][25],cx,cy,dx,dy,count,sum;
int dir[8][2]={
	{1,0},{0,1},{-1,0},{0,-1},
	{-1,-1},{1,1},{1,-1},{-1,1}
};
bool dfs(int x,int y)
{
	if(map[x][y]=='.') return false;
	bool flag=false;
	if(!visit[x][y]){
	chess[x][y]=1;
	visit[x][y]=1;
	for(int i=0;i<8;i++){
	int dx=dir[i][0]+x,dy=dir[i][1]+y;
	if(dx>=0&&dy>=0&&dx<cx&&dy<cy&&map[dx][dy]=='X'){
		chess[dx][dy]=1;
		flag=true;
		dfs(dx,dy);
	}
	}	
	}
	return flag;
}
void calc(){
	for(int i=0;i<cx;i++)
	for(int j=0;j<cy;j++)
	{
		if(chess[i][j]){
			sum++; 
			for(int k=0;k<4;k++){
				int dx=i+dir[k][0],dy=j+dir[k][1];
					if(dx>=0&&dy>=0&&dx<cx&&dy<cy&&chess[dx][dy])
					count++;
			}
		}
	}
} 
int main()
{
	while(cin>>cx>>cy>>dx>>dy&&cx)
	{
		sum=count=0;
		dx--;dy--;
		memset(chess,0,sizeof(chess));
		memset(visit,0,sizeof(visit));
		for(int i=0;i<cx;i++)
		cin>>map[i];
		if(map[dx][dy]=='.'){
			cout<<0<<endl; continue;
		}
		dfs(dx,dy);
		calc();
		cout<<sum*4-count<<endl;
	}
	return 0;
}
