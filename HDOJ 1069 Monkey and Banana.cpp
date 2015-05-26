#include<iostream>
#include<algorithm>
#include<cstring>
#define N 100
using namespace std;
struct Node{
    int wid,len,high;
}box[N];
int n,dp[N],x,y,z;
bool cmp(Node nx,Node ny){
    if(nx.wid*nx.len-ny.wid*ny.len>0)return false;
    return true;
}
bool IsBig(Node nx,Node ny){
    if(nx.wid<ny.wid&&nx.high<ny.high)return false;
    return true;
}
int main()
{
    cin.sync_with_stdio(false);
    while(cin>>n){
            int pos=0,res=0;
        while(n--){
            cin>>x>>y>>z;
            box[pos].len=max(x,y); box[pos].wid=min(x,y); box[pos++].high=z;//x y
            box[pos].len=max(x,z); box[pos].wid=min(x,z); box[pos++].high=y;//x z
            box[pos].len=max(y,z); box[pos].wid=min(y,z); box[pos++].high=x;//y z
        }
        sort(box,box+pos,cmp);
        cout<<endl;
        for(int i=0;i<pos;i++)
            cout<<box[i].wid<<" "<<box[i].len<<" "<<box[i].high<<endl;
        memset(dp,0,sizeof(dp));
        dp[0]=box[0].high;
        for(int i=0;i<pos;i++)
        for(int j=0;j<i;j++){
            if(IsBig(box[j],box[i])){
                dp[i]=max(dp[i],box[i].high+dp[j]);
            }
            if(dp[i]>res)res=dp[i];
        }
        cout<<res<<endl;
    }


}
