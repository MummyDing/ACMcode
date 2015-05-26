#include<iostream>
#include<string>
#define maxn 105
using namespace std;
string chess[maxn];
int m,n;
int dir[8][2]={
    {1,0},{-1,0},{0,1},{0,-1},
    {1,1},{1,-1},{-1,1},{-1,-1}
};
void dfs(int x,int y){
    for(int i=0;i<8;i++){
        int dx=x+dir[i][0],dy=y+dir[i][1];
        if(dx>=0&&dx<m&&dy>=0&&dy<n&&chess[dx][dy]=='@'){
            chess[dx][dy]='*';
            dfs(dx,dy);
        }
    }
}
int main()
{
    cin.sync_with_stdio(false);
    while(cin>>m>>n){
            int sum=0;
        for(int i=0;i<m;i++) cin>>chess[i];
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            if(chess[i][j]=='@'){
                chess[i][j]='*';
                dfs(i,j);
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
