#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring> 
#define Max 200005
using namespace std;
char num[]={'2','2','2','3','3','3','4','4','4','5','5','5','6','6','6','7','0','7','7','8','8','8','9','9','9','0'};
int n;
char Map[100],temp[100];
struct Node{
	char s[50];
}str[Max]; 
void init(){
	for(int i=0;i<26;i++)
	Map[i+'A']=num[i];
	return ;
}
int cmp(const void *s,const void *t)
{
	return strcmp( (*(Node *)s).s , (*(Node *)t).s);
}
int main()
{
	scanf("%d",&n);
	init();
	for(int i=0;i<n;i++)
	{
		int pos=0;
		scanf("%s",temp);
		for(int k=0;k<strlen(temp);k++)
		{
			if(temp[k]=='-'||temp[k]=='Q'||temp[k]=='Z') continue;
			if(temp[k]>='0'&&temp[k]<='9') str[i].s[pos++]=temp[k];
			else if(temp[k]<='Z'&&temp[k]>='A') str[i].s[pos++]=Map[temp[k]]; 	 	
			if(pos==3) str[i].s[pos++]='-';
		}
		str[i].s[pos]='\0';
	}
 
	qsort(str,n,sizeof(str[0]),cmp); 
	int pos=0; bool flag=true;
	for(int i=1;i<n;i++){
		if(!strcmp(str[i].s,str[i-1].s)){
			pos++;
			flag=false;
			if(i==n-1) cout<<str[i-1].s<<" "<<pos+1<<endl;
		}
		else if(pos){
			cout<<str[i-1].s<<" "<<pos+1<<endl;
			pos=0;
		}
	}
	if(flag) cout<<"No duplicates."<<endl;
	
	return 0;
}
