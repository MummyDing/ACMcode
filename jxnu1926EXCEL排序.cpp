#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
struct S
{
	char xuehao[7];
    char name[9];
	int sorce;
};
S a[100001];
bool cmp1(S b,S c)
{
	return strcmp(b.xuehao,c.xuehao)<0? true:false;
}
bool cmp2(S b,S c)
{
	if(!strcmp(b.name,c.name)) return strcmp(b.xuehao,c.xuehao)<0? true:false;
	return strcmp(b.name,c.name)<0? true:false;
}
bool cmp3(S b,S c)
{
	if(c.sorce==b.sorce)return strcmp(b.xuehao,c.xuehao)<0? true:false;
	return b.sorce<c.sorce;
}
int main()
{
	int m,n,i,num=1;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(!m) break;
		for(i=0;i<m;i++)
		{
			scanf("%s",a[i].xuehao);
			scanf("%s",a[i].name);
			scanf("%d",&a[i].sorce);
		}
       if(n==1) sort(a,a+m,cmp1);
		if(n==2){
		sort(a,a+m,cmp2);	
		}
		if(n==3)
		{
			sort(a,a+m,cmp3);
		}
		
		cout<<"Case "<<num++<<":"<<endl;
		for(i=0;i<m;i++)
		{
		printf("%s ",a[i].xuehao);
		printf("%s ",a[i].name);
		printf("%d\n",a[i].sorce);	
		}
	}
	return 0;
}
