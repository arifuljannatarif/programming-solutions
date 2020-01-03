#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set<char>s1;
    getline(cin,s);
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s1.insert(s[i]);
        }
    }
    cout<<s1.size();
    return 0;
}