#include<bits/stdc++.h>
using namespace std;
int main()
{
    int but,bul;
    set<int>s;
    cin>>but>>bul;
    for(int i=0;i<but;i++)
    {
        int t;
        cin>>t;
        for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;
        s.insert(a);

    }
    }
    if(s.size()==bul)
    cout<<"YES\n";
    else
        cout<<"NO\n";
            return 0;
}