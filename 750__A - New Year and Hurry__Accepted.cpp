#include<bits/stdc++.h>
using namespace std;
bool sync_with_stdio(bool sync = true);
int main()
{
    int a,b,i,c=0,x;
    cin>>a>>b;
    x=240-b;
    for(i=1; i<=a; i++)
    {
        if(x>=0&& x>=(5*(i)))
        {
            c++;
        }
        x=x-(5*i);
        ///cout<<"x="<<x<<endl;
        ///cout<<"c="<<c<<endl;
    }
    cout<<c;
    return 0;
}