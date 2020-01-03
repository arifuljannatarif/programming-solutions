#include<bits/stdc++.h>
using namespace std;
int main()
{

     long int n;
    cin>>n;
    long int ans=(n*(n+1))/2;
    if(ans%2==0)
        printf("0\n");
    else
        printf("1\n");

}