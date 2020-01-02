#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i;
    cin>>n;
    int x[n];
    for(i=0; i<n-1; i++)
    {
        int x1;
        cin>>x1;
        x[i+1]=x1;

    }
    cin>>a>>b;
    int sum=0;
    for(i=a;i<b;i++)
    {
        sum+=x[i];
    }
    cout<<sum<<endl;
}