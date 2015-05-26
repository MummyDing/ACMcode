#include<iostream>
#include<string>
using namespace std;
const int Max=30000;
int L,R,C,xe,ye,ze;
bool visit[31][30][30];
string str[31][31];
int dir[6][3]={
    {0,0,1},{0,0,-1},
    {-1,0,0},{1,0,0},
    {0,1,0},{0,-1,0}
};
struct Node{
    int xs,ys,zs,time;
    Node()
    {
    xs=0;ys=0;zs=0;time=0;
    };
} map[Max],temp;

int main()
{
    while((cin>>L>>R>>C)&&(L||R||C))
    {
    int i,j,k,flag=1;
    for(i=0;i<L;i++){
    for(j=0;j<R;j++)
    {
    cin>>str[i][j];
    for(k=0;k<C;k++)
    if(str[i][j][k]=='.')
    visit[i][j][k]=true;
    else if(str[i][j][k]=='#')
    visit[i][j][k]=false;
    else if(str[i][j][k]=='S')
    {
     map[0].xs=i;   map[0].ys=j;    map[0].zs=k; visit[i][j][k]=false;
    }
    else if(str[i][j][k]=='E')
    {
    xe=i;    ye=j;ze=k; visit[i][j][k]=true;
    }
    }
    }
    int nodedir=0,exdir=0;
    while(nodedir<=exdir&&exdir<Max&&flag)
    {
        for(int i=0;i<6;i++)
        {
        temp=map[nodedir];  //ÉèÖÃ¸¸½Úµã 
        int tx=temp.xs+dir[i][0],ty=temp.ys+dir[i][1],tz=temp.zs+dir[i][2];
            if(tx>=0&&tx<L&&ty>=0&&ty<R&&tz>=0&&tz<C&&visit[tx][ty][tz])
            {
            temp.xs=tx; temp.ys=ty; temp.zs=tz;
            visit[tx][ty][tz]=false;
            temp.time++;
            map[++exdir]=temp;
            if(temp.xs==xe&&temp.ys==ye&&temp.zs==ze)
            {
            cout<<"Escaped in "<<temp.time<<" minute(s)."<<endl;
            flag=0;
            break;
            }
            }
        }
        nodedir++;
    }
    if(flag) cout<<"Trapped!"<<endl;
    }
    return 0;
}
