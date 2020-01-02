#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double x,c=0,p,sum=0;
    cin>>x;
    while(x--)
    {
        cin>>p;
        sum+=p;
        c++;
    }
    cout<<setprecision(12)<<(sum/c)<<endl;

   return 0;
}