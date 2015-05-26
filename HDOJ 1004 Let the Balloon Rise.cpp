#include<iostream>
#include<string>
#define N 1000+5
using namespace std;
struct Node{
    int sum;
    string color;
}ball[N];
int n,total,pos;
string str,res;
int FindBall(string x){
    for(int i=0;i<pos;i++)
        if(ball[i].color==x)return i;
    return -1;
}
int main()
{
    while(cin>>n&&n){
            pos=total=0;
        while(n--){
            cin>>str;
            int tmp=FindBall(str);
            if(tmp!=-1){

                ball[tmp].sum++;
                if(ball[tmp].sum>total)
                total=ball[tmp].sum,res=str;
            }
            else
            ball[pos].color=str,ball[pos++].sum=1;
        }
        if(total)
        cout<<res<<endl;
        else cout<<str<<endl;
    }
    return 0;
}
