#include <stdio.h>
#include <string.h>
int main()
{
	void add(char str1[1000],char str2[1000]);
	char str1[1000], str2[1000];
	int n,i;
	scanf("%d",&n); 
	
	for(i=1;i<=n;i++)
	{
	scanf("%s%s",str1,str2);
	if(i!=1) printf("\n") ;
	printf("Case %d:\n",i);
	add(str1,str2);
   
   }
   
	return 0;
} 
	void add(char str1[1000],char str2[1000])
	{   
		int L1,L2,i,j,a[1000],b[1000];
		L1=strlen(str1);  L2=strlen(str2);
	    memset(a,0,sizeof(a));
	    memset(b,0,sizeof(b));
			for(i=L1-1,j=0;i>=0;i--,j++)
		{
			a[j]=str1[i]-'0';
		}
		for(i=L2-1,j=0;i>=0;i--,j++)
		{
			b[j]=str2[i]-'0';
		}
	    for(i=0;i<1000;i++)
		{
			a[i]+=b[i];
		if(a[i]>9)
		{
			a[i]-=10;
			a[i+1]++;
		}
		}
			printf("%s + %s = ",str1,str2);
	    bool bs=0;
		for(i=999;i>=0;i--)
		{
			if(bs)
			printf("%d",a[i]);
			else if(a[i])
			{
				printf("%d",a[i]);
		        bs =1;
			}
		}
		printf("\n");
			
	}

