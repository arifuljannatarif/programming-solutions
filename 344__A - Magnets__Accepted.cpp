#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,c=0;
    vector<int>v;
    cin>>t;
for(int i=0;i<t;i++)
    {
        int t;
        cin>>a;
        v.push_back(a);
        if(i!=0)
        {
            if(v[i-1]!=v[i])
                c+=1;

        }
    }
    cout<<++c;
    return 0;
}