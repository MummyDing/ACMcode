/*
小数高精度加法 
*/ 
#include<iostream>
#include<cstring>
#include<string>
#define maxn 405
using namespace std;
string str1, str2, stri1, stri2, strf1, strf2;
int numi1[maxn], numi2[maxn], numf1[maxn], numf2[maxn];
int leni1, leni2, lenf1, lenf2, pos, m;
int Add(int x[], int y[]){
	for (int i = 0; i<m; i++)
	{
		x[i] += y[i];
		if (x[i]>9){
			x[i + 1] += x[i] /10;
			x[i] %= 10;
		}
	}
	return x[m];
}
void str2num(int n, int num[], string &x){
	for (int i = 0; i<n; i++)
		num[n - i - 1] = x[i]-'0';
}
int main()
{
	cin.sync_with_stdio(false);
	while (cin >> str1 >> str2)
	{
		int len1 = str1.size(), len2 = str2.size(), flag = 1;
		leni1= leni2= lenf1= lenf2= pos= m=0;
		stri1=stri2= strf1= strf2="";
		memset(numi1, 0, sizeof(numi1));
		memset(numi2, 0, sizeof(numi2));
		memset(numf1, 0, sizeof(numf1));
		memset(numf2, 0, sizeof(numf2));
		if ((pos = str1.find('.')) != string::npos){
			stri1 = str1.substr(0, pos);//整数部分
			leni1 = stri1.size();
			strf1 = str1.substr(pos + 1, len1 - pos);//小数部分 
			lenf1 = strf1.size();
		}
		else {
			stri1 = str1; leni1 = str1.size();
			lenf1 = 0;
		}
		if ((pos = str2.find('.')) != string::npos){
			stri2 = str2.substr(0, pos);//整数部分
			leni2 = stri2.size();
			strf2 = str2.substr(pos + 1, len2 - pos);//小数部分 
			lenf2 = strf2.size();
		}
		else {
			stri2 = str2; leni2 = str2.size();
			lenf2 = 0;
		}
		if (!lenf1&&!lenf2) flag = 0;
		int temp = 0;//用来保存小数部分向整数部分的进位 
		//小数部分
		if (flag){
			m = lenf1>lenf2 ? lenf1 : lenf2;
			for (int i = 0; i<m - lenf1; i++) strf1 += '0';
			for (int i = 0; i<m - lenf2; i++) strf2 += '0';
			str2num(m, numf1, strf1);
			str2num(m, numf2, strf2);
			temp = Add(numf1, numf2);
		}
		str2num(leni1, numi1, stri1);
		str2num(leni2, numi2, stri2);
		numi1[0] += temp;
		m = leni1>leni2 ? leni1 : leni2;
		Add(numi1, numi2);
		int i;
		for (i = m + 1; i>0&&!numi1[i]; i--);
		for (; i >= 0; i--)cout << numi1[i];
		if (flag){
			m = lenf1>lenf2 ? lenf1 : lenf2;
			int i,j;
			i = m - 1;
			for (j = 0; j < m&&!numf1[j]; j++);
			if (i >= j){
				cout << ".";
				for (;  i>=j; i--)cout << numf1[i];
			}
		}
		cout << endl;
	}
	return 0;
}


