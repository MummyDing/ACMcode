#include<iostream>
#define LL long long
#define maxn 45
using namespace std;
LL f[maxn]={0};
LL calc(int k){
    if(f[k])return f[k];
    f[k]=calc(k-1)+calc(k-2);
    return f[k];
}
int main()
{
    cin.sync_with_stdio(false);
    f[1]=1;f[2]=1;
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<calc(n)<<endl;
    }
    return 0;
}
