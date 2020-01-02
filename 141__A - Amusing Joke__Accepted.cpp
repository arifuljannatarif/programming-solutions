#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
string s,s1,s2;
    cin>>s>>s1>>s2;
    s=s+s1;
    sort(s.begin(),s.end());
    sort(s2.begin(),s2.end());
    if (strcmp(s.c_str(), s2.c_str()) == 0 )
{
cout<<"YES\n";

}
else 
cout<<"NO\n";
return 0;

}