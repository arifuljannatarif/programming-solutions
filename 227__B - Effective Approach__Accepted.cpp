#include<bits/stdc++.h>
#define rep(i,n) for( i=0;i<n;i++)
#define rep1(t,i) for( i=t-1;i>=0;i--)
#define ll long long int
ll i;
using namespace std;
int main()
{
    ll n,t;
    cin>>n;
    map<ll, ll>m;
    map<ll ,ll >m2;
    ll z;
    rep(i,n)
    {
        cin>>z;
        m[z]=i+1;
        m2[z]=n-i;

    }
    cin>>t;
    ll q[t];
    rep(i,t)
    {
        cin>>q[i];

    }
    ll a=0,b=0;
    for(ll j=0; j<t; j++)
    {
       a+=m[q[j]];
       b+=m2[q[j]];
    }
    cout<<a<<" "<<b<<endl;
}