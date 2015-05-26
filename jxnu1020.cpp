#include<iostream>
using namespace std;
int n[1000]={};
int b[100];
int main()
{
    int N,i,j=0;
    cin>>N;
    while(N!=0){
        for(i=0;i<N;i++){
        cin>>b[i];    
        }
        n[j]+=N*5+b[0]*6;
        for(i=0;i<N-1;i++)
        {
            if(b[i]<b[i+1])
            n[j]+=(b[i+1]-b[i])*6;
           else
            n[j]+=(b[i]-b[i+1])*4;
           }
           j++;  cin>>N;
    }
    for(i=0;n[i]!=0;i++)
    cout<<n[i]<<endl;
    return 0;
}
