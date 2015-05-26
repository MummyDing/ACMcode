#include<iostream>
#include<cstring>
#include<string>
#define N 1005
using namespace std;
int dp[N][N],res;
string x,y;
int main()
{
    cin.sync_with_stdio(false);
    while(cin>>x>>y){
        res=0;
        memset(dp,0,sizeof(dp));
        int lenx=x.size(),leny=y.size();
        for(int i=1;i<=lenx;i++)
            for(int j=1;j<=leny;j++)
            if(x[i-1]==y[j-1])dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        cout<<dp[lenx][leny]<<endl;
    }
    return 0;
}
