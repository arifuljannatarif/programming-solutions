/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-12-03-19.01                 #
              #  Code submitted  :                   #
              #                                                      #
              ########################################################
*/
#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
#define SEE_YOU_THEN ios_base::sync_with_stdio(false);
#define pb      push_back
#define F       first
#define S       second
#define TC      int t;scanf("%d",&t);while(t--)
#define pii     pair<int,int>
#define d(x)    cerr<<#x<<" = "<<x
const int mx=5*1e6+10;
int m,n,i,j,a,b,ss;
int par[mx];
int cnt[mx];
int findp(int x){
    if(par[x]==x)return x;
    return par[x]=findp(par[x]);
}
void make(int x,int y){
    int p=findp(x),q=findp(y);
    if(p!=q){
        if(cnt[p]<cnt[b])swap(cnt[p],cnt[q]);
        par[q]=p;
        cnt[p]+=cnt[q];
    }
}
int main()
{
    SEE_YOU_THEN
    cin>>n>>m;
    for(i==0;i<=n;i++)par[i]=i,cnt[i]=1;
    for(i=0;i<m;i++){
            cin>>a;
    for(j=0;j<a;j++){
        cin>>b;
        if(j)make(ss,b);
        ss=b;
    }

    }
    for(i=1;i<=n;i++){
        printf("%d ",cnt[findp(i)]);
    }


}