#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,a=0;
    cin >> k >> r;
    while(!(((k*++a)%10==0) || ((k*a)%10==r)));
    printf("%d\n",a);
    return 0;
}