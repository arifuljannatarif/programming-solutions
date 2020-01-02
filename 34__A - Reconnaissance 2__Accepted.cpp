#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    cin>>t;
    vector<int>v;
    vector<int>v1;
    for(int i=0; i<t; i++)
    {
        cin>>x;
        v.push_back(x);
        if(i>0)
        {
            x=fabs(v[i]-v[i-1]);
            v1.push_back(x);
        }
    }
    sort(v1.begin(),v1.end());
    int z=fabs(v[v.size() - 1]-v[0]);
    z=min(z, v1[0] );
    for(int i=1; i<v.size(); i++)
        if(fabs(v[i]-v[i-1])==z)
        {
            return !printf("%d %d\n",i,i+1);

        }
        cout<<1<<" "<<v.size()<<endl;


}