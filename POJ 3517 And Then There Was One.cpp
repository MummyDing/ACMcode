#include<iostream>
using namespace std;
int n,m,k;
int Ring(int cnt,int num){
    int temp;
    if(cnt==n){
        temp=(num+m)%cnt;
        if(temp)return temp;
        else return cnt;
    }
    temp=(num+k)%cnt;
    if(!temp)temp=cnt;
    return Ring(cnt+1,temp);
}
int main()
{
    while(cin>>n>>k>>m&&(n||m||k)){
        cout<<Ring(2,1)<<endl;
    }
}
