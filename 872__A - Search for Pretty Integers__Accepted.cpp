#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,mn,mn2;
    cin>>n>>m;
    int x,y[m],ar[20];
    for(int i=0; i<12; i++)ar[i]=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
 ar[x]++;
        if(i==0)mn=x;
        else
            mn=min(mn,x);
    }
    for(int i=0; i<m; i++)
    {
        cin>>x;
        ar[x]++;
        if(i==0)mn2=x;
        mn2=min(mn2,x);
    }
    if(mn==mn2)cout<<mn<<endl;
    else
    {
        for(int j=0; j<10; j++)
        {
            if(ar[j]>1)
            {
                cout<<j<<endl;
                return 0;
            }

        }
        if(mn>mn2)
            swap(mn,mn2);
        cout<<mn<<mn2<<endl;
    }
    return 0;

}