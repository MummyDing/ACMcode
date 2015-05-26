#include<stdio.h>
int main()
{
long long a,b,m,i,k,j[25],n[50];
scanf("%lld",&m);
getchar();
for(i=0,k=0;k<m; k++)
{scanf("%lld%lld",&n[i],&n[i+1]);
j[k]=n[i]+n[i+1];
i++;i++;
}
for(i=0,k=0;k<m;k++)
{
printf("Case %lld:\n",k+1);
printf("%lld + %lld = %lld",n[i],n[i+1],j[k]);
i++;i++;
printf("\n\n");
return 0;

}
}
