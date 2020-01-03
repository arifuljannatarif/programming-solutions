#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int,int>
int main()
{
    ios_base::sync_with_stdio(false);
    ll t,a,b,i,n,k,ans=0,c=0;
    cin>>n>>k;

        string s;
        char ch;
        cin>>s;
        int cnt[29]={0};
         for(i=0;i<k;i++){
            cin>>ch;
            cnt[ch-'a']++;
         }
         for(int i=0;i<s.size();i++)
            cnt[s[i]-'a']==0? ans+=(c*(c+1))/2LL,c=0:c++;
         ans+=(c*(c+1))/2LL;
         cout<<ans<<endl;
}