#include<iostream>
#include<cstring>
using namespace std;
int main ()
{   int *jian(int *p);
    int *cheng(int*p,int *q,int *f);
	char str[5]; 
    int b[1000000],i,j,a[5]={};
	while(gets(str))
	{   int *p; int *q;  int *f;  
     	p=a;  	f=b;                                 //指针 
		if(str[0]=='0'||str[0]=='1')                   //如果n为0或1直接输出结果1 
		cout<<'1'<<endl;
		else{
			int L=strlen(str);
		for(i=L-1,j=0;i>=0;i--,j++)                     //将字符数组变成整型保存到a[5] 
		a[j]=str[i]-'0';
	    while(p[0]!=0||p[1]!=0||p[2]!=0||p[3]!=0||p[4]!=0)   //计算n! 
	    {
	    	q=jian(p);
	    	f=cheng(p,q,f);
	    	p=q;
	    }
    	}
    	int pan=0;                          //输出结果 
    	for(i=1000000;i>=0;i--)
    	{
    		if(pan)
    		{
    			cout<<f[i];
    			pan=1;
    		}
    		else if(f[i])
    		cout<<f[i];
    	}
    	cout<<endl;
	}	
	return 0;
} 
 int *jian(int *p)
 {
 	p[0]--;
 	for(int i=0;i<5;i++)
	 {
	 	if(p[i]<0){
	 	   p[i]+=10;
	 	   p[i+1]--;
	 }
	 } 
	 return p;
 }
    int *cheng(int*p,int *q,int *f)
    {   int i,j;
    	for( i=0;i<5;i++)
    	for(j=0;j<5;j++)
    	{
    	  f[i+j]=p[i]*q[j];
    	}
    	for( i=0;i<1000000;i++)
    	{
    		if(f[i]>10){
    			f[i+1]+=f[i]/10;
    			f[i]%=10;
    		}
    	}
    	return f;
    }

