#include<iostream>
using namespace std;
string num1,num2;  //���������ַ��� 
int pos1,pos2,len1,len2;
int main()
{
	cin.sync_with_stdio(false);
	while(cin>>num1>>num2) //���������� 
	{
		len1=num1.size(); len2=num2.size(); //�󳤶� 
		pos1=num1.find('.'); pos2=num2.find('.'); 
		//����pos ��С�����λ�ã�û��С�������-1 
		if(pos1!=-1){  //��С���㣬�ҾͰ�С�����������0ȥ�� 
			for(int i=len1-1;i>0;i--)  //�Ӻ���ǰɨ�� 
			if(num1[i]!='0')break;  //������Ϊ0 �ͽ��� 
			else len1--;   //�����0 �ҳ��ȼ�ȥ1 ������������Ǹ�0 
		}
		if(num1[len1-1]=='.')len1--; //������һ���ַ���. ����Ҳ����ȥ�� ����1. ����1 
		//�����Ƕ�num2 ����ͬ�Ĵ��� 
		if(pos2!=-1){
			for(int i=len2-1;i>0;i--)
			if(num2[i]!='0')break;
			else len2--;
		}
		if(num2[len2-1]=='.')len2--;
		//�����ǱȽϴ�������ַ����� ��ȡ��Ч��һ�� 0~len1 ��0~len2���бȽ� 
		if(num1.substr(0,len1)==num2.substr(0,len2))cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
