#include<iostream>
#include<cstring>
#define N 11
using namespace std;
int n,gx,gy,x,y,maze[N][N],pie[N][2];
char ch,chess[N][N];
int hdir[8][2]={
    {-2,-1},{-2,1},{-1,2},{1,2},
    {2,-1},{2,1},{-1,-2},{1,-2}
};
int Isdir[4][2]={
    {-1,0},{0,1},{1,0},{0,-1}
};
bool In(int dx,int dy){
    if(dx>0&&dx<11&&dy>0&&dy<11)return true;
    return false;
}
void SetFlag(int dx,int dy){
    int tx,ty;
    switch(chess[dx][dy]){
    case 'G':
        tx=dx-1;
        while(tx>0&&chess[tx][dy]==0){
            maze[tx][dy]=0;tx--;
        }
        if(tx>0)maze[tx][dy]=0;
        break;
    case 'H':
        for(int i=0;i<8;i++){
            tx=dx+hdir[i][0],ty=dy+hdir[i][1];
            if(In(tx,ty)&&!chess[Isdir[i/2][0]+dx][Isdir[i/2][1]+dy]){
                maze[tx][ty]=0;
            }
        }
        break;
    case 'C':
        for(int i=0;i<4;i++){
            tx=Isdir[i][0]+dx,ty=Isdir[i][1]+dy;
            while(In(tx,ty)&&!chess[tx][ty]){
                tx+=Isdir[i][0];ty+=Isdir[i][1];
            }
            tx+=Isdir[i][0];ty+=Isdir[i][1];
            while(In(tx,ty)&&!chess[tx][ty]){
                maze[tx][ty]=0;
                tx+=Isdir[i][0];ty+=Isdir[i][1];
            }
        }
        break;
    case 'R':
        for(int i=0;i<4;i++){
            int tx=Isdir[i][0]+dx,ty=Isdir[i][1]+dy;
            while(In(tx,ty)&&!chess[tx][ty]){
                maze[tx][ty]=0;
                tx+=Isdir[i][0];ty+=Isdir[i][1];
            }
            if(In(tx,ty))maze[tx][ty]=0;
        }
        break;
    }
}
int main()
{
    cin.sync_with_stdio(false);
    while(cin>>n>>gx>>gy&&(n||gx||gy)){
        int pos=0;
        memset(maze,-1,sizeof(maze));
        memset(chess,0,sizeof(chess));
        while(n--){
            cin>>ch>>x>>y;
            pie[pos][0]=x;pie[pos++][1]=y;
            chess[x][y]=ch;
        }
        for(int i=0;i<pos;i++)
        SetFlag(pie[i][0],pie[i][1]);
        bool live=false;
        if(maze[gx][gy])live=true;
        for(int i=0;i<4;i++){
            int tx=gx+Isdir[i][0],ty=gy+Isdir[i][1];
            if(tx>0&&tx<4&&ty>3&&ty<7&&maze[tx][ty])live=true;
        }
        if(live)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
