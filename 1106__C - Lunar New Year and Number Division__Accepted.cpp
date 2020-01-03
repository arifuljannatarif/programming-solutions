#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+5];
    for(int i=0; i<n; i++)scanf("%d",&arr[i]);
    sort(arr,arr+n);
    long long int ans=0,p;
    for(int i=0,j=n-1;i<j;i++,j--){
   p=arr[i]+arr[j];
    ans+=p*p;
    }
    cout<<ans<<endl;
}