#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int n,t,count;
bool row[10],column[10];
string map[10];
void dfs(int x,int y,int step){
    if(step==t){
    count++;
    return ;
    }
   // cout<<x<<" "<<y<<" "<<step<<endl;
    for(int i=x;i<n;i++)
    for(int j=0;j<n;j++)
    if(map[i][j]=='#'&&!row[i]&&!column[j]){
    map[i][j]='.';row[i]=true;column[j]=true;
    dfs(i,j,step+1);
    map[i][j]='#';row[i]=false;column[j]=false;
    }
}
int main()
{
    while(cin>>n>>t&&(n!=-1||t!=-1)){
    count=0;
    memset(row,0,sizeof(row));
    memset(column,0,sizeof(column));
    for(int i=0;i<n;i++)
    cin>>map[i];
    dfs(0,0,0);
    cout<<count<<endl;
    }
  return 0;
}
