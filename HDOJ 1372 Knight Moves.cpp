#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#define N 10
using namespace std;
int step[N][N][N][N],visit[N][N];
int dir[][2]={
    {1,2},{1,-2},{-1,2},{-1,-2},
    {2,1},{2,-1},{-2,1},{-2,-1}
};
struct Node{
    int x,y,s;
};
int bfs(int sx,int sy,int ex,int ey)
{
    queue<Node> q;
    Node head={sx,sy,0};
    q.push(head);
    memset(visit,-1,sizeof(visit));
    visit[sx][sy]=0;
    while(q.size()){
        Node f=q.front();
        q.pop();
        if(f.x==ex&&f.y==ey)return f.s;
        for(int i=0;i<8;i++){
            int dx=dir[i][0]+f.x,dy=dir[i][1]+f.y;
            if(dx>=0&&dx<8&&dy>=0&&dy<8&&visit[dx][dy]){
                visit[dx][dy]=0;
                Node t={dx,dy,f.s+1};
                q.push(t);
            }
        }
    }
}
int main()
{
    cin.sync_with_stdio(false);
    memset(step,-1,sizeof(step));
    for(int i=0;i<8;i++)
    for(int j=0;j<8;j++)
        for(int k=0;k<8;k++)
        for(int l=0;l<8;l++)
        if(step[i][j][k][l]!=-1)continue;
        else if(i==k&&j==l) step[i][j][k][l]=0;
        else {
            int temp=bfs(i,j,k,l);
            step[i][j][k][l]=step[k][l][i][j]=temp;
            step[j][i][l][k]=step[l][k][j][i]=temp;
        }
    char c1,c2; int x1,y2;
    while(cin>>c1>>x1>>c2>>y2){
    printf("To get from %c%d to %c%d takes %d knight moves.\n",c1,x1,c2,y2,step[c1-'a'][x1-1][c2-'a'][y2-1]);
    }
    return 0;
}
