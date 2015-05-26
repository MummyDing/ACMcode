#include<iostream>
#include<cstring>
#include<algorithm>
#define Max 10005
using namespace std;
int n,visit[Max];
struct Node{
	int d,c,num;
}p[Max],q[Max];
bool cmpd(Node x,Node y){
 	return x.d>y.d;	
}
bool cmpc(Node x,Node y){
	return x.c>y.c;
}
int main()
{
	cin.sync_with_stdio(false);
	while(cin>>n,n){
		memset(visit,0,sizeof(visit));
		int count=0;
		for(int i=0;i<n;i++){
			cin>>p[i].d>>p[i].c; p[i].num=i;q[i]=p[i];
		}
		sort(p,p+n,cmpd);
		sort(q,q+n,cmpc);
		for(int i=0;i<n;i++)
		{
			int flag=1;
			for(int j=i+1;j<n;j++){
			if(p[i].d!=p[j].d&&p[i].c>=p[j].c){
				flag=0; break;
			}
		}
		if(flag) visit[p[i].num]=1;
		}
		for(int i=0;i<n;i++)
		{	
			int flag=1;
			if(visit[q[i].num]){
			for(int j=i+1;j<n;j++){
			if(q[i].c!=q[j].c&&q[i].d>=q[j].d){
				flag=0; break;
			}
		}		
		}
		if(flag&&visit[q[i].num]) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
