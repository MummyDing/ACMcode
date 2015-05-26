#include<iostream>
#define maxn 10000+5
using namespace std;
bool round[maxn];
int n,m,k,pos,cnt;
int main()
{
    cin.sync_with_stdio(false);
    while(cin>>n>>k>>m){// 8 5 3
        cnt=n-1;
        for(int i=0;i<n;i++)round[i]=true;
        m=(m-1)%n;
        round[m]=false;
        pos=m;
        while(cnt){
            int tmpcnt=0;
            while(tmpcnt!=k){
                pos++;
                pos%=n;
                if(round[pos])tmpcnt++;
            }
            round[pos]=false;
            cnt--;
        }
        cout<<pos+1<<endl;
    }
    return 0;
}
