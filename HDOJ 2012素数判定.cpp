#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
ifstream fin("a.in");
ofstream fout("b.out");

bool prime(int x)
{
	for(int i=2;i<=sqrt(x);i++)
	if(x%i==0) return false;
	return true;
}
int main()
{
	int x,y,sum;
	while(fin>>x>>y&&(x||y))
	{
		int flag=1;
		for(int i=x;i<=y;i++)
		{
			sum=i*i+i+41;
			if(!prime(sum)){
				flag=0;
				break;
			}
		} 
		if(flag) fout<<"OK"<<endl;
		else fout<<"Sorry"<<endl;
	}
	return 0;
} 
