/*此程序要实现的的功能是，输入n个字符串（以回车结束），然后按字符串长度由小到大输出*/ 
#include<iostream>
#include<cstring>
#define Max 1000
#include<string>
using namespace std;
int main()
{
	int i,L,j,n	, a[Max],m,temp; string str[Max],tempstr;
    while(cin>>n)
    {
        getchar();
    	memset(a,0,sizeof(a));   //用来存字符串的长度 
        for(i=0;i<Max;i++)
        str[i]="";         //每次清空字符串数组 
    	m=0;
           for(i=0;i<n;i++){    
    	   getline(cin,str[i]);
    		if(str[i]=="stop"){
    			 break;
    		}
    		a[i]=str[i].size();
    		m++;                 //m用来记录“有效字符串”的个数 
    	}
     
    	for(i=m-1;i>=0;i--)   //从大到小排序 
    	for(j=0;j<i;j++){
    		if(a[i]<a[j]){
    			temp=a[i]; tempstr=str[i];
    			a[i]=a[j]; str[i]=str[j];
    			a[j]=temp; str[j]=tempstr;
    		}
    	}
    	for(i=0;i<m;i++)    //从小到大输出 
    	{
    		cout<<str[i]<<endl;
    	}
   }
	
	return 0;
}
