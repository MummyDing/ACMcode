#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	const char f[][5]={"``","''"};
	char str,c[][3]={"``","''"},count=1;
	while((str=getchar())!=EOF)
	{
		if(str=='"')
		{
			if(count&1)
			printf("%s",c[0]);
			else printf("%s",c[1]);
			count++;
		}
		else 
		putchar(str);
	} 
	return 0;
}
