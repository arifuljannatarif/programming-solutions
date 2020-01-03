#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,t;
    cin>>a>>b;
    if(b==1)
    {
        cout<<a;
        return 0;
    }
    else if(a%2==0 && b==2)
    {
        cout<<a/2;
        return 0;
    }
    while(a%b!=0)
    {
        t=a%b;
        c+=a/b;
        a=b;
        b=t;
    }
    c+=a/b;
    printf("%lld\n",c);




    return 0;
}