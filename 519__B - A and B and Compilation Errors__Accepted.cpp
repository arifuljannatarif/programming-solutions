#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,v;
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    for(ll i=0;i<n;i++)
    {
        ll v;
        cin>>v;
        v1.push_back(v);


    }
    sort(v1.begin(),v1.end());
    for(ll i=0;i<n-1;i++)
    {
        cin>>v;
        v2.push_back(v);
    }
    sort(v2.begin(),v2.end());

    for(ll i=0;i<n-2;i++)
    {
        cin>>v;
        v3.push_back(v);
    }

    sort(v3.begin(),v3.end());
    int f2=0;
     for( ll i=0;v2[i];i++)
    {
        if(v2[i]!=v1[i])
         {

            cout<<v1[i]<<endl;
            f2=1;
            break;
         }

    }
    if(f2==0)
    {
        cout<<v1[v1.size()-1]<<endl;
    }
    int f1=0;
    for( ll i=0;v3[i];i++)
    {
        if(v2[i]!=v3[i])
         {
            cout<<v2[i]<<endl;
            f1=1;
            break;
         }

    }
    if(f1==0)
        cout<<v2[v2.size()-1]<<endl;

}