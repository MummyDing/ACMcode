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
			if(flag){   //ջ 
			cin>>str;
			if(str==in){  //��ջ 
				cin>>num; vec[top++]=num; 
			} 
			else {  //��ջ 
				if(top) //ջ��Ϊ�� 
				cout<<vec[--top]<<endl;	
				else cout<<no<<endl;
			}
			}
			else {     //���� 
				cin>>str;
				if(str==in){//��� 
					cin>>num;vec[top++]=num; 
				}
				else { //���� 
					if(top!=rear)//���в�Ϊ�� 
						cout<<vec[rear++]<<endl;
					else cout<<no<<endl;
				}
			}
			
		}
	}
	return 0;
}
