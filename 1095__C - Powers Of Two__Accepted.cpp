#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int sum=k,arr[k+2];
    for(int i=k-1;  i>=0; i--)
    {
        arr[i]=1 ;
        while(sum+arr[i]<=n)
        {
            sum+=arr[i];
            arr[i]=arr[i]*2;
        }
    }
    if(sum!=n)
        return !printf("NO\n");
    printf("YES\n");
    for(int i=0; i<=k-1; i++)printf("%d ",arr[i]);
}