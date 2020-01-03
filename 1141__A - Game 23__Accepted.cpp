#include<bits/stdc++.h>
using namespace std;
int ans=-1;
void dfs(int src,int dest,int step)
{
    if(src>dest)
        return;
    if(src==dest)
    {
        ans=step;
        return;
    }
    dfs(src*2,dest,step+1);
    dfs(src*3,dest,step+1);
    return;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    dfs(n,m,0);
    printf("%d\n",ans);
}