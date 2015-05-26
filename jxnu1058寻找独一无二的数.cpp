#include<stdio.h>
#define Max 10001
int main()
{
	int a[Max],m,i,flag,j;
	while((scanf("%d",&m))!=EOF){
		if(!m) break;
		for(i=0;i<m;i++){
		scanf("%d",a[i]);
		}
		for(i=m-1;i>=0;i--){
			flag=0;
			for(j=0;j<i;j++){
			if(a[i]==a[j]){
				a[j]=0;
				flag=1;
			}
		}
		if(flag) a[i]=0;
		}
	for(i=0;i<m;i++)
	{
		if(a[i]){
			printf("%d\n",a[i]);
			break;
		}
	}
	}
	
	
	return 0;
} 
