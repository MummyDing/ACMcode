#include<stdio.h>

int main()
{
        int n,p,i,s;
        while(scanf("%d",&n)!=EOF,n)
        {
                s=0;
                for(i=0;i<n;i++)
                {
                        scanf("%d",&p);
                        s^=p;
                }
                printf("%d\n",s);
        }
        return 0;
}
