#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans,g=1,f1,t1;
    cin>>n>>k;
    while(n--)
    {
        cin>>f1>>t1;
        if(t1>k && g)ans=(f1-(t1-k)),g=0;
        else if(g)ans=f1,g=0;
        int p=(f1-(t1-k));
        if(k<t1)
            ans=max(ans,p);
        else ans=max(ans,f1);
    }
    cout<<ans<<endl;


}