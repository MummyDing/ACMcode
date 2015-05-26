/*3
cat tree tcraete
cat tree catrtee
cat tree cttaree*/
#include<iostream>
using namespace std;
/*#include<fstream>
#define cin fin
#define cout fout
ifstream fin("b.in");
ofstream fout("b.out");
*/
#include<string>
int main()
{
	string a,b,c,d,str;
	int n,falg=1,falg1=0,falg2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int map1[226]={0},map2[226]={0};
		falg=1;
		falg1=0;
		falg2=0;
		cin>>a>>b>>str;
		int L1=a.size(),L2=b.size(),L=str.size();
		if(L1+L2!=L)
		falg=0;
		else 
		{
		c=a+b;
		for(int jj=0;jj<L;jj++)
		map1[(int)c[jj]]++;
		for(int jj=0;jj<L;jj++)
		map2[(int)str[jj]]++;
		for(int jj=0;jj<226;jj++)
		{
			if(map1[jj]!=map2[jj])
			{
				falg=0;
				break;
			}
		}
		}
		int temp=0;
		for(int j=0;j<L1;j++)
		{
			char c=a[j];
			int f=1;              
			for(int ii=temp;ii<L;ii++)
			{
				if(c==str[ii])
				{
					temp=ii+1;
					f=0;
					break;	
				}
			}
			if(f)
			{
			falg=0;
			break ;		
			}	
		}
		temp=0;
		for(int j=0;j<L2;j++)
		{
			char c=b[j];
			int f=1;              
			for(int ii=temp;ii<L;ii++)
			{
				if(c==str[ii])
				{
					temp=ii+1;
					f=0;
					break;	
				}
			}
			if(f)
			{
			falg=0;
			break;	
			}	
		}
	   cout<<"Data set "<<i+1<<": ";
	    if(falg)
	    cout<<"yes\n";
	    else cout<<"no\n";
	}
	return 0;
}
