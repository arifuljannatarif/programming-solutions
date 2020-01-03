#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],b[3],slvs,c=0;;
    cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2]>>slvs;
    int sum1=a[0]+a[1]+a[2], sum2=b[0]+b[1]+b[2];
    while(sum1>0)
    {
        c++;
        sum1-=5;
    }
    while(sum2>0)
    {
        c++;
        sum2-=10;
    }
    if(c<=slvs)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}