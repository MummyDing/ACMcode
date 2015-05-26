#include<cstdio>
#include<cstring>
struct Node{
	char name[50];int data;
	Node *Lchild; Node *Rchild;
	Node(){  Lchild=NULL; Rchild=NULL;};
} *head=NULL;
int sorce[305],sort[305],n,pos;
char map[305][55],mapdata[305][55];
void Create(char *s,int t,Node * &node){
	if(node){
		if(t<=node->data)
		Create(s,t,node->Lchild);
		else Create(s,t,node->Rchild);
	}
	else {
		node=new Node;
		strcpy(node->name,s); node->data=t;
	}
}
void print(Node * &x,bool flag){
	if(x){
		print(x->Rchild,flag);
		if(flag) printf("%s %d\n",x->name,x->data);
		else {
		strcpy(map[pos],x->name);
		sort[pos++]=x->data;
		}
		print(x->Lchild,flag);
	}
	else return ;
}
int main(){
	while(~scanf("%d",&n)){
		head=NULL;
		pos=0;int m=n;
		while(n--){
		char name[55];int temp;
		scanf("%s%d",name,&temp);
		Create(name,temp,head);
		}
		for(int i=0;i<m;i++)
		scanf("%s%d",mapdata[i],&sorce[i]);
		print(head,false);
		bool Is_sort=true; bool Is_stable=true;
		for(int i=0;i<pos;i++){
			if(sorce[i]!=sort[i]){
				Is_sort=false;break;
			}
			else if(strcmp(map[i],mapdata[i])){
				Is_stable=false;
			}
		}
		if(!Is_sort){
			printf("Error\n");print(head,true);
		}
		else if(!Is_stable){
			printf("Not Stable\n");print(head,true);
		}
		else printf("Right\n");
	}
	return 0;
}
