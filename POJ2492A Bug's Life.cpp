#include<cstdio>
int c,m,n,father[2001],x,y;
bool r[2001],flag,s,t;
int find(int k,bool &f){
	if(k==father[k]){
		f=false; return k;
	}
	int temp;
	temp=find(father[k],f);
	f=r[k]^f;
	return temp;
}
int main(){
	scanf("%d",&c);
	for(int k=1;k<=c;k++){
		flag=true;
		scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		father[i]=i; r[i]=false;
	}	
	for(int i=0;i<m;i++){
		scanf("%d%d",&x,&y);
		if(flag){
			x=find(x,s=false);
			y=find(y,t=false);
			if(x==y)	flag=s^t;
			else {
				father[x]=y;
				r[x]=!(s^t);
			}
		}
	}
	if(flag)  printf("Scenario #%d:\nNo suspicious bugs found!\n\n",k);
	else printf("Scenario #%d:\nSuspicious bugs found!\n\n",k);
	}
	return 0;
} 
