#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tc,t,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>t;
        ll sum=0,x,ans=0,prev=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            sum+=x;
            if(prev<x && sum-x<=t){
                ans=i;
                prev=x;
            }

        }
        if(sum<=t)cout<<0<<endl;
            else
        cout<<ans+1<<endl;
    }
}