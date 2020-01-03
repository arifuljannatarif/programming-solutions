#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(fabs(a-b)>1 ||a==0 && b==0 )cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}