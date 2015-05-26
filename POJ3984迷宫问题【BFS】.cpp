/*
MummyDing
POJ 3984迷宫问题BFS
*/ 
#include<iostream>
#include<cstring>
#define Max 500
using namespace std;
struct Node{
	int maze[5][5];
	int x,y,step,pre;  //pre用来记录上个节点的位置 
}map[Max]={0},temp={0}; 
int  road[30][2], exdir=0,nodedir=0;
int dir[4][2]={
	{0,1},{1,0},{-1,0},{0,-1}
};
bool equal(Node x,Node y)	
{
	for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	if(x.maze[i][j]^y.maze[i][j]) return false;
	return true;
}
bool check(Node x)  //判重 
{
	for(int k=0;k<exdir;k++)
	if(equal(x,map[k])) return false;
	return true;
}
int main()
{
	for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	cin>>map[0].maze[i][j];
	map[0].pre=-1;
 	while(nodedir<=exdir&&exdir<Max)
 	{
 		for(int i=0;i<4;i++)	//四个方向进行搜索 
 		{
 			temp=map[nodedir];// 头结点 
 			temp.pre=nodedir; temp.maze[temp.x][temp.y]=1; //做标记 
 			temp.x+=dir[i][0]; temp.y+=dir[i][1]; temp.step++;
 			if(temp.x<5&&temp.y<5&&temp.x>=0&&temp.y>=0&&!temp.maze[temp.x][temp.y])
 			{
 				if(temp.x==4&&temp.y==4)
 				{
 					int k=temp.step; int m=k;
 				 	road[k][0]=temp.x;road[k--][1]=temp.y;
 				 	for(;k>0;k--){
 				 		road[k][0]=map[temp.pre].x;
 				 		road[k][1]=map[temp.pre].y;
 				 		temp=map[temp.pre];
 				 	}
 				 	for(int k=0;k<=m;k++)
 				 	cout<<'('<<road[k][0]<<", "<<road[k][1]<<')'<<endl; 
 					return 0; 
 				}
 				else if(check(temp)) //该节点没有就加到队列中 
 					map[++exdir]=temp;
 			}
 		}
 		nodedir++;
 	}
 	return 0;
}
/*
0 1 0 0 0
0 0 0 1 0
1 0 1 1 0
1 0 0 0 0
1 1 1 1 0
*/
