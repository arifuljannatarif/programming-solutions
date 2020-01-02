#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
    string s;
    int t=8,f=1;
    while(t--)
    {
        cin>>s;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
               f=0;

        }
    }
    if(!f)
        cout<<"NO\n";
    if(f)
    cout<<"YES\n";
}