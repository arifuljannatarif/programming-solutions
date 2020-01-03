#include<bits/stdc++.h>
using namespace std;
int i,cnt[65],l,n;
string s;
int main()
{
    cin>>n>>s;
    l=s.size()/3;
    memset(cnt,0,sizeof cnt);
    for( i=0; i<l*3; i++)cnt[s[i]]++;
    i=l*3;
    while(--i>=0)
        {
          cnt[s[i]+5]++;
            if(cnt[s[i]]<=l || (s[i]=='2' && cnt[s[i]+5]<=l))continue;
            if(cnt['2']<l&& s[i]!='2')
                cnt[s[i]]--, s[i]='2', cnt['2']++;
            else if(cnt['1']<l && s[i]!='1')
                cnt[s[i]]--,s[i]='1',cnt['1']++;
        }
    i=-1;
    while(cnt['0']<l && ++i<s.size() )
        {

            if(cnt[s[i]]<=l || s[i]=='0')continue;
            cnt[s[i]]--;
            s[i]='0';
            cnt['0']++;

        }
    cout<<s<<endl;
}