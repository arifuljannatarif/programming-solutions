#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int A[n+5],l=0,r=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
        if(A[i]==0)
            l++;
        else
            r++;
    }
    int l1=0,r1=0;
   for(int i=0;i<n;i++){
    if(A[i]==0)l1++;
    else r1++;
    if(l1==l)return !printf("%d\n",i+1);
    if(r1==r)return !printf("%d\n",i+1);
   }


}