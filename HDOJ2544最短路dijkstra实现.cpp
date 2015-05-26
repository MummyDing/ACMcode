#include<cstdio>
#define INF 2147483647
int n,m,map[105][105],from,to,w,wage,pos;
bool visit[105];
void Dijkstra(){
	while(pos--){
	int x,i,k,min=INF;
	//���Һ�I���ڽڵ�������� 
	for(i=1;i<=n;i++){
		if(visit[i]&&~map[1][i]&&min>map[1][i]){
			min=map[1][i];x=i;
		}
	}
	visit[x]=false; 
	if(wage>min&&x==n) wage=min;//��¼��ǰ���· 
	//���½ڵ����̾��� 
	int temp=INF,y;
	for(k=1;k<=n;k++)
		if(visit[k]&&~map[x][k]){
		if(!~map[1][k]) 
		map[1][k]=map[1][x]+map[x][k];
		else if(map[1][k]>map[1][x]+map[x][k])
		map[1][k]=map[1][x]+map[x][k];
		}
	}
}
int main(){
	while(scanf("%d%d",&n,&m),!(!m&&!n)){
	pos=m;wage=INF;
	for(int i=1;i<=n;i++) {visit[i]=true;
	for(int j=1;j<=n;j++)
	map[i][j]=-1;
	}  visit[1]=false;
	//���Ͼ�Ϊ��ʼ�� 
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&from,&to,&w);
		map[from][to]=w;map[to][from]=w;
	}
	Dijkstra();	
	printf("%d\n",wage);
	}
	return 0;
} 
