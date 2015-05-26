#include<cstdio>
#include<cstring>
const int Max=105;
int max[Max][Max],t,sum[Max][Max],n;
int DP(int i,int j){
	if(~sum[i][j])
	return sum[i][j];
	if(i==n-1)
	sum[i][j]=max[i][j];
	else 
	sum[i][j]=max[i][j]+(DP(i+1,j)>DP(i+1,j+1) ? DP(i+1,j):DP(i+1,j+1));
	return sum[i][j];
}
int main()
{
	scanf("%d",&t);
	while(t--){
	memset(sum,-1,sizeof(sum));
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	for(int j=0;j<=i;j++)
	scanf("%d",&max[i][j]);
	printf("%d\n",DP(0,0));
}
	return 0;
} 
