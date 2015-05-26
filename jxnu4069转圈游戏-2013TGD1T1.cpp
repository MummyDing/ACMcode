#include<stdio.h>
int quickpow(int m,int n,int k)
{
    int b = 1;
    while (n > 0)
    {
          if (n & 1)
             b = (b*m)%k;
          n = n >> 1 ;
          m = (m*m)%k;
    }
    return b;
} 
int main()
{
	int m,n,x,k,i,count=1,Is_line;
	scanf("%d%d%d%d",&n,&m,&k,&x);
	count=quickpow(10,k,n); 
	Is_line=n-m;
	for(i=0;i<count;i++)
	{
   		if(x<Is_line)
			x+=m;
		else 
			x-=Is_line;		
	}
	printf("%d\n",x);
	return 0;
}
