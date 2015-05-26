#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
const int Max=2500000,Maxh=10005;
bool visit[Maxh]={0},Isprime[Maxh]={0};
int  star,dest;
bool prime(int k){
    for(int i=2;i<=(int)sqrt((float)k);i++)
    if(k%i==0)
    return false;
    return true;
}
struct Node{
    int dig[4],num,step;
}map[Max]={0},temp;
void calc(Node &x){
x.dig[0]=x.num/1000;x.dig[1]=(x.num/100)%10;
x.dig[2]=(x.num/10)%10;x.dig[3]=x.num%10;
}
void calcsum(Node &x){
    x.num=0;
    for(int i=0;i<4;i++)
    x.num+=x.dig[i]*(int)pow((float)10,3-i);
}
int main()
{
    int t;
    cin>>t;
    for(int i=1000;i<10000;i++)
    if(prime(i))
    Isprime[i]=1;
    while(t--){
    memset(visit,0,sizeof(visit));
    int flag=1;
    cin>>star>>dest;
    if(star==dest){
    cout<<0<<endl;
    continue;
    }
    map[0].num=star;  calc(map[0]);  map[0].step=0;
    int nodedir=0,exdir=0;
    while(nodedir<=exdir&&exdir<Max&&flag){
    for(int i=0;i<4&&flag;i++){
    for(int k=0;k<10;k++){
    if(i||k){
    if(i==3&&k%2==0)
    continue;
    temp=map[nodedir];
    temp.dig[i]=k;
    calcsum(temp);
    temp.step++;
    if(temp.num==dest){
    cout<<temp.step<<endl;
    flag=0;
    break;
    }
    if(Isprime[temp.num]&&!visit[temp.num]){
    visit[temp.num]=1;
    map[++exdir]=temp;
    }
    }
    }
    }
    nodedir++;
    }
    if(flag)
    cout<<"Impossible"<<endl;
    }
return 0;
}

