#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mx=1e6;
ll a,b,c,ans=0,i,k,j,m;
ll divs[mx+15];
void getdiv(){
    for(i=1; i<=mx; i++)
        for( j=i; j<=mx; j+=i)
            divs[j]++;
}
int main()
{
    getdiv();
    scanf("%lld %lld %lld",&a,&b,&c);
    for( i=1; i<=a; i++)
        for( j=1; j<=b; j++)
            for( k=1; k<=c; k++)
            ans+=divs[(i*j*k)];
    printf("%lld\n",ans % 1073741824 );

}