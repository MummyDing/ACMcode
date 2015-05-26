#include<iostream>
#include<string>
using namespace std;
int dir[8][2]={
    {0,1},{0,-1},
    {1,0},{-1,0},
    {1,1},{1,-1},
    {-1,-1},{-1,1}
};
string map[105];
int dx,dy,count=0;
bool flag;
void dfs(int x,int y){
    for(int i=0;i<8;i++){
    int tempx=x+dir[i][0],tempy=y+dir[i][1];
    if(tempx>=0&&tempx<dx&&tempy>=0&&tempy<dy&&map[tempx][tempy]=='W'){
    map[tempx][tempy]='.';
    dfs(tempx,tempy);
    }
    }
}
int main()
{
    cin>>dx>>dy;
    for(int i=0;i<dx;i++)
    cin>>map[i];
    for(int i=0;i<dx;i++)
    for(int j=0;j<dy;j++){
    if(map[i][j]=='W'){
    count++;
    map[i][j]='.';
    dfs(i,j);
    }
    }
    cout<<count<<endl;
    return 0;
}

