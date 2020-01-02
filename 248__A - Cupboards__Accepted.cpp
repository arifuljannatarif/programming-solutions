#include<bits/stdc++.h>
using namespace std;
#define f(i ,n) for(int i=0;i<n;i++)
#include<vector>
int main()
{
    int l,r,t;
    cin>>t;
    vector<int>v;
    vector<int>v1;
    f(i,t)
    {
        cin>> l>>r;
        v.push_back(l);
        v1.push_back(r);
    }
    l=0;
    r=0;
    int z=0,o=0;
    f(i,t)
    {
        if(v[i]==1)l++;
        if(v1[i]==0)l++;
        if(v[i]==0)r++;
        if(v1[i]==1)r++;

        // for only one
        if(v[i]==0)o++;
        if(v1[i]==0)o++;
        //for only zero
        if(v[i]==1)z++;
        if(v1[i]==1)z++;
    }

    int ans=min(l,min(o,min(r,z)));

    cout<<ans<<endl;
}