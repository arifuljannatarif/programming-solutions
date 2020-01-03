#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x,y;
        cin>>x>>y;
        if((y-x)>=2)
        {
            c++;
        }
    }
    cout<<c<<"\n";
    return 0;
}