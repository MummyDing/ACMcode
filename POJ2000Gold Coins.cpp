#include<iostream>
using namespace std;
int main()
{
	int day,sum;
	while(cin>>day&&day)
	{
		sum=0;int step=1;
		for(int i=1,j=0;i<=day;i++)
		{
			j++;
			sum+=step;
			if(j==step)
			{
				j=0;
				step++;
			}
		}
		cout<<day<<" "<<sum<<endl;
	}
	return 0;
}
