#include<iostream>
using namespace std;
#include<string>
int main()
{
	string sorce; int i,j,L; double sum;
	while(getline(cin,sorce)){
		sum=0;j=1;
		L=sorce.size();
		for(i=0;i<L;i+=2){
			switch (sorce[i])
			{
				case 'A': sum+=4; break; 
				case 'B':  sum+=3;break; 
				case 'C':  sum+=2;break; 
				case 'D':  sum+=1;break; 
				case 'F':   sum+=0; break; 
				default: cout<<"Unknown"<<endl; j=0;break; 
			}
		}
		L=(L+1)/2;
		if(j)
		printf("%.2lf\n",sum/L);
	} 
	
	
	return 0;
} 
