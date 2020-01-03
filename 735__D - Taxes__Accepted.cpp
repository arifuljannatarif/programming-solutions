#include <bits/stdc++.h>

using namespace std;

bool prime(int x)
{
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}


int main()
{
    int x;
    cin>>x;
    if(prime(x))
        cout<<"1";
    else if(x%2==0 || prime(x-2))
    {
        cout<<"2";
    }
    else
        cout<<"3";
    return 0;
}