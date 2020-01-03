#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
const int mx=2*1e5+5;
int arr[mx];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        int ans=mx;
        scanf("%d",&n);
        vector<int>v[n+1];
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            int p=arr[i];
            v[p].push_back(i);
            int sz=v[p].size();
            if(sz>=2)
                ans=min(ans,abs(v[p][sz-1]-v[p][sz-2]));
        }
        printf("%d\n",ans==mx?-1:ans+1);
    }
}