#include<cstdio>
int n,m,from,to,w;
int map[105][105];
void Flody(){
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++){
				if((~map[i][k])&&(~map[k][j])){
				if(map[i][k]+map[k][j]<map[i][j]||!(~map[i][j]))
					map[i][j]=map[i][k]+map[k][j];
				}
			}
}
int main(){
	while(scanf("%d%d",&n,&m),!(!m||!n)){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)  map[i][j]=-1;
	for(int i=1;i<=m;i++){
		scanf("%d%d%d",&from,&to,&w);
		map[from][to]=w; map[to][from]=w; 
	}
	Flody();
	printf("%d\n",map[1][n]);
	}
	return 0;
} 
