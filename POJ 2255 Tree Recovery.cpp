#include<iostream>
#include<string>
using namespace std;
int posmap[256];
string pretree,midtree,posttree="";
void init()
{
	posttree="";
	for(int i=0;i<pretree.size();i++)
	posmap[pretree[i]]=i+1;
}
void postorder(int left,int right)
{
	if(left==right) return ;
	int Min=posmap[midtree[left]],Mpos=left;
	for(int i=left+1;i<right;i++){
		if(Min>posmap[midtree[i]]){
			Min=posmap[midtree[i]];
			Mpos=i;
		}
	}
	postorder(left,Mpos);
	postorder(Mpos+1,right);
	posttree+=midtree[Mpos];
}
int main()
{
	while(cin>>pretree>>midtree)
	{
		init();
		postorder(0,midtree.size());
		cout<<posttree<<endl;
	}
	return 0;
}
