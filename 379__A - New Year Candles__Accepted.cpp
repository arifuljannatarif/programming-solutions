#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,sum=0;
    cin>>a>>b;
 int x=a;
    while(a>=b)
    {
        int y=a/b;
        int z=b*y;
        a=(a/b)+(a-z);
        sum+=y;

    }
    cout<<sum+x;
    return 0;
}