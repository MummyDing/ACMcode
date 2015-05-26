#include<iostream>
#define N 100000+5
using namespace std;
int dp[N],t,n;
int main()
{
    cin.sync_with_stdio(false);
    cin>>t;
    for(int k=1;k<=t;k++){
        cin>>n;
        for(int i=0;i<n;i++)cin>>dp[i];
        int sum=dp[0],tmp=dp[0],s=1,b=1,d=1;
        for(int i=1;i<n;i++){
            if(tmp>=0)
                tmp+=dp[i];
            else
                tmp=dp[i],s=i+1;
            if(tmp>sum) sum=tmp,d=i+1,b=s;
        }
        cout<<"Case "<<k<<":"<<endl;
        cout<<sum<<" "<<b<<" "<<d<<endl;
        if(k!=t)
            cout<<endl;
    }
    return 0;
}
