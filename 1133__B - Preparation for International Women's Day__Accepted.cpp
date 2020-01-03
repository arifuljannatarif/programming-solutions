#include<bits/stdc++.h>
using namespace std;
int vagsesh[200];
int main()
{
    int n,k,x,i,c=0;
    scanf("%d %d",&n,&k);
    for(i=0; i<n; i++)
    {
        cin>>x;
        vagsesh[x%k]++;
    }
    c+=vagsesh[0]/2;
    for(i=1; i<(k+1)/2; i++)
        c+=min(vagsesh[i],vagsesh[k-i]);
    if(k%2==0)
        c+=vagsesh[k/2]/2;
    printf("%d\n",c*2);
}