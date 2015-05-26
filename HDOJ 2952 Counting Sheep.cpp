#include<iostream>
#include<string>
#define N 105
using namespace std;
string str[N];
int t,m,n;
int dir[][2]={
    {0,1},{0,-1},{1,0},{-1,0}
};
void dfs(int x,int y ){
    for(int i=0;i<4;i++){
        int dx=x+dir[i][0],dy=y+dir[i][1];
        if(dx>=0&&dx<m&&dy>=0&&dy<n&&str[dx][dy]=='#'){
            str[dx][dy]='.';
            dfs(dx,dy);
        }
    }
}
int main()
{
    cin.sync_with_stdio(false);
    cin>>t;
    while(t--){
        int sum=0;
        cin>>m>>n;
        for(int i=0;i<m;i++)cin>>str[i];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            if(str[i][j]=='#'){
            sum++;
            str[i][j]='.';
            dfs(i,j);
        }
        cout<<sum<<endl;
    }

    return 0;
}
