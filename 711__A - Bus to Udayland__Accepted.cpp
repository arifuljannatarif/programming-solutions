#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,f=0;
    string s;
    vector<string>x;
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>s;
        if(f==0)
        {
            if(s[0]=='O' && s[1]=='O')
            {
                s[0]='+';
                s[1]='+';
                f=1;
            }
            else if(s[3]=='O' && s[4]=='O')
            {
                s[3]='+';
                s[4]='+';
                f=1;
            }

        }
        x.push_back(s);

    }
    if(f==0)
    cout<<"NO";
    else
    {
        cout<<"YES\n";
        for(i=0;i<x.size();i++)
        {
            cout<<x[i]<<endl;
        }
    }
}