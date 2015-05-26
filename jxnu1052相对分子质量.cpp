//H(1)£¬C(12)£¬N(14)£¬O(16)£¬F(19)£¬P(31)£¬S(32)£¬K(39)¡£
#include<iostream>
#include<string>
using namespace std;
int main() 
{
	string s; int m,i,n,L,x,H,C,N,O,F,P,S,K;
	cin>>n;
	for(int k=0;k<n;k++){
		cin>>s;
		L=s.size();m=0;x=1;
		H=C=N=O=F=P=S=K=0;
		for(i=0;i<L;i++){
			switch(s[i]){
				case 'H':H=1;m+=H; if(s[i+1]>='0'&&s[i+1]<='9') m+=(s[i+1]-'0'-1)*H;break;
				case 'C':C=12;m+=C;if(s[i+1]>='0'&&s[i+1]<='9') m+=(s[i+1]-'0'-1)*C;break;
				case 'N':N=14;m+=N;if(s[i+1]>='0'&&s[i+1]<='9') m+=(s[i+1]-'0'-1)*N;break;
				case 'O':O=16;m+=O;if(s[i+1]>='0'&&s[i+1]<='9') m+=(s[i+1]-'0'-1)*O;break;
				case 'F':F=19;m+=F;if(s[i+1]>='0'&&s[i+1]<='9') m+=(s[i+1]-'0'-1)*F;break;
				case 'P':P=31;m+=P;if(s[i+1]>='0'&&s[i+1]<='9') m+=(s[i+1]-'0'-1)*P;break;
				case 'S':S=32;m+=S;if(s[i+1]>='0'&&s[i+1]<='9') m+=(s[i+1]-'0'-1)*S;break;
				case 'K':K=39;m+=K;if(s[i+1]>='0'&&s[i+1]<='9') m+=(s[i+1]-'0'-1)*K;break;
				default:continue;
			}
		}
		cout<<m<<endl;
	}
	
	return 0;
}
