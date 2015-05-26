#include<iostream>
using namespace std;
void Draw(int k)
{
	if(k==1)
	{
	cout<<"X";
	return ;	
	}
		 
		Draw(k-1);
		for(int i=1;i<k;i++)
		cout<<' ';
		Draw(k-1);cout<<endl;
		for(int i=1;i<k;i++)
		cout<<' ';	
		Draw(k-1); cout<<" \n";
		Draw(k-1);
		for(int i=1;i<k;i++)
		cout<<' ';
		Draw(k-1);cout<<endl;	
	return ;
}
int main()
{
	int n;
	while(cin>>n)
	Draw(n);
	return 0;
} 
