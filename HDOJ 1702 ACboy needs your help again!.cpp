#include<iostream>
#include<string>
#define maxn 1000000+5
using namespace std;
int vec[maxn],top,rear,t,n;
string str,cstack="FILO",cqueue="FIFO",in="IN",out="OUT",no="None";
int main()
{
	cin.sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		cin>>n>>str;
		top=rear=0;
		int flag=1,num;
		if(str==cqueue) flag=0;
		while(n--)
		{
			if(flag){   //栈 
			cin>>str;
			if(str==in){  //进栈 
				cin>>num; vec[top++]=num; 
			} 
			else {  //出栈 
				if(top) //栈不为空 
				cout<<vec[--top]<<endl;	
				else cout<<no<<endl;
			}
			}
			else {     //队列 
				cin>>str;
				if(str==in){//入队 
					cin>>num;vec[top++]=num; 
				}
				else { //出队 
					if(top!=rear)//队列不为空 
						cout<<vec[rear++]<<endl;
					else cout<<no<<endl;
				}
			}
			
		}
	}
	return 0;
}
