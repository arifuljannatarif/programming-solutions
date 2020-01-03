#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=0;
    scanf("%d",&n);
    int arr[n+5];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        mx=max(arr[i],mx);
    }
    int sum=0;
    for(int i=0; i<n; i++)
        sum+=mx-arr[i];
    cout<<sum<<endl;
}