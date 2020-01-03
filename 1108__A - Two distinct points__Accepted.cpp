#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,l1,r1,l2,r2,b,a;
    scanf("%d",&t);
    while(t--)
    {
       cin>>l1>>r1>>l2>>r2;
         if(l1!=l2)
        cout<<l1<<" "<<l2<<endl;
        else
        cout<<l1<<" "<<l2+1<<endl;
    }
}