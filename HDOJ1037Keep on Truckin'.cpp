#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		if(a<168)
		{
			printf("CRASH %d\n",a);
			continue;
		}
		else if(b<168)
		{
		printf("CRASH %d\n",b);
			continue;	
		}
		else if(c<168)
		{
			printf("CRASH %d\n",c);
			continue;
		}
		else 
		{
			printf("NO CRASH\n");
		}
	}
	return 0;
}
