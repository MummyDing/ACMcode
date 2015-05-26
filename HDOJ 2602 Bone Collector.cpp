#include<iostream>
#include<cstring>
#define N 10005
using namespace std;
struct{
    int v,c;
}Bag[N];
int n,v,f[N],t;
int main()
{
    cin.sync_with_stdio(false);
    cin>>t;
    while(t--){
        cin>>n>>v;
        for(int i=1;i<=n;i++)
            cin>>Bag[i].c;
        for(int i=1;i<=n;i++)
            cin>>Bag[i].v;
        memset(f,0,sizeof(f));
        for(int i=1;i<=n;i++)
            for(int j=v;j>=Bag[i].v;j--)
            f[j]=max(f[j],f[j-Bag[i].v]+Bag[i].c);
        cout<<f[v]<<endl;
    }
    return 0;
}
