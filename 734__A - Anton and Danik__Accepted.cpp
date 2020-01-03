#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,A=0,D=0;
    cin>>x;
    char wrd[x];
    cin>>wrd;
    for(int i=0;i<x; i++)
    {
        if(wrd[i]=='A')
        {
            A++;
        }
        else
        {
            D++;
        }
    }
   /// cout<<A<<"   "<<D;
    if(A>D)
        cout<<"Anton\n";
    else if(A==D)
        cout<<"Friendship\n";
    else
        cout<<"Danik\n";

    return 0;

}