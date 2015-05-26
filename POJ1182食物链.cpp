#include<cstdio>
const int Max=50001;
int n,k,D,x,y,father[Max],r[Max],ans=0;
int find(int t){
	if(t==father[t]) return t;
	int temp=find(father[t]);
	r[t]=(r[t]+r[father[t]])%3;
	father[t]=temp;
	return temp;
}
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		father[i]=i; r[i]=0;
	}
	while(k--){
		scanf("%d%d%d",&D,&x,&y);
		if(x>n||y>n||D==2&&x==y) {
		ans++; continue;       //Ìõ¼þ2 3  
		}
		int tempx=find(x),tempy=find(y);
		if(tempx==tempy){
		  if((r[x]-r[y]+3)%3!=D-1) ans++;
		}
		else {
			father[tempx]=tempy; r[tempx]=(D+2-r[x]+r[y])%3;
		}
	}
	printf("%d\n",ans);
	return 0;
} 
