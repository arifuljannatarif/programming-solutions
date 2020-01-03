#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==0)
            c++;
    }
    if(n==1&&a[0]==1)
        printf("YES\n");
    else if(n==1&&a[0]==0)
        printf("NO\n");

    else if(c==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}