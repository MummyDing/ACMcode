#include<iostream>
#include<string>
#include<cstring>
#include<queue>
#define N 15
using namespace std;
char chess[N][N][N];
string str;
int n,sx,sy,sz,ex,ey,ez,visit[N][N][N];
int dir[][3]={
    {0,0,1},{0,0,-1},{1,0,0},
    {-1,0,0},{0,1,0},{0,-1,0}
};
struct Node{
    int x,y,z,s;
};
bool ok(int x,int y,int z){
    if(x>=0&&x<n&&y>=0&&y<n&&z>=0&&z<n&&chess[x][y][z]=='O')
        return true;
    return false;
}
int bfs(){
    queue<Node> q;
    Node head={sx,sy,sz,0};
    q.push(head);
    memset(visit,-1,sizeof(visit));
    visit[sx][sy][sz]=0;
    while(q.size()){
        Node f=q.front();
        if(f.x==ex&&f.y==ey&&f.z==ez)return f.s;
        q.pop();
        for(int i=0;i<6;i++){
            int dx=f.x+dir[i][0],dy=f.y+dir[i][1],dz=f.z+dir[i][2];
            if(ok(dx,dy,dz)&&visit[dx][dy][dz]){
                visit[dx][dy][dz]=0;
                Node t={dx,dy,dz,f.s+1};
                q.push(t);
            }
        }
    }
    return -1;
}
int main()
{
        while(cin>>str>>n){
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                    for(int k=0;k<n;k++)cin>>chess[k][j][i];
            cin>>sx>>sy>>sz>>ex>>ey>>ez;
            cin>>str;
            int tmp=bfs();
            if(tmp!=-1)cout<<n<<" "<<tmp<<endl;
            else cout<<"NO ROUTE"<<endl;
        }
        return 0;
}
