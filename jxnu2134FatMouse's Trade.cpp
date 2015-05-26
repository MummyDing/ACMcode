#include<iostream>
using namespace std;
int main()
{
	double M,N,sum,price[1001][2],room[1001][2];
	while(cin>>M>>N)
	{
		sum=0;
		if(M==-1&&N==-1)
		break;
		for(int i=0;i<N;i++)
		price[i][1]=i;
		for(int i=0;i<N;i++)
		{
		cin>>room[i][0]>>room[i][1];
		price[i][0]=room[i][1]/room[i][0];
		}
		for(int i=N-1;i>0;i--)
		for(int j=0;j<i;j++)
		{
			double temp;
			if(price[i][0]<price[j][0])
			{
				temp=price[i][0];
				price[i][0]=price[j][0];
				price[j][0]=temp;
				temp=price[i][1];
				price[i][1]=price[j][1];
				price[j][1]=temp;
			}
		}
		for(int i=0;i<N;i++)
		{
			if(!M)
			break;
			if(M<=room[(int)price[i][1]][1])
			{
			sum+=M/price[i][0];	
			M=0;
			break;
			}
			M-=room[(int)price[i][1]][1];
			sum+=room[(int)price[i][1]][0];
		}
		printf("%.3lf\n",sum);
	}
		
	return 0;
} 
