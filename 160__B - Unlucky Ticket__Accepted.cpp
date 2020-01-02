#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    cin.ignore();

    string s;
    cin>>s;
    string s1="",s2="";
    for(int i=0;i<s.size();i++)
    {
        if(i<s.size()/2)
            s1+=s[i];
        else
            s2+=s[i];
    }

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    bool g1=true, g2=true;

    for(int i=0;i<n;i++)
        if(s1[i]>=s2[i]) g1=false;

    for(int i=0;i<n;i++)
        if(s1[i]<=s2[i]) g2=false;

    puts(g1||g2?"YES":"NO");

    return 0;
}