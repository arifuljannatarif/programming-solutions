#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size(),d=0,S=0,a=0,o=0,n=0;
    for(int i=0; i<l; i++)
    {
        if(s[i]=='D' && i+4<l)
        {
            if(s[i+1]=='a')
                if(s[i+2]=='n')
                    if(s[i+3]=='i')
                        if(s[i+4]=='l')
                            d++;

        }
        if(s[i]=='O' && i+3<l)
        {
            if(s[i+1]=='l')
                if(s[i+2]=='y')
                    if(s[i+3]=='a')
                        o++;

        }
        if(s[i]=='S' && i+4<l)
        {
            if(s[i+1]=='l')
                if(s[i+2]=='a')
                    if(s[i+3]=='v')
                        if(s[i+4]=='a')
                            S++;

        }
        if(s[i]=='A' && i+2<l)
        {
            if(s[i+1]=='n')
                if(s[i+2]=='n')
                    a++;

        }
        if(s[i]=='N' && i+5<l)
        {
            if(s[i+1]=='i')
                if(s[i+2]=='k')
                    if(s[i+3]=='i')
                        if(s[i+4]=='t')
                            if(s[i+5]=='a')
                                n++;

        }

    }
    a=a+(S+n+o+d);
    if(a==1)
    {
       cout<<"YES\n";
    }
    else
        cout<<"NO\n";
}