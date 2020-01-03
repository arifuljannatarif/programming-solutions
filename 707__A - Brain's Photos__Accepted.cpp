#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,f=0;
    cin>>n>>m;
    for(int i=0;i<n*m;i++)
    {
        char ch;
        cin>>ch;
        //cout<<ch<<endl;
        if(ch=='C' || ch=='M' || ch=='Y')
            f=1;
    }
    if(f==1)
        cout<<"#Color\n";
    else
        cout<<"#Black&White\n";
}