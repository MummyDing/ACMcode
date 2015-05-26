//要字典序输出 
#include<cstdio>
#include<cstring>
const int Max=30;
struct Node{
	bool square;
	int prex,prey;
} map[Max][Max];
int t,x,y,endx,endy,squares,pos,posx[Max][2];
int dir[8][2]={
	{-1,-2},{1,-2},
	{-2,-1}, {2,-1},
	 {-2,1},{2,1},
	{-1,2},{1,2}
};
bool flag=false; 
void dfs(int dx,int dy,int step){
	if(step==x*y){
		endx=dx; endy=dy;
		flag=true;
		return;
	}
	for(int i=0;i<8&&!flag;i++){
		int tempx=dx+dir[i][0],tempy=dy+dir[i][1];
	if(tempx>=0&&tempx<x&&tempy>=0&&tempy<y&&map[tempx][tempy].square){
		map[tempx][tempy].square=false;
		map[tempx][tempy].prex=dx;map[tempx][tempy].prey=dy;
		dfs(tempx,tempy,step+1);
		map[tempx][tempy].square=true;
	}
	}		
}
void  init(){
	for(int i=0;i<x;i++)
	for(int j=0;j<y;j++)
	map[i][j].square=true;
}
int main(){
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
	scanf("%d%d",&x,&y);  squares=x*y;flag=false; 
	printf("Scenario #%d:\n",k);
	for(int i=0;i<x&&!flag;i++)
	for(int j=0;j<y&&!flag;j++){
		init( );      //初始化棋盘 
		map[i][j].prex=map[i][j].prey=-1;map[i][j].square=false;
		dfs(i,j,1);
		if(flag){  //成功 
		int px=endx,py=endy; pos=0;
		posx[pos][0]=px;posx[pos++][1]=py;
		//printf("%c%d",endx+'A',endy+1);
		while(map[px][py].prex!=-1&&map[px][py].prey!=-1){
		int tempx=px;
		px=map[px][py].prex;py=map[tempx][py].prey;
		posx[pos][0]=px;posx[pos++][1]=py;
		}
		for(int z=pos-1;z>=0;z--)
		printf("%c%d",posx[z][1]+'A',posx[z][0]+1);
		break;		
		}
	}
	if(!flag){//失败 
		printf("impossible");	
	} 
	printf("\n\n");
	}
	return 0;
}
