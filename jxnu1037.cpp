#include<stdio.h>

int leap(int y)
{
        return y%4==0&&y%100!=0||y%400==0?1:0;
}

int main()
{
        int t,y,m,d,i,s;
        scanf("%d",&t);
        while(t--)
        {
                scanf("%d-%d-%d",&y,&m,&d);
                s=6570;
                if(m==2&&d==29)
                {
                        if(!leap(y+18))
                                printf("-1\n");
                        else
                        {
                                for(i=y+1;i<=y+18;i++)
                                        if(!leap(i))
                                                s--;
                                printf("%d\n",s);
                        }
                }
                else
                {
                        if(m<=2)
                        {
                                for(i=y;i<y+18;i++)
                                        if(leap(i))
                                                s++;
                        }
                        else
                                for(i=y+1;i<=y+18;i++)
                                        if(leap(i))
                                                s++;
                        printf("%d\n",s);
                }
        }
        return 0;
}
