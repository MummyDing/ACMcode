#include<iostream>
#include<string>
#include<cstring>
using namespace std;
const int Max=30;
string var,req;
bool visit[Max];
int pre[Max],len1,len2;
void dfs(int k,string s){
	if(k==(len1+1)/2){
		cout<<s<<endl;
		return ;
	}
	for(int i=0;i<26;i++){
		if(visit[i]&&!pre[i]){
			visit[i]=false;
			for(int t=0;t<len2;t+=4){
				if(i==req[t]-'a')
				--pre[req[t+2]-'a'];
			}
			dfs(k+1,s+(char)(i+'a'));
			visit[i]=true;
			for(int t=0;t<len2;t+=4){
				if(i==req[t]-'a')
				++pre[req[t+2]-'a'];
			}
		}
}
}
int main(){
	while(getline(cin,var)){
	getline(cin,req);
	len1=var.size(); len2=req.size();
	memset(visit,0,sizeof(visit));
	memset(pre,0,sizeof(pre));
	for(int i=0;i<len1;i+=2)
	visit[var[i]-'a']=true;
	for(int i=2;i<len2;i+=4)
		pre[req[i]-'a']++;
	dfs(0,"");
	cout<<endl;
	}
	return 0;
}
