#include<iostream>
#include<cstdio>
#include<algorithm>
#define N 1000+5
using namespace std;
int num[N],n,t;
int main()
{
    cin.sync_with_stdio(false);
    while(cin>>t)
    {
        while(t--)
        {
         cin>>n;
        for(int i=0;i<n;i++)cin>>num[i];
        sort(num,num+n);
        for(int i=0;i<n;i++)
            printf(i!=n-1 ?"%d ":"%d\n",num[i]);

        }
    }
    return 0;
}
