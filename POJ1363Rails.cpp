#include<cstdio>
#define Max 1000+2
int n;
int stack[Max],dest[Max];
int main(){
	while(scanf("%d",&n),n){
		while(scanf("%d",&dest[0]),dest[0]){
			for(int i=1;i<n;i++)
			scanf("%d",&dest[i]);
		int num=1,top=-1,pos=0; bool flag=true;
		while(pos<n&&flag){
			if(dest[pos]==num){
				num++; pos++;
			}
			else if(~top&&stack[top]==dest[pos]){
				pos++; top--;
			}
			else if(num<=n){
				stack[++top]=num++;
			}
			else flag=false;
		}
		if(flag) printf("Yes\n");
		else printf("No\n");
		}
		printf("\n");
	}
	return 0;
} 
