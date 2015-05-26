#include<stdio.h>
#include<math.h>

int main()
{
        int x,y,i,s,d,n;
        while(scanf("%d%d",&x,&y)!=EOF)
        {
                d=y-x;
                n=sqrt(d);
                if(d<4)
                        printf("%d\n",d);
                else
                {
                        if(d==n*n)
                                s=2*n-1;
                        else if(d>n*n&&d<=n*n+n)
                                s=2*n;
                        else
                                s=2*n+1;
                        printf("%d\n",s);
                }
        }
        return 0;
}
