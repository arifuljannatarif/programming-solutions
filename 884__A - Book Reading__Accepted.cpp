#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum=0,c=0;
    cin>>n>>t;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        sum+=(86400-x);
        c++;
        if(sum>=t)
        {

            cout<<c<<endl;
            return 0;
        }
    }
    if(t-sum<=86400)
    {
        cout<<++c<<endl;
        return 0;
    }
    else
    {
        int ans=(t-sum)/86400;
        if(ans*86400!=t-sum)ans++;

        cout<<c+ans<<endl;
    }

}