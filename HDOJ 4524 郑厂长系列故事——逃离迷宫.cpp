#include<iostream>
#define LL long long
using namespace std;
int t,n;
LL num;
int main()
{
    cin.sync_with_stdio(false);
    cin>>t;
    while(t--){
        LL sum=0;
        cin>>n;
        while(n--){
            cin>>num;
            if(n&1)sum+=num;
            else sum-=num;
        }
        if(sum)cout<<"I will never go out T_T"<<endl;
        else cout<<"yeah~ I escaped ^_^"<<endl;
    }
    return 0;
}
