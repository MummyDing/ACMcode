#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdio>
#define maxn 600
using namespace std;
int num[maxn],pos;
string str;
bool IsF(string x){
    int L=x.size();
    for(int i=0;i<L;i++)if(x[i]!='5')return false;
    return true;
}
int StrToNum(string x){
    if(IsF(x))return -1;
    int tmp=x.find('5');
    if(tmp!=string::npos){
        x=x.substr(0,tmp);
    }
    int sum=0,L=x.size();
    for(int i=0;i<L;i++)
        sum+=(x[i]-'0')*(int)pow(10.0,L-i-1);
    return sum;
}
int main()
{

    while(cin>>str){
        pos=0;
        int len=str.size(),p=0;
        for(int i=0;i<len;i++){
            if(str[i]=='5'){
                if(i-1<len&&str[i+1]=='5')continue;
                if(p!=i){
                    num[pos++]=StrToNum(str.substr(p,i-p));
                    p=i+1;
                }
            }
        }
        if(str[len-1]!='5')num[pos++]=StrToNum(str.substr(p,len-p));
        sort(num,num+pos);
        for(int i=0;i<pos;i++)
            if(num[i]==-1)continue;
            else printf(i!=pos-1 ? "%d ":"%d\n",num[i]);
    }
    return 0;
}
