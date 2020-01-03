#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,x,y;
    scanf("%d",&n);
    int arr[n+2][3];
    for(int i=0; i<n; i++)
        scanf("%d %d",&arr[i][0],&arr[i][1]);
    scanf("%d",&k);
    for(int i=0; i<n; i++)
    {
        if(arr[i][1]>=k)
        {
            return !printf("%d",n-i);
        }
    }
}