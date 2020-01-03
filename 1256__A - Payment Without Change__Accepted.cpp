///ariful jannat arif
///Leading university
///facebook.com/cse.ariful
#include<bits/stdc++.h>
using namespace std;
const int mx=1e6;
#define ll long long int
int main(){
    ll t,a,b,n,s,q;
    cin>>t;
    while(t--){
        cin>>a>>b>>n>>s;
         q=s/n;
         q=min(q,a);
        if((q*n+b<s))printf("NO\n");
        else printf("YES\n");
    }

}