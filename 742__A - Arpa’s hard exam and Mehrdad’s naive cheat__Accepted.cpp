#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x[]={6,8,4,2};
    int n,i;
    cin>>n;
    if(n==0)
    {
        cout<<"1";
    }
    else
    {
        for(i=0;i<4;i++)
        {
            if(n%4==i)
            {
                cout<<x[i];
            }
        }
    }
    return 0;
}