//GMT BST+1 IST+1 WET WEST+1 CET+1 CEST+2 EET+2 EEST+3 MSK+3 MSD+4 AST-4 ADT-3 NST-3.5 NDT-2.5 EST-5 EDT-4 CST-5 
//EDT-4 CST-6 CDT-5 MST-7 MDT-6 PST-8 PDT-7 HST-10 AKST-9 AKDT-8 AEST+10 AEDT+11 ACST+9.5 ACDT+10.5 AWST+8  
#include<stdio.h>
#include<string.h>
int difference(char *zone1,char *zone2)
{
	char *zone[32]={"UTC","GMT","BST","IST","WET","WEST","CET","CEST","EET","EEST","MSK","MSD","AST","ADT","NST",
	"NDT","EST","EDT","CST","CDT","MST","MDT","PST","PDT","HST","AKST","AKDT","AEST","AEDT","ACST","ACDT","AWST"};
	float time[32]={0,0,1,1,0,1,1,2,2,3,3,4,-4,-3,-3.5,-2.5,-5,-4,-6,-5,-7,-6,-8,-7,-10,-9,-8,10,11,9.5,10.5,8};
	int i,j;
	for(i=0;strcmp(zone[i],zone1);i++);
	for(j=0;strcmp(zone[j],zone2);j++);
	return (int)((time[i]-time[j])*60);
}
int main()
{
	int nCases;
	scanf("%d",&nCases);
	for(int i=0;i<nCases;i++)
	{
		char time[9];
		int hours ,minutes;
		scanf("%s",time);
		switch(time[0])
		{
			case'n':hours=12; minutes=0; break;
			case'm':hours=0; minutes=0;break;
			default:
			    sscanf(time,"%d:%d",&hours,&minutes);
			    hours%=12;
			    scanf("%s",time);
			    if(time[0]=='p') hours+=12;
		}
		char timezone1[5],timezone2[5];
	scanf("%s%s",timezone1,timezone2);
	int newtime;
	newtime=hours*60+minutes+difference(timezone2,timezone1);
	if(newtime<0)
	newtime+=1440;
	newtime%=1440;
	switch(newtime)
	{
		case 0:printf("midnight\n");break;
		case 720:printf("noon\n");break;
		default:hours=newtime/60; minutes=newtime%60; 
		        if(hours==0)
		        printf("12:%02d a.m.\n",minutes);
		        else if(hours<12)
		        printf("%d:%02d a.m.\n",hours,minutes);
		        else if(hours==0)
		        printf("12:%02d p.m.\n",minutes);
		        else printf("%d:%02d p.m.\n",hours%12,minutes);
	}
	}
	return 0;
} 
