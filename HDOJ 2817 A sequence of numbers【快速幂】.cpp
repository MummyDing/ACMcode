#include<iostream>
#define Mod 200907
#define LL long long
using namespace std;
LL x,y,z,k,sum,t;
LL pow_mod(LL m,LL k){
    if(k==0)return 1;
    if(k==1)return m%Mod;
    LL ans=pow_mod(m,k/2);
    ans=(ans*ans)%Mod;
    if(k&1)ans=(ans*m)%Mod;
    return ans;
}
int main()
{
    cin.sync_with_stdio(false);
    cin>>t;
    while(t--){
        cin>>x>>y>>z>>k;
        bool flag=false;
        if(y-x==z-y)flag=true;
        if(flag){
            LL d=y-x;
            sum=(x%Mod+(k-1)*(d%Mod)%Mod)%Mod;
        }
        else {
            LL q=y/x;
            sum=((x%Mod)*pow_mod(q,k-1))%Mod;
        }
        cout<<sum<<endl;
    }
    return 0;
}
