#include<stdio.h>
#include<math.h>
int main()
 {  long long f(long long c,long long d,long long m);
 long long n,g[1000000001]; long long c,d; 
 while ((scanf("%lld%lld%lld",&c,&d,&n)!=EOF)) //f(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) mod 7.
 {
 g[n]=f(c,d,n);
 printf("%lld\n",g[n]);

 }
  return 0;
 }
  long long f(long long c,long long d,long long m)
 { 
 long long a; 

 	if(c==d==m==0)
 	;
 	else if ((m==1)||(m==2)) 
 	a=1;
 	else
 {
 	
 	a=(c* f(c,d,m - 1) + d * f(c,d,m - 2))%7;
 	  
 	}
 return a;
 }
