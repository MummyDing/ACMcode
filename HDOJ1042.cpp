#include <stdio.h>
int main() 
{
 long long i,n,m=1;
while((scanf("%lld",&i))!=EOF)
{m=1;
for(n=1;n<=i;n++)
{
m=m*n;
}
printf("%lld\n",m);
}

return 0;
}
