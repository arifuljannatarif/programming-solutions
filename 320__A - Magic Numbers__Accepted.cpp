#include<iostream>
using namespace std;
int main()
{
    int i;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
if((s[i]!='1'&& s[i]!='4') || (s[i]=='4' && (s[i-1]!='4' && s[i-1]!='1') ) || (s[i]=='4' && s[i+1]=='4' && s[i+2]=='4') )
             {cout<<"NO\n";return 0;}
    }
    cout<<"YES\n";
}