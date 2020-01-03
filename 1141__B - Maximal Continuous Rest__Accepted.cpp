#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+2],ans1[n+2],ans2[n+2],cnt=0,is=-1,ie=-1,fs=0,fe=0;
    ans1[0]=ans2[n-1]=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(!i && arr[i]==1)
            ans1[0]=1;
        else if(i && arr[i]==arr[i-1] && arr[i]==1)
        {
            ans1[i]=ans1[i-1]+1;

        }
        else if(arr[i]==1)
            ans1[i]=1;
        else if(arr[i]==0)
            ans1[i]=0;
        cnt=max(cnt,ans1[i]);
    }
    ans2[n-1]=0;

    if(arr[0]==arr[n-1] && arr[0]==1)
    {
        for(int i=n-1; i>=0; i--)
        {
            if(i==n-1 && arr[i]==1)
                ans2[i]=1;
            else if( i!=n-1 && arr[i]==arr[i+1] && arr[i]==1)
            {
                ans2[i]=ans2[i+1]+1;
            }
            else if(arr[i]==1)
                ans2[i]=1;
            else if(arr[i]==0)
                ans2[i]=0;
        }
        cnt=max(cnt,ans1[n-1]+ans2[0]);
    }
    printf("%d\n",cnt);
    return 0;
}