#include<iostream>
#define LL long long
#define N 1000000+5
using namespace std;
LL num[N]={0},x,y;
LL calc(LL x){
    LL sum=1,p=x;
    if(num[p])return num[p];
    while(x!=1){
      if(x<N&&num[x]){
            if(!num[p])num[p]=num[x]+sum-1;
            return num[p];
        }
        if(x&1)
            x=3*x+1;
        else
            x/=2;
        sum++;
    }
    if(!num[p]) num[p]=sum;
    return sum;
}
int main()
{
    for(LL i=1;i<N;i++)
        num[i]=calc(i);
    while(cin>>x>>y){
        int tx=x,ty=y;
        if(x>y)swap(x,y);
        LL maxlen=num[x];
        for(LL i=x+1;i<=y;i++)
            if(num[i]>maxlen) maxlen=num[i];
        cout<<tx<<" "<<ty<<" "<<maxlen<<endl;
    }
    return 0;
}
