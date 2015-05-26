#include<cstdio>
#include<cmath>
const int Max=1002;
struct Node{
 double x,y;int loc;
}father[Max];
int set[Max],pos=0,n,dx,dy;
char ch; double d;
bool dis(int x,int k){
	double di=sqrt(pow(father[x].x-father[k].x,2)+pow(father[x].y-father[k].y,2));
	if(di<=d)	return true;
	return false;
}
int find(int k){
	if(k==father[k].loc) return k;
	int temp=find(father[k].loc);
	father[k].loc=temp;
	return temp;
//	return find(father[k].loc);
}
int main(){
	scanf("%d%lf",&n,&d);
	for(int i=1;i<=n;i++){
		scanf("%lf%lf",&father[i].x,&father[i].y); 
		father[i].loc=i;
	}
	while(getchar(),~scanf("%c",&ch)){
	if(ch=='O'){
	scanf("%d",&dx);
	for(int i=0;i<pos;i++){
		if(dis(dx,set[i])){
			int tempx=find(set[i]);
			father[tempx].loc=find(dx); 
		}
	}
	set[pos++]=dx;
	}
	else {
	scanf("%d%d",&dx,&dy);
	int tempx=find(dx),tempy=find(dy);
	if(tempx==tempy) printf("SUCCESS\n");
	else printf("FAIL\n");
	}
	}
	return 0;
} 
