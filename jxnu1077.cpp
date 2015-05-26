#include<stdio.h>

int main()
{
        int n,a[100000],i,i3=1,i5=1;
        for(i=0;i<100000;i++)
                if(i3*3<i5*5)
                {
                        a[i]=i3*3;
                        i3++;
                }
                else if(i3*3>i5*5)
                {
                        a[i]=i5*5;
                        i5++;
                }
                else
                {
                        a[i]=i3*3;
                        i3++;
                        i5++;
                }
        while(scanf("%d",&n)!=EOF)
                printf("%d\n",a[n-1]);
        return 0;
}
