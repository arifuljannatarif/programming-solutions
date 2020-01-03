#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d=0;
    cin>>t;
    int x[t];
    set<int >s;
    for(int i=0; i<t; i++)
    {
        cin>>x[i];
        s.insert(x[i]);
    }
    int a[2],i=0;

    if(s.size()==2)
    {
        for(auto & it : s)
        {
         a[i]=it;
         i++;

        }
        int c1=0,c2=0;
        for(int i=0;i<t;i++)
        {
            if(x[i]==a[0])c1++;
            if(x[i]==a[1])c2++;


        }
        if(c1==c2)
        {
            cout<<"YES\n"<<a[0]<<" "<<a[1]<<endl;

        }
        else cout<<"NO\n";


    }
    else cout<<"NO\n";
}