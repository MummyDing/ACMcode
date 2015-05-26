#include<cstdio>
int father[100001],t,n,m,x,y;
bool r[100001],fa,fb; char ch;
int find(int k){
	int temp;
	if(k!=father[k]){
	temp=father[k];
	father[k]=find(father[k]);
	r[k]^=r[temp];
	}
	return father[k];
}
int main()
{
	scanf("%d",&t);
	while(t--){
	scanf("%d%d",&n,&m);  
	for(int i=1;i<=n;i++){
		father[i]=i; r[i]=false;
	}
	while(m--){
		 getchar();
		scanf("%c%d%d",&ch,&x,&y);
		int tempx=find(x),tempy=find(y);
		if(ch=='A'){
		if(tempx!=tempy) printf("Not sure yet.\n");//not sure;
		else if(r[x]^r[y])printf("In different gangs.\n");
		else printf("In the same gang.\n");	
		}
		else {
			father[tempx]=tempy; r[tempx]=r[x]^r[y]^1; 
		}
	}
	}
	return 0;
}

