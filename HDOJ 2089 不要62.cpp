#include<iostream>
#define maxn 1000000+5
using namespace std;
int num,sum[maxn]={0},x,y;
bool IsGood(int x){
    int flag=0;
    while(x){
        if(x%10==4)return false;
        if(x%10==6&&flag)return false;
        flag=0;
        if(x%10==2)flag=1;
        x/=10;
    }
    return true;
}
int main()
{
    cin.sync_with_stdio(false);
    for(int i=1;i<maxn;i++)sum[i]=IsGood(i);
    for(int i=1;i<maxn;i++)sum[i]+=sum[i-1];
    while(cin>>x>>y&&(x||y)){
        cout<<sum[y]-sum[x-1]<<endl;
    }
    return 0;
}
