#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int used[65],n,stick[65],last,sum,Len;
bool dfs(int r,int left)
{
	if(!r&&!left) return true;
	if(!left) left=Len;
	int star=0;
	if(left!=Len) star=last+1; //剪枝四 
	for(int i=star;i<n;i++)
	{
		if(!used[i]&&stick[i]<=left){
			if(i>0&&!used[i-1]&&stick[i-1]==stick[i])
			continue; //剪枝一 
			used[i]=1;last=i;
			if(dfs(r-1,left-stick[i]))	return true;
			else {
				used[i]=0;
				if(stick[i]==left||left==Len)	
				return false; //剪枝二、三 
			}
		}
	}
	return false;
}
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	cin.sync_with_stdio(false);
	while(cin>>n,n)
	{
		sum=0;
		for(int i=0;i<n;i++){
			cin>>stick[i];
			sum+=stick[i];
		} 
		sort(stick,stick+n,cmp);
		for(Len=stick[0];Len<=sum;Len++)
		{
			if(sum%Len) continue;
			memset(used,0,sizeof(used));
			if(dfs(n,Len)){
				cout<<Len<<endl;
				break;
			} 
		}
	}
	return 0;
} 
