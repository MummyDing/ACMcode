#include<iostream>
#define Max 100
using namespace std;
int maze[5][5],road[25][2]={0},temproad[25][2],pos=0;
int dir[4][2]={
	{1,0},{0,1},
	{-1,0},{0,-1}
};
struct Road{
	int r[30][2],step;
}roads[Max];
void dfs(int x,int y,int step){
	if(x==4&&y==4){
		roads[pos].step=step;
		for(int i=1;i<step;i++){
			roads[pos].r[i][0]=temproad[i][0];
			roads[pos].r[i][1]=temproad[i][1];
		}
		pos++;
		return ;
	} 
	for(int i=0;i<4;i++){
		int dx=x+dir[i][0],dy=y+dir[i][1];
		if(dx>=0&&dy>=0&&dx<5&&dy<5&&!maze[dx][dy]){
			maze[dx][dy]=1;
			temproad[step][0]=dx; temproad[step][1]=dy;
			dfs(dx,dy,step+1);
			maze[dx][dy]=0;
		}
	}
	
}
int main()
{
	for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	cin>>maze[i][j];
	dfs(0,0,1);
	int ans=0;
	for(int i=1;i<pos;i++)
	if(roads[i].step<roads[ans].step)
	ans=i;
	for(int i=0;i<roads[ans].step;i++)
	cout<<'('<<roads[ans].r[i][0]<<", "<<roads[ans].r[i][1]<<')'<<endl; 
	return 0;
}
