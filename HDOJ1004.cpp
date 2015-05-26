#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
	int N,i,j,a[1001] ;   char qiqiu[1001][15];
	memset(qiqiu,'0',sizeof(qiqiu));
	while((scanf("%d",&N))!=EOF)
	{
		for(i=0;i<N;i++)
		{
	   scanf("%s",qiqiu[i]);
		}
		for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		{
			if(!(strcmp(qiqiu[i],qiqiu[j])))
			a[i]++;
			a[j]++;
		}
		int temp;
		for(i=0;i<N;i++)
		for(j=0;j<N-i;j++)
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		int b=a[N-1];
		printf("%s",qiqiu[b]);
	}
	
	return 0;
} 
