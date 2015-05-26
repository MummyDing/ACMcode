#include<iostream>
#include<string>
#include<cmath>
#include<cstring>
#define carry 100000000
#define maxn 115
using namespace std;
string str, sum;
void str2num(string &x,int *num){
	int len = x.size(), pos = 0;
	for (int i = 1; i <= len / 8; i++){
		string temp = x.substr(len - 8 * i, 8);
		for (int i = 0; i<8; i++)
			num[pos] += (temp[7 - i] - '0')*pow(10, i);
		pos++;
	}
	int left = len % 8;
	if (left){
		for (int i = 0; i < left; i++)
			num[pos] += (x[left - i-1] - '0')*pow(10, i);
		pos++;
	}
}
void num2str(int x,string &str){
	int temp[10] = { 0 },pos=0;
	while (x){
		temp[pos++] = x % 10;
		x /= 10;
	}
	for (int i = 7; i >= 0; i--)
		str += temp[i] + '0';
}
void Add(string x, string & y)
{
	string rest = "";
	int num1[maxn] = { 0 }, num2[maxn] = { 0 };
	int len = x.size() > y.size() ? x.size() : y.size();
	str2num(x,num1);
//	cout << "num1[0]=" << num1[0] << endl;
	str2num(y,num2);
	for (int i = 0; i <= len/8; i++){
		num1[i] += num2[i];
		if (num1[i] >= carry){
			num1[i + 1] += num1[i] / carry;
			num1[i] %= carry;
		}
	}
	int k;
	for (k = len; k>0 && !num1[k]; k--);
	for (; k>= 0; k--) num2str(num1[k],rest);
	y = rest;
}
int main()
{
	cin.sync_with_stdio(false);
	sum = "0";
	while (cin >> str, str != "0"){
	Add(str, sum);
	}
	int i;
	for (i = 0; i <sum.size();i++)
	if (sum[i] != '0')break;
	sum = sum.substr(i , sum.size() - i+1);
	cout << sum << endl;
	return 0;
}

