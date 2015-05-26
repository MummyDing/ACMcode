#include<stdio.h>

#include<string.h>

char a[500]={0},e[500]={0},b[500]={0};

void sum(chara[],charb[])

{

int c[500]={0},d[500]={0},k=0;

int lena=strlen(a),lenb=strlen(b),i=0,j=0;

for(i=lena-1;i>=0;i--)

c[j++]=a[i]-'0';

j=0;//ÎðÂ©£¡

for(i=lenb-1;i>=0;i--)

d[j++]=b[i]-'0';

for(i=0;i<lena+lenb;i++)

{

c[i]+=d[i];

}

for(i=0;i<lena+lenb;i++)

{

if(c[i]>=10)

{c[i+1]++;c[i]%=10;            }

}

for(i=lena+lenb-1;i>=0;i--)

{

if(c[i])break; 

}

for(i;i>=0;i--)

e[k++]=c[i]+'0';e[k]='\0';

}

int main()

{

int  t,i,n;

scanf("%d",&t);

while(t--)

{

scanf("%d",&n);

a[0]=b[0]=1+'0';

if(n==1||n==2)printf("1\n");

else

{

for(i=3;i<=n;i++)

{

sum(a,b);

strcpy(a,b);

strcpy(b,e);

}

printf("%s\n",e);

}

memset(a,0,sizeof(a));

memset(b,0,sizeof(b));

}

