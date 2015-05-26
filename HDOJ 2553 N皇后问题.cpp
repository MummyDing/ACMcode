#include<iostream>
#include<cstring>
#define N 11
using namespace std;
int sum,n,r[N],k;
bool chess[N][N];
int dir[8][2]={
    {0,1},{0,-1},{1,0},{-1,0},
    {1,1},{1,-1},{-1,1},{-1,-1}
};
void Copy(bool x[N][N],bool y[N][N]){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        x[i][j]=y[i][j];
}
void SetFlag(int x,int y){
    chess[x][y]=true;
    for(int i=0;i<8;i++){
        int dx=x+dir[i][0],dy=y+dir[i][1];
        while(dx>=0&&dx<n&&dy>=0&&dy<n){
            chess[dx][dy]=true;
            dx+=dir[i][0]; dy+=dir[i][1];
        }
    }
}
void dfs(int k){
    if(k>=n){
        sum++; return ;
    }
    for(int i=0;i<n;i++){
        if(!chess[k][i]){
            bool temp[N][N];
            Copy(temp,chess);
            SetFlag(k,i);
            dfs(k+1);
            Copy(chess,temp);
        }
    }
}
int main()
{
    for(int i=1;i<N;i++){
        sum=0;
        n=i;
        memset(chess,0,sizeof(chess));
        dfs(0);
        r[i]=sum;
    }
    while(cin>>k&&k){
        cout<<r[k]<<endl;
    }
    return 0;
}
