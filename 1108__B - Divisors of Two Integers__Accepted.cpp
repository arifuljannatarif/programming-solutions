#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    scanf("%d",&n);
    int arr[n+5];
    while(i<n)scanf("%d",&arr[i++]);
    sort(arr,arr+n);
    int x=arr[n-1];
    for( i=n-2; i>=0; i--)
        if(  x%arr[i]!=0 || arr[i]==arr[i+1])return !printf("%d %d\n",arr[i],x);
}