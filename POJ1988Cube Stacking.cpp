#include<cstdio>
const int Max=30001;
int father[Max],loc[Max],root[Max],t,x,y;
char ch;
int find(int k){
	if(k==father[k]) return k;
	int temp=find(father[k]);
	loc[k]+=loc[father[k]];
	father[k]=temp;
	return temp;
}
int main(){
	scanf("%d",&t);
	for(int i=1;i<Max;i++){
		father[i]=i;loc[i]=0;root[i]=1;
	}
	while(t--){
		getchar();
		scanf("%c",&ch);
	if(ch=='M'){
		scanf("%d%d",&x,&y);
		int tempx=find(x),tempy=find(y);
		father[tempy]=tempx;  
		loc[tempy]=root[tempx];
		root[tempx]+=root[tempy];
	}
	else {
		scanf("%d",&x);
		int tempx=find(x);
		printf("%d\n",root[tempx]-loc[x]-1);
	}
	}
	return 0;
} 
