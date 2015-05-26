#include<cstdio>
const int Max=50000;
int a,b,c,t,time,falg;
int dir[6][3]={
    {0,0,-1},
    {0,0,1},
    {0,1,0},
    {0,-1,0},
    {1,0,0},
    {-1,0,0}
};
int visit[51][51][51];
struct Node{
    int x,y,z,time;
} map[Max],temp,end;
bool equal(Node x,Node y)
{
    if(x.x==y.x&&x.y==y.y&&x.z==y.z)
    return true;
    return false;
}
int main()
{
    scanf("%d",&t);
    while(t--)
    {
    falg=1;
    scanf("%d%d%d%d",&a,&b,&c,&time);
    end.x=a-1;end.y=b-1;end.z=c-1;
    for(int i=0;i<a;i++)
    for(int j=0;j<b;j++)
    for(int k=0;k<c;k++)
    scanf("%d",&visit[i][j][k]);
    map[0].time=map[0].x=map[0].y=map[0].z=0;
    int nodedir=0,exdir=0;
    while(nodedir<=exdir&&exdir<Max&&falg)
    {
    for(int i=0;i<6;i++)
    {
    temp=map[nodedir];
    int dx=temp.x+dir[i][0],dy=temp.y+dir[i][1],dz=temp.z+dir[i][2];
    if(dx>=0&&dx<a&&dy>=0&&dy<b&&dz>=0&&dz<c&&!visit[dx][dy][dz])
    {
    temp.x=dx; temp.y=dy; temp.z=dz; temp.time++; visit[dx][dy][dz]=1;
    map[++exdir]=temp;
    if(equal(temp,end))
    {
    if(temp.time<time)
    printf("%d\n",temp.time);
    else printf("-1\n");
    falg=0;break;
    }
    }
    }
    nodedir++;
    }
    if(falg)
    printf("-1\n");
    }

    return 0;
}
