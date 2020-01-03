#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c;
    map<char,int>mp;
    string s;
    cin>>s;
    char prev='a';
    for( char i='a'; i<='z'; i++)
        mp[i]=i;
    for( i=0,c=0; i<s.size(); i++)
    {
        int x=abs(mp[prev]-mp['a'])+abs(mp['z']-mp[s[i]])+1;
        int z=abs(mp[prev]-mp['z'])+abs(mp['a']-mp[s[i]])+1;
        int y=abs(mp[prev]-mp[s[i]]);
        c+=min(min(x,y),z);
        prev=s[i];
    }
    printf("%d\n",c);
}