include<stdio.h>
#define pi 3.1415927
int main()
{
    double diameter,time,c,distance,v; 
    int i=0,j,relutions;
    while(scanf("%lf%d%lf",&diameter,&relutions,&time))
    {
        i++;
        if(relutions==0)
        break;
        c=diameter*pi;
        distance=c*relutions/12.0/5280.0;
        time/=3600.0;
        v=distance/time;
        printf("Trip #%d: %.2lf %.2lf\n",i,distance,v);
		printf("Trip #%d: %.2lf MPH\n",i,distance,v); 
    }
    return 0;
}

