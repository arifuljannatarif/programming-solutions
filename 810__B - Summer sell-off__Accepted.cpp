/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-10-22.17                 #
              #  Code submitted  :  2019-11-11-19.54                 #
              #                                                      #
              ########################################################
*/
using namespace std;
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pii pair<ll,ll>
#define vi vector< int >
#define vl vector< ll >
const int mx=1e6;
ll t,n,c=0,i,j,a,b;
int main(){
    scanf("%lld %lld",&n,&c);
    vector<ll> v;
    ll sum=0;
    for(i=0;i<n;i++){
        scanf("%lld %lld",&a,&b);
        sum+=min(a,b);
        a=min(a,b);
        v.pb(min(a,b-a));
    }
    sort(v.begin(),v.end(),greater<int>());
    for(i=0;i<min(n,c);i++){
        sum+=v[i];
    }
    printf("%lld\n",sum);
}