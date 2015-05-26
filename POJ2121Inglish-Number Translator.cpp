#include<iostream>
#include<string> 
#include<map>
using namespace std;
int main()
{
//建立英文数字对应关系 
map<string ,long long > map1;
map1["one"]=1; map1["negative"]=-1;map1["two"]=2;
map1["three"]=3;map1["four"]=4; map1["five"]=5; 
map1["six"]=6;map1["seven"]=7; map1["eight"]=8;
map1["nine"]=9;map1["ten"]=10;map1["eleven"]=11;
map1["twelve"]=12;map1["thirteen"]=13;map1["fourteen"]=14;
map1["fifteen"]=15;map1["sixteen"]=16;map1["seventeen"]=17;
map1["eighteen"]=18;map1["nineteen"]=19;map1["twenty"]=20;
map1["thirty"]=30;map1["forty"]=40;map1["fifty"]=50;
map1["sixty"]=60;map1["seventy"]=70;map1["eighty"]=80;
map1["ninety"]=90;map1["hundred"]=100;map1["thousand"]=1000;
map1["million"]=1000000;
long long temp,now,r;
string str,num;
while(getline(cin,str))
{
  	if(str=="")     //输入为空则终止 
  	break;  
	//sign 表示符号,r存放结果,now为当前值   
  	long long sign=1,temp=0,r=0,now=0;
	//start和substr配合用于截取数字 
    long long pos=0,start=0,M[100];
  	long long L=str.size();
  	for(long long i=start;i<=L;i++)
  	{
  		if(str[i]==' '||i==L)
  		{
  			num=str.substr(start,i-start);
  			now=map1[num];
  			if(now==-1)
  			sign=now;
  			else 
			{
  			if(now>0&&now<100)
  			 temp+=now;
  			else
  			{
			   if(now==100)
			   temp*=100;
			   else 
			   {
			   	r+=temp*now;
			   	temp=0;
			   } 
  			}	
  			}
			start=i+1;
  		}
  	}
  	r+=temp;
  	cout<<sign*r<<endl;
}
  return 0;
}
