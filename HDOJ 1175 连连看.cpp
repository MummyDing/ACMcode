#include<iostream>
#define N 1000+5
using namespace std;
int maze[N][N],init[N][N],m,n,x1,x2,y1,y2,q;
int dir[4][2]={
    {0,1},{0,-1},{-1,0},{1,0}
};
void Copy(int x[N][N],int y[N][N]){
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)x[i][j]=y[i][j];
}
bool dfs(int x,int y,int d,int cnt){
    if(cnt>2)return false;
    for(int i=0;i<4;i++){
        int dx=x+dir[i][0],dy=y+dir[i][1],tmpdir=cnt;
        if(d!=-1&&d!=i)tmpdir++;
        if(dx==x2&&dy==y2){
            if(tmpdir<=2)return true; return false;
        }
        if(dx>=0&&dx<n&&dy>=0&&dy<m&&!maze[dx][dy]){
            maze[dx][dy]=-1;
            if(dfs(dx,dy,i,tmpdir))return true;
            maze[dx][dy]=0;
        }
    }
    return false;
}
int main()
{
    cin.sync_with_stdio(false);
    while(cin>>n>>m&&(n||m)){
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)cin>>init[i][j];
        cin>>q;
        while(q--){
                Copy(maze,init);
                cin>>x1>>y1>>x2>>y2;
                x1--,x2--,y1--,y2--;
            if(maze[x1][y1]!=maze[x2][y2]||!maze[x1][y1]||!maze[x2][y2])cout<<"NO"<<endl;
            else if(dfs(x1,y1,-1,0))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
