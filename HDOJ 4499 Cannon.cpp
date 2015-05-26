#include<iostream>
#include<cstring>
#define N 6
using namespace std;
int init[N][N];
int n,m,q,tx,ty,res;
bool check(int x,int y){
    if(init[x][y])return false;
   init[x][y]=2;
    for(int i=0;i<y-1;i++){
        if(init[x][i]==2){
            int k=i+1,flag=0;
            while(k<=y){
                if(init[x][k]==2&&flag){
                        init[x][y]=0;return false;
                }
                if(init[x][k]>0)flag++;
                if(flag>1)break;
                k++;
            }
        }
    }
    for(int i=0;i<x-1;i++){
        if(init[i][y]==2){
            int k=i+1,flag=0;
            while(k<=x){
                if(init[k][y]==2&&flag){
                    init[x][y]=0;return false;
                }
                if(init[k][y]>0)flag++;
               if(flag>1)break;
                k++;
            }
        }
    }
    init[x][y]=0;
    return true;
}
void dfs(int x,int y,int cnt){
    if(cnt>res)res=cnt;
     if(y==m){
        x++;y=0;
        if(x>=n)return;
    }
    for(int i=x;i<n;i++)
    for(int j=y;j<m;j++){
        if(check(i,j)){
            init[i][j]=2;
            dfs(i,j+1,cnt+1);
            init[i][j]=0;
        }
        return dfs(i,j+1,cnt);
    }
}
int main()
{
    cin.sync_with_stdio(false);
    while(cin>>n>>m>>q)
    {
        res=0;
        memset(init,0,sizeof(init));
        while(q--){
            cin>>tx>>ty; init[tx][ty]=1;
        }
        dfs(0,0,0);
        cout<<res<<endl;
    }
    return 0;
}
