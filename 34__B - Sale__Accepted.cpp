#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{

        int n,k,sum=0;
    cin>>n>>k;
    vector<int>v;
    while(n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++)
    {
        if(v[i]<0)
        sum+=v[i];
    }
    cout<<fabs(sum)<<endl;

}#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{

        int n,k,sum=0;
    cin>>n>>k;
    vector<int>v;
    while(n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++)
    {
        if(v[i]<0)
        sum+=v[i];
    }
    cout<<fabs(sum)<<endl;

}