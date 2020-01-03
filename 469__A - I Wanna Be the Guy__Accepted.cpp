#include<bits/stdc++.h>
using namespace std;
int main()
{
    int but,bul;
    set<int>s;
    cin>>but;
    for(int i=0; i<2; i++)
    {
        int t;
        cin>>t;
        for(int i=0; i<t; i++)
        {
            int a;
            cin>>a;
            s.insert(a);

        }
    }
    if(s.size()==but)
        cout<<"I become the guy.\n";
    else
        cout<<"Oh, my keyboard!\n";
    return 0;
}