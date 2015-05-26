#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
        int a[1000],i,n;
        while(scanf("%d",&n)!=EOF)
        {
                for(i=0;i<n;i++)
                        scanf("%d",&a[i]);
                sort(a,a+n);
                printf("%d\n",a[n-1]);
                if(n==1)
                        puts("-1");
                else
                {
                        for(i=0;i<n-1;i++)
                                printf(i==n-2?"%d\n":"%d ",a[i]);
                }
        }
        return 0;
}
