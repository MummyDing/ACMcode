#include<stdio.h>
#include<string.h>
#define Max 100
char str1[Max],str2[Max],sum[Max];
int i,j,L1,L2,a[Max],b[6];
void sub()
{
	for(i=0;i<L1;i++)
	{
		a[i]-=b[i];
		if(a[i]<0)
		{
			a[i]+=10;
			a[i+1]--;
		}
	}
	for(i=L1-1;i>=0&&a[i]==0;)
	{
		i--;
	}
	int m=i;
	sum[i+1]='\0';
	for(;i>=0;i--)
	sum[m-i]=a[i]+'0';
}
int cmp()
{
	int m=strlen(sum),n=strlen(str2);
	if(m==n)
	{
		return strcmp(sum,str2);
	}
	else return m>n ? 1:-1;
}
int main()
{
	while(scanf("%s%s",str1,str2)!=EOF)
	{
		//初始化 
		memset(sum,'0',sizeof(sum)); 
		sum[Max]='\0';
		int falg,s=1;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		L1=strlen(str1);  L2=strlen(str2);
		//字符串转化成数字 
		for(i=0;i<L1;i++)
		a[L1-1-i]=str1[i]-'0';
		for(i=0;i<L2;i++)
		b[L2-1-i]=str2[i]-'0';
		//取模 
		while(1)
		{
			sub();
			falg=cmp();
			if(falg==1)
			{
				continue;
			}
			else if(falg==0)
			{
			   s=0;
			   printf("0\n");
			   break;
			}
			else if(falg==-1)
			{
				break;
			}
		} 
		if(s)
			{
				printf("%s\n",sum);
			}
	}
	
	return 0;
}
