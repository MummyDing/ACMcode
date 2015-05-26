#include<iostream>
#define LL long long
using namespace std;
LL temp,sum,x,y,d;
int t,n;
LL gcd(LL m,LL k){
    return !k ? m:gcd(k,m%k);
}
int main()
{
    cin.sync_with_stdio(false);
    while(cin>>t){
        while(t--){
            cin>>n;
            cin>>temp;
            d=sum=temp;
            while(--n){
                cin>>temp;
                sum*=temp;
                d=gcd(d,temp);
                d=sum/d;
                sum=d;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
