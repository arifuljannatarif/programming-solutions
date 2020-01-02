#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int i;
   string s;
    cin>>s;
    char ch='/';
    for(i=s.length()-1;i>0;i--)
    {
        if(s[i]!='/')break;
        if(s[i]=='/'){
                s.pop_back();
        }

    }
    for( i=0;i<s.size();i++)
    {
        if(s[i]==ch && s[i+1]==ch)
        {
            continue;
        }
        else
            cout<<s[i];


    }
}