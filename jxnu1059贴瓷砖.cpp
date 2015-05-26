#include<iostream>
using namespace std;
int dfs(int k)
{
	if(k==1)
	return 1;
	if(k==2)
	return 3;
	return dfs(k-1)+2*dfs(k-2);
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int k;
		cin>>k;
		cout<<dfs(k)<<endl;
	}	
	return 0;
} 
