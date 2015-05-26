#include<cstdio>
#include<cstring>
int a[1000002],n,x,m,pos;
int main(){
	while(~scanf("%d%d",&n,&m)){
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++){
			scanf("%d",&x);
			a[x+500000]=1;
		}
		for(int i=1000000,pos=0;pos<m;i--){
			if(a[i]){
			printf(pos!=m-1 ?"%d ":"%d\n",i-500000);
			pos++;
		}
		}
	}
	return 0;
}
