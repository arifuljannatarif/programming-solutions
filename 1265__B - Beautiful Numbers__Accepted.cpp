#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n+5];
        int mp[n+5];
        for(i=1; i<=n; i++)
        {
            cin>>x;
            mp[x]=i;
        }
        string ans="";
        int ll=1;
            int mn=1e6,mx=-1;;
        for(i=1; i<=n; i++)
        {

                mn=min(mp[i],mn);
                mx=max(mp[i],mx);

            if( (abs(mn-mx)+1)>i)
                ans+="0";
            else
                {ans+="1";
                }
           // printf("min %d mx %d\n",mn,mx);
        }
        cout<<ans<<endl;
    }
}