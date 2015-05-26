#include<stdio.h>
#include<string.h>
#define N 31
int n,Num[N];
int Calc(int k)
{
    if(Num[k])return Num[k];
    Num[k]=2*(Calc(k+1)+1);
    return Num[k];
}
int main()
{
    while(~scanf("%d",&n))
    {
        memset(Num,0,sizeof(Num));
        Num[n]=1;
        printf("%d\n",Calc(1));
    }
    return 0;
}
