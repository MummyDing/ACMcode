#include<iostream>
#include<string>
int a[1000];
using namespace std;
int main()
{
	string str[1000];
     int i=0,j,L,max,min;
     while(getline(cin,str[i]))
	 {
	 	a[i]=str[i].size();
	 	i++;
	 }	
	 L=i;
	 max=min=a[0];
	 while(i--)
	 {
	 	if(max<a[i])  max=a[i];
	 	if(min>a[i])  min=a[i];
	 }
	 for(j=0;j<L;j++)
	 {
	 	if(min==a[j])
	 	cout<<str[j]<<endl;
	 }
	 	 for(j=0;j<L;j++)
	 {
	 	if(max==a[j])
	 	cout<<str[j]<<endl;
	 }
	return 0;
} 
