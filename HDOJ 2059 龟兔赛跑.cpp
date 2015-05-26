#include<iostream>
#include<cstring>
#define maxn 105
#define inf 0xffffffff
using namespace std;
double dp[maxn],p[maxn],v,v1,v2,c,t,L;
int n;
int main()
{
    while(cin>>L)
    {
        memset(dp,0,sizeof(dp));
        memset(p,0,sizeof(p));
        cin>>n>>c>>t>>v>>v1>>v2;
        for(int i=1;i<=n;i++)cin>>p[i];
        p[n+1]=L;
        for(int i=1;i<=n+1;i++){
            double temp=inf;
            for(int j=0;j<i;j++){
                double dis=p[i]-p[j];
                double time=dis>c ? (dis-c)/v2+c/v1:dis/v1;
                time+=dp[j];
                if(j)time+=t;
                temp=min(temp,time);
            }
            dp[i]=temp;
        }
        if(L/v<dp[n+1])cout<<"Good job,rabbit!"<<endl;
        else cout<<"What a pity rabbit!"<<endl;
    }
    return 0;
}
