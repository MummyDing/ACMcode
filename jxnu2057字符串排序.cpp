/*�˳���Ҫʵ�ֵĵĹ����ǣ�����n���ַ������Իس���������Ȼ���ַ���������С�������*/ 
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
    	memset(a,0,sizeof(a));   //�������ַ����ĳ��� 
        for(i=0;i<Max;i++)
        str[i]="";         //ÿ������ַ������� 
    	m=0;
           for(i=0;i<n;i++){    
    	   getline(cin,str[i]);
    		if(str[i]=="stop"){
    			 break;
    		}
    		a[i]=str[i].size();
    		m++;                 //m������¼����Ч�ַ������ĸ��� 
    	}
     
    	for(i=m-1;i>=0;i--)   //�Ӵ�С���� 
    	for(j=0;j<i;j++){
    		if(a[i]<a[j]){
    			temp=a[i]; tempstr=str[i];
    			a[i]=a[j]; str[i]=str[j];
    			a[j]=temp; str[j]=tempstr;
    		}
    	}
    	for(i=0;i<m;i++)    //��С������� 
    	{
    		cout<<str[i]<<endl;
    	}
   }
	
	return 0;
}
