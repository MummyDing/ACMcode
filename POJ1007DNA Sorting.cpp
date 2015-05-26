#include<iostream>
#include<algorithm>
#include<string>
#define Max 100
using namespace std;
string str[Max];
int len,n;
struct node{
	int num;
	int sum;
}Sum[Max]={0};
bool cmp(node x,node y){
	return x.sum<y.sum;	
};
int main(){
	cin>>len>>n;
	for(int i=0;i<n;i++){
	cin>>str[i]; Sum[i].num=i;	
	}
	for(int i=0;i<n;i++)
	for(int j=0;j<len;j++)
	for(int k=j+1;k<len;k++){
		if(str[i][j]>str[i][k])
		Sum[i].sum++;
	}
	stable_sort(Sum,Sum+n,cmp);
	for(int i=0;i<n;i++)
	cout<<str[Sum[i].num]<<endl;
	return 0;
}
