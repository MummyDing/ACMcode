#include<cstdio>
const int INF=1000000000; 
int n,map[105][105],wage;
bool pa[105],pb[105];int pos;
void Prim(){
	while(pos--){
		int min=INF,x=0,y=0;
		for(int i=1;i<=n;i++)
			if(pa[i])
			for(int j=1;j<=n;j++)
			if(pb[j]&&map[i][j]&&min>map[i][j]){
				min=map[i][j];x=i;y=j;
			}
		pb[y]=false;pa[y]=true;
		wage+=min;
		map[x][y]=0;map[y][x]=0;
	}
}
int main(){
	while(~scanf("%d",&n)){
	wage=0;
	for(int i=1;i<=n;i++) {
		pa[i]=false; pb[i]=true;
	} pa[1]=true;pb[1]=false; pos=n-1;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		scanf("%d",&map[i][j]);
	Prim();
	printf("%d\n",wage);
	}
	return 0;
} 
