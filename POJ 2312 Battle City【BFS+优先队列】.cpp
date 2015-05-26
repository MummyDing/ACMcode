#include<iostream>
#include<cstring>
#include<queue>
#define N 305
using namespace std;
int n,m,sx,sy,ex,ey,visit[N][N];
int dir[][2]={
    {0,1},{0,-1},{1,0},{-1,0}
};
char chess[N][N];
struct Node{
    int x,y,s;
    friend bool  operator <(Node a,Node b ){
        return a.s>b.s;
    }
};
bool ok(int x,int y){
    if(x>=0&&x<m&&y>=0&&y<n&&chess[x][y]!='S'&&chess[x][y]!='R')
        return true;
    return false;
}
int bfs(){
    priority_queue<Node> q;
    memset(visit,-1,sizeof(visit));
    visit[sx][sy]=0;
    Node head={sx,sy,0};
    q.push(head);
    while(!q.empty())
    {
        Node f=q.top();
        q.pop();
        if(f.x==ex&&f.y==ey)return f.s;
        for(int i=0;i<4;i++){
            int dx=f.x+dir[i][0],dy=f.y+dir[i][1];
            if(ok(dx,dy)&&visit[dx][dy]){
                visit[dx][dy]=0;
                int temp=0;
                if(chess[dx][dy]=='B')temp=2;
                else temp=1;
                Node tmp={dx,dy,f.s+temp};
                q.push(tmp);
            }
        }
    }
    return -1;
}
int main()
{
    cin.sync_with_stdio(false);
    while(cin>>m>>n&&(m||n))
    {
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                cin>>chess[i][j];
                if(chess[i][j]=='Y'){
                    sx=i;sy=j;
                    chess[i][j]='S';
                }
                else if(chess[i][j]=='T'){
                    ex=i;ey=j;
                }
            }
        cout<<bfs()<<endl;
    }
    return 0;
}
