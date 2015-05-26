#include<iostream>
#include<string>
#include<cmath>
#define carry 100000000
#define maxn 600
using namespace std;
string num[maxn];
int Pow(int x,int y){
	int m=1;
	for(int i=0;i<y;i++)
	m*=x;
	return m;
} 
void str2num(string &x, int *num){
	int len = x.size(), pos = 0;
	for (int i = 1; i <= len / 8; i++){
		string temp = x.substr(len - 8 * i, 8);
		for (int i = 0; i<8; i++)
			num[pos] += (temp[7 - i] - '0')*Pow(10,i);
		pos++;
	}
	int left = len % 8;
	if (left){
		for (int i = 0; i < left; i++)
			num[pos] += (x[left - i - 1] - '0')*Pow(10,i);
		pos++;
	}
}
void num2str(int x, string &str){
	int temp[10] = { 0 }, pos = 0;
	while (x){
		temp[pos++] = x % 10;
		x /= 10;
	}
	for (int i = 7; i >= 0; i--)
		str += temp[i] + '0';
}
void Add(string x, string & y, string &z)
{
	string rest = "";
	int num1[maxn] = { 0 }, num2[maxn] = { 0 };
	int len = x.size() > y.size() ? x.size() : y.size();
	str2num(x, num1);
	str2num(y, num2);
	for (int i = 0; i <= len / 8; i++){
		num1[i] += num2[i];
		if (num1[i] >= carry){
			num1[i + 1] += num1[i] / carry;
			num1[i] %= carry;
		}
	}
	int k;
	for (k = len; k>0 && !num1[k]; k--);
	for (; k >= 0; k--) num2str(num1[k], rest);
	z = rest;
}
int cmp(string &x, string &y){
	int len1 = x.size(), len2 = y.size();
	int i;
	for (i = 0; i<len1&&!(x[i] - '0');)i++;
	x = x.substr(i, len1 - i + 1);
	//	cout<<i<<endl;
	for (i = 0; i<len2&&!(y[i] - '0');)i++;
	y = y.substr(i, len2 - i + 1);
	//	cout<<x<<" "<<y<<endl;
	len1 = x.size(), len2 = y.size();
	if (x == y)return 0;
	if (len1>len2)return 1;
	else if (len1<len2)return -1;
	else if (x>y)return 1;
	else return -1;
}
string str1, str2;
int calc(string &x, int left, int right, int dir)
{
	
	int cmpleft = cmp(x, num[left]), cmpright = cmp(x, num[right]), mid = (left + right) / 2;
	if (cmpleft<0){ if (dir)  return left;  else return left - 1; }
	else if (cmpright>0){ if (!dir) return right; else return right +1; }
	else if (!cmpleft)return left;
	else if (!cmpright)return right;
	int cmpmid = cmp(x, num[mid]);
	if (!cmpmid)return mid;
	else if (cmpmid<0)return calc(x, left, mid - 1,dir);
	else return calc(x, mid + 1, right, dir);
}
int main()
{
	cin.sync_with_stdio(false);
	num[1] = "1"; num[2] = "2";
	for (int i = 3; i<maxn; i++)
		Add(num[i - 1], num[i - 2], num[i]);
	while (cin >> str1 >> str2, str1 != "0" || str2 != "0"){
		int pos1 = calc(str1, 1, maxn - 1,1), pos2 = calc(str2, 1, maxn - 1, 0);
		cout<<pos2-pos1+1<<endl; 
	}
	return 0;
}
