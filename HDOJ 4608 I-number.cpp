#include<iostream>
#include<string>
#define maxn 100000+5 
using namespace std;
string str;
int sum=0,t;
int calcbit(string &x)
{
	int s=0;
	for(int i=0;i<x.size();i++) s+=(x[i]-'0');
	return s;
}
void Add(string &x)
{
	string temp="";char ch;
	int num[maxn]={0},len=x.size();
	for(int i=0;i<len;i++)num[i]=(x[len-i-1]-'0');
	num[0]++;
	for(int i=0;i<len;i++){
		if(num[i]>9){
			num[i+1]+=num[i]/10;
			num[i]%=10;
		}
	}
	int i;
	for(i=len;i>0&&!num[i];)i--;
	for(;i>=0;i--)temp+=(num[i]+'0');
	len=temp.size();
	for(int i=0;i<=len/2;i++){
	ch=x[i];x[i]=x[len-i-1];x[len-i-1]=ch;
	}
	x=temp;
}
int main()
{
	cin.sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		cin>>str;
		Add(str);
		sum=calcbit(str);
		while(sum%10){
			Add(str);
			sum=calcbit(str);
		}
		cout<<str<<endl;
	} 
	return 0;
}
