#include<iostream>
#include<cmath>
using namespace std;
int x,y,z,n;
char ch;
int Ring(int cnt,int num){
    int temp;
    if(cnt==n){
        temp=(num+2)%cnt;
        if(temp)return temp;
        else return cnt;
    }
    temp=(num+2)%cnt;
    if(!temp)temp=cnt;
    return Ring(cnt+1,temp);
}
int main()
{
    while(cin>>x>>ch>>z){
         if(!x&&!z)break;
        n=x*pow(10.0,z);
        cout<<Ring(2,1)<<endl;
    }
}
