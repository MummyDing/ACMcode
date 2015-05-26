#include<iostream>
#define N 31
using namespace std;
int Num[N]={0},n,t;
int Calc(int k)
{
    if(Num[k])return Num[k];
    Num[k]=(Calc(k-1)-1)*2;
    return Num[k];
}

int main()
{
    Num[0]=3;
    Calc(30);
    cin>>t;
    while(t--){
        cin>>n;
        cout<<Num[n]<<endl;
    }
    return 0;
}
