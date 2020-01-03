#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum=0,c=0,g=false;
    cin>>n>>t;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    if((sum+n-1)==t)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}