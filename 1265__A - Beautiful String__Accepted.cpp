#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s2;
        cin>>s;
        s2=s;
        bool f=true;
        int l=s.size(),i,j;
        s="$"+s+"$";
        string ss="abc";
        for(i=1; i<s.size() && f; i++)
        {
            if(s[i]!='?' && (s[i-1]==s[i] || s[i+1]==s[i] ))
            {
                f=false;
            }
            else if(s[i]=='?')
            {
                bool x=false;
                for(j=0; j<3; j++)
                {
                    if(ss[j]!=s[i-1] && ss[j]!=s[i+1])
                    {
                        x=true;
                        s[i]=ss[j];
                        s2[i-1]=ss[j];
                        break;
                    }
                }
                f=x;
            }

        }
        if(!f)
            cout<<-1<<endl;
        else
            cout<<s2<<endl;
    }
}