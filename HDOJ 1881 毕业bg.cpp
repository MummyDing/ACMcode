#include<iostream>
#include<cstring>
#define maxn 35
using namespace std;
struct Node{
    int h,l,t;
}data[maxn];
int n,res;
bool visit[maxn];
void dfs(int p,int h){
    if(h>res)res=h;
    for(int i=0;i<n;i++)
    if(!visit[i]&&(p+data[i].l)<=data[i].t){
        visit[i]=true;
        dfs(p+data[i].l,h+data[i].h);
        visit[i]=false;
    }
}
int main()
{
    cin.sync_with_stdio(false);
    while(cin>>n&&n>=0){
        res=0; memset(visit,0,sizeof(visit));
      for(int i=0;i<n;i++)
        cin>>data[i].h>>data[i].l>>data[i].t;
      dfs(0,0);
      cout<<res<<endl;
    }

    return 0;
}
