#include<iostream>
#define M 1000000000
#include<cmath>
using namespace std;
double k,n,p,sum;
int main()
{
    cin.sync_with_stdio(false);
    while(cin>>n>>p){
        for(k=1.0;k<M;){
            double temp=pow(k,n);
            if(temp==p){
            cout<<(int)k<<endl;
            break;
            }
            else if(temp<p){
              k*=2;
            }
            else if(temp>p){
                k--;
            }
        }
    }
    return 0;
}
