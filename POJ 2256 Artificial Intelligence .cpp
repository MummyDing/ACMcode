#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
using namespace std;
string text, Map = "PUI", pMap = "mkM",out="WVA";
int t;   double res[3];
int Hash(char c,string x){
	for (int i = 0; i<3; i++)
        if (x[i] == c)return i; return -1;
}
double pHash(char c){
	switch (c){
	case 'm':return 0.001;
	case 'k':return 1000;
	case 'M':return 1000000;
	}
}
string deal(string s, int flag){
	int len = s.size(), b, e;
	string tmpstr;
	if (flag){//第二个等号
		for (int i = len - 1; i > 0; i--)
		if (s[i] == '='){
		    b=i-1;
		    for(int j=i+1;j<len;j++)
            if(Hash(s[j],out)!=-1||j==len-1){
                e=j;break;
            }
			tmpstr = s.substr(b, e - b + 1);
			break;
		}
	}
	else{ //第一个等号
		for (int i = 0; i<len; i++)
		if (s[i] == '='){
            b=i-1;
		    for(int j=i+1;j<len;j++)
            if(Hash(s[j],out)!=-1||j==len-1){
                e=j;break;
            }
			tmpstr = s.substr(b, e - b + 1);  break;
		}
	}
	return tmpstr;
}
double ToNum(string s){ //把数字抠出来
	double sum = 0;
	int len = s.size(), flag = 0;
	for (int i = 2; i<len - 1; i++){
		if (s[i] == '.'){
			flag = -1; continue;
		}
		if (s[i] >= 'A'&&s[i] <= 'Z'||s[i]>='a'&&s[i]<='z'){
			sum *= pHash(s[i]);  break;
		}
		if (flag)sum += (s[i] - '0')*pow(10.0, flag), flag--;
		else sum = (s[i] - '0')+sum*10;
	}
	return sum;
}
double calc(int k){
	switch (k){
	case 0:return res[1] * res[2];
	case 1:return res[0] / res[2];
	case 2:return res[0] / res[1];
	}
}
int main()
{
	cin.sync_with_stdio(false);
	cin >> t;   cin.ignore(); //吃掉那个回车，这个不能少
	for (int k = 1; k <= t; k++){
		cout << "Problem #" << k << endl;
		int flag[3] = { 0 };
		getline(cin, text);
			string s1 = deal(text, 0),s2 = deal(text, 1);
			int pos1 = Hash(s1[0],Map), pos2 = Hash(s2[0],Map);
			flag[pos1] = 1;  flag[pos2] = 1;
			res[pos1] = ToNum(s1);  res[pos2] = ToNum(s2);
			for (int i = 0; i<3; i++)
			if (!flag[i]){
            printf("%c=%.2lf%c\n\n", Map[i], calc(i),out[i]);  break;
		}
	}
	return 0;
}
