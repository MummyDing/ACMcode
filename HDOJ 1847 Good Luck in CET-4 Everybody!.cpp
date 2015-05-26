#include<iostream>
#include<string>
#define N 1005
using namespace std;
string s[]={"Cici","Kiki"};
int n;
int main()
{
    while(cin>>n){
        cout<<s[n%3!=0]<<endl;
    }
    return 0;
}
