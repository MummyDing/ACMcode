#include<cstdio>
#define INF 2147483647
const int Max=5000;
bool pa[105],pb[105];
int n,sum,map[Max][Max],from,to,w,wage;
void prime(){
	int posb=n-1;
	while(posb){
		int min=INF,tempa,tempb;
		for(int k=1;k<=n;k++)
		if(pa[k])
		for(int i=1;i<=n;i++)
		if(~map[k][i]&&pb[i]&&min>map[k][i]){
		min=map[k][i];tempa=k;tempb=i;
		}		
		wage+=min;
		map[tempa][tempb]=-1;map[tempb][tempa]=-1;
		posb--; 
		pa[tempb]=true; pb[tempb]=false;
	}
}
int main(){
	while(scanf("%d",&n),n){
		sum=n*(n-1)/2;  wage=0;
	for(int i=1;i<=n;i++) {
		pb[i]=true;pa[i]=false;
	}  pa[1]=true;pb[1]=false; 
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			 map[i][j]=-1;  
	//以上均为初始化
	for(int i=0;i<sum;i++){
	scanf("%d%d%d",&from,&to,&w);
	map[from][to]=w; map[to][from]=w;
	}   //输入各辺长度
	prime(); 
	printf("%d\n",wage);
	}
	return 0;
} 
