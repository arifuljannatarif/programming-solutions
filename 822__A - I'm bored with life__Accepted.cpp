#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,i,sum=1;
    scanf("%lld %lld",&a,&b);
    if(a<b)
    {
        int t=a;
        b=a;
        a=t;
    }
    for(i=1;i<=b; i++)
        sum*=i;

    cout<<sum<<endl;

    return 0;

}