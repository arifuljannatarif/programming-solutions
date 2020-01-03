#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,b,i,c=0;
    cin>>n>>h;
    for(i=0; i<n; i++)
    {
        cin>>b;
        if(b>h)
        {
            c+=2;
        }
        else
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}