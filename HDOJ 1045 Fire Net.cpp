#include<iostream>
#include<string>
#define maxn 5
using namespace std;
string chess[maxn],init[maxn];
int n,res;
int dir[4][2]={
    {0,1},{0,-1},{1,0},{-1,0}
};
void Copy(string x[],string y[]){
    for(int i=0;i<n;i++)
        x[i]=y[i];
}
void SetFlag(int x,int y){
    chess[x][y]='#';
    for(int i=0;i<4;i++){
        int dx=x+dir[i][0],dy=y+dir[i][1];
        while(dx>=0&&dx<n&&dy>=0&&dy<n&&init[dx][dy]=='.'){
            chess[dx][dy]='X';
            dx+=dir[i][0]; dy+=dir[i][1];
        }
    }
}
void dfs(int s,int cnt){
    if(s>=n)return ;
    if(res<cnt)res=cnt;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(s>=0&&s<n&&chess[s][i]=='.'){
            flag=false;
            string temp[maxn];
            Copy(temp,chess);
            SetFlag(s,i);
            if(i==n-1)dfs(s+1,cnt+1);
            else dfs(s,cnt+1);
            Copy(chess,temp);
        }
    }
    if(s<n-1&&flag)dfs(s+1,cnt);
}
int main()
{
    while(cin>>n&&n){
        res=0;
        for(int i=0;i<n;i++) cin>>init[i];
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(init[i][j]=='.'){
                Copy(chess,init);
                SetFlag(i,j);
                dfs(0,1);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
