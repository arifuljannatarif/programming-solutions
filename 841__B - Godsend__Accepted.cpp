#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,o=0,e=0;
    scanf("%d",&n);
    int arr[n+5];
    long long int sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2)
            o++;
        sum+=arr[i];
    }
    if((sum%2==0 && o>1) || sum%2==1)
        return !printf("First\n");
    else
        return !printf("Second\n");



}