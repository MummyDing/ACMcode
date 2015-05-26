#include<iostream>
#include<stack>
using namespace std;
int train[1005],n,pos=-1;
int main()
{
	cin.sync_with_stdio(false);
	while(cin>>n,n)
	{
		while(cin>>train[0],train[0]){
		for(int i=1;i<n;i++)
		cin>>train[i];
		int star=1,top=0; bool flag=false;
		stack<int> station;
		while(star<=n||(!station.empty()&&station.top()==train[top]))
		{
			//Õ»²»Îª¿Õ Õ»¶¥ÔªËØ==train¶¥ÔªËØ 
			if(!station.empty()&&station.top()==train[top]){
				station.pop();
				top++;
				continue;
			}
			if(star==train[top]){
				top++;star++;
				continue;
			}
			station.push(star++);
		}
		if(top==n) cout<<"Yes\n";
		else cout<<"No\n";
		}
		cout<<endl;	
	}
	
	return 0;
} 
