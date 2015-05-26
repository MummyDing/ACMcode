#include<iostream>
#include<cmath>
using namespace std;
int x,y,z,n;
char ch;
int main()
{
    while(cin>>x>>ch>>z){
        if(!x&&!z)break;
        n=x*pow(10.0,z);
        int pos=log((double)n)/log(2.0);
        n-=pow(2.0,pos);
        n=n*2+1;
        cout<<n<<endl;
    }
    return 0;
}
