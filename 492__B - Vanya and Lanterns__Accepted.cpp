/*
              ########################################################
              #                                                      #
              #  Ariful Jannat Arif                                  #
              #  Leading University,Sylhet                           #
              #  Department Of Computer Science and Engineering      #
              #  www.facebook.com/mjarif97                           #
              #  Email: cse.ariful@gmail.com                         #
              #                                                      #
              #  Code written in :  2019-11-07-22.52                 #
              #  Code submitted  :  2019-11-07-23.33                 #
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
ll t,n,c=0,i,j,l;
int main(){
    scanf("%lld %lld",&n,&l);
    vector<ll>v;
    for(i=0;i<n;i++){
        scanf("%lld",&c);
        v.pb(c);
    }
    sort(v.begin(),v.end());
    double mx=v[0];
    for(i=1;i<n;i++){
        double a=v[i],b=v[i-1];
        double p=a-b;
        p/=2;
            if(p > mx )mx=p;
    }
    if((v[0]-0)*1.0 > mx)mx=(v[0]-0)*1.0;
    if((l-v[n-1])*1.0 > mx)mx=(l-v[n-1])*1.0;

    cout<<fixed<<setprecision(9)<<mx<<endl;

}