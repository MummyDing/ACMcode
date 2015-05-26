#include<stdio.h>
int main()
{
	int m;
	while(scanf("%d",&m))
	{
		if((m-2)%4==0)
		printf("yes\n");
		else printf("no\n");
	}
	return 0;
} 
