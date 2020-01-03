#include<bits/stdc++.h>
using namespace std;
struct x
{
    int ind,col;
};
bool comp1(x a,x b)
{
    return a.col < b.col;
};
bool comp2(x a,x b)
{
    return a.ind<b.ind;
};
int main()
{
    //freopen("in.txt","r",stdin);
    int n,k;
    scanf("%d %d",&n,&k);
    int flag[5010],color[k+5];
    x arr[n+5];
    memset(flag,0,sizeof flag);
    for(int i=0; i<n; i++)
    {
        ;
        scanf("%d",&arr[i].col);
        arr[i].ind=i;
        flag[arr[i].col]++;
        if(flag[arr[i].col]>k)
            return !printf("NO\n");
    }
    printf("YES\n");
    sort(arr,arr+n,comp1);
    int cl=0;
    for(int i=0; i<n; i++)
    {
        arr[i].col=++cl;
        if(cl==k)
            cl=0;
    }
    sort(arr,arr+n,comp2);
    for(int i=0; i<n; i++)
        i==0?printf("%d",arr[i].col):printf(" %d",arr[i].col);
}