#include<iostream>
using namespace std;
int main()
{
  int n,i,sum,t;
while(cin>>n)
{
  if(!n)  break;
  sum=0;
  for(i=0;i<n;i++){
  cin>>t;
    sum+=t;
  }
  cout<<sum<<endl;

}


return 0;
}
