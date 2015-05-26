/*
MummyDing
POJ3984迷宫问题【非递归】
*/ 
#include<iostream>
#include<cstring>
#define Max 100
using namespace std;
struct Node{
	int maze[5][5];		//x,y 代表当前位置 
	int x,y,exdir[4],step;  // exdir标记该方向之前是否被走过 
}stack[Max]={0},temp={0}; 
struct Road{
	int r[30][2],step;
}roads[Max];
int  top=0,pos=0;
int dir[4][2]={
	{0,1},{1,0},
	{-1,0},{0,-1}
};
int main()
{
	for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	cin>>stack[0].maze[i][j];
	while(~top)
	{
		if(stack[top].x==4&&stack[top].y==4)  //达到目标状态 
		{
			roads[pos].step=stack[top].step;
			for(int i=0;i<=stack[top].step;i++)
			{
				roads[pos].r[i][0]=stack[i].x;
				roads[pos].r[i][1]=stack[i].y;
			} 
			pos++;      
		} 
		bool flag=true; 
		for(int i=0;i<4;i++)
		{
			temp=stack[top]; 
			int dx=dir[i][0]+temp.x,dy=dir[i][1]+temp.y;
				if(dx>=0&&dy>=0&&dx<5&&dy<5&&!temp.maze[dx][dy]&&!temp.exdir[i]){
				stack[top].exdir[i]=1;//标记此方向
				temp.maze[temp.x][temp.y]=1; //标记走过的点 
				temp.x=dx;temp.y=dy;  //状态转移到该节点
				temp.step++;        //步数加1 
				stack[++top]=temp;   //结点入栈 
				memset(stack[top].exdir,0,sizeof(stack[top].exdir));
				flag=false;
				break;
				}
		}
		if(flag)
		top--;
	}
	int ans=0;
	for(int i=1;i<pos;i++)
	if(roads[i].step<roads[ans].step)
	ans=i;
	for(int i=0;i<=roads[ans].step;i++)
	cout<<'('<<roads[ans].r[i][0]<<", "<<roads[ans].r[i][1]<<')'<<endl; 
	return 0;
}
/*
测试数据 
0 1 0 0 0
0 0 0 1 0
1 0 1 1 0
1 0 0 0 0
1 1 1 1 0
*/
