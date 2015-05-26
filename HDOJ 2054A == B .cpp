#include<iostream>
using namespace std;
string num1,num2;  //定义两个字符串 
int pos1,pos2,len1,len2;
int main()
{
	cin.sync_with_stdio(false);
	while(cin>>num1>>num2) //这里是输入 
	{
		len1=num1.size(); len2=num2.size(); //求长度 
		pos1=num1.find('.'); pos2=num2.find('.'); 
		//这里pos 是小数点的位置，没有小数点就是-1 
		if(pos1!=-1){  //有小数点，我就把小数点后面多余的0去掉 
			for(int i=len1-1;i>0;i--)  //从后往前扫描 
			if(num1[i]!='0')break;  //遇到不为0 就结束 
			else len1--;   //如果是0 我长度减去1 等于舍弃最后那个0 
		}
		if(num1[len1-1]=='.')len1--; //如果最后一个字符是. 那我也把它去掉 比如1. 就是1 
		//下面是对num2 做相同的处理 
		if(pos2!=-1){
			for(int i=len2-1;i>0;i--)
			if(num2[i]!='0')break;
			else len2--;
		}
		if(num2[len2-1]=='.')len2--;
		//最后就是比较处理过的字符串了 截取有效的一段 0~len1 和0~len2进行比较 
		if(num1.substr(0,len1)==num2.substr(0,len2))cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
