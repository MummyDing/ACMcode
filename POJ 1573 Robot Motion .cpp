#include<iostream>
#include<cstdio>
#define N 12
using namespace std;
char maze[N][N];
int t,m,n,s;
int dir[][2]={
    {-1,0},{1,0},{0,1},{0,-1}
};
int cdir(char ch){
    if(ch=='N')return 0;
    else if(ch=='S')return 1;
    else if(ch=='E')return 2;
    return 3;
}
int main()
{
    while(~scanf("%d%d%d",&m,&n,&s)&&(m||n||s)){
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)cin>>maze[i][j];
        int step=1,x=0,y=s-1,pos=cdir(maze[0][s-1]);
        bool flag=true;
        maze[x][y]=1-step;
        x+=dir[pos][0],y+=dir[pos][1];
        step++;
        while(x>=0&&x<m&&y>=0&&y<n){
            if(maze[x][y]<=0){
                printf("%d step(s) before a loop of %d step(s)\n",-maze[x][y],step+maze[x][y]-1);
                flag=false;
                break;
            }
            else {
                pos=cdir(maze[x][y]);
                maze[x][y]=1-step;
                x+=dir[pos][0],y+=dir[pos][1];
            }
            step++;
        }
        if(flag)
            printf("%d step(s) to exit\n",step-1);
    }
    return 0;
}
