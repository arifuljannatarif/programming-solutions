#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string s,s1;
    s1="hello";
    cin>>s;
    int k=0,j,x=0,p=0;
    for(int i=0;i<s1.size();i++)
    {
        for(j=k;j<s.size();j++)
        {
            if(s[j]==s1[p])
            {
                k=j+1;
                x++;
                p++;
                break;

            }

        }

    }
    if(x==5)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return  0;
}