/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-07-01.35                 #
              #  Code submitted  :  2019-11-07-01.42                 #
              #                                                      #
              ########################################################
*/
using namespace std;
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pii pair<int,int>
#define vi vector< int >
#define vl vector< ll >
const int mx=1e6;
int t,n,m,c=0,i,j,a,b,sum=0;
bool comp(pii x,pii y){return x.second<y.second;}
int main(){
    scanf("%d %d",&n,&m);
    vector<pii> v;
    for( i=0;i<m;i++)
         scanf("%d %d",&a,&b),v.pb({a,b});
    sort(v.begin(),v.end(),comp);
    for(i=m-1;i>=0 && n>0;i--)sum+=(v[i].second*min(n,v[i].first)),n-=v[i].first;
    printf("%d\n",sum);
}