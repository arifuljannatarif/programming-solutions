#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int,int>
int main()
{
    ios_base::sync_with_stdio(false);
    ll t,a,b,c;
    cin>>t;
    while(t--)
    {
        ll arr[4];
        bool flag[4];
        flag[0]=flag[1]=flag[2]=0;
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if(arr[0]==arr[1] && arr[1]==arr[2])
        {
            cout<<0<<endl;
        }
        else
        {
             if(arr[0]==arr[1])
            {
                arr[0]++,arr[1]++;
            if(arr[2]>arr[0])
                    arr[2]--;
            }
            else if(arr[1]==arr[2])
            {
                arr[1]--,arr[2]--;
                if(arr[0]<arr[1])arr[0]++;
            }
            else
            {
                arr[0]++,arr[2]--;
            }
               // cout<<arr[0]<<arr[1]<<arr[2]<<endl;
            ll ans=(abs(arr[0]-arr[1])+abs(arr[1]-arr[2])+abs(arr[0]-arr[2]));
            cout<<ans<<endl;
        }

    }
}