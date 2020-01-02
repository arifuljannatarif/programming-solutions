/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-12-20.31                 #
              #  Code submitted  :  2019-11-12-20.40                 #
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
const int mx=1e9+5;
ll t,n,c=-1,i,a,b,j,l=mx,r=-1;
int main(){
    scanf("%d",&n);
    pair<ll,ll>ans={mx,-1};
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a<=ans.first && b>=ans.second)ans={a,b},c=i;
        l=min(l,a);r=max(r,b);
    }
    printf("%lld\n",(ans.first==l && ans.second==r)?c+1:-1);
}