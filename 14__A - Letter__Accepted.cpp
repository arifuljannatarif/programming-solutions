#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,iv1=10000,iv2=-1,jv1=10000,jv2=-1;
    cin>>n>>k;
    char x[n][k];
    for(int i=0; i<n; i++)
        for(int j=0; j<k; j++)
        {
            cin>>x[i][j];
            if(x[i][j]=='*' && i<iv1)iv1=i;
            if(x[i][j]=='*' && i>iv2)iv2=i;
            if(x[i][j]=='*' && j<jv1)jv1=j;
            if(x[i][j]=='*' && j>jv2)jv2=j;


        }
        for(int i=iv1;i<=iv2;i++)
        {
            for(int j=jv1;j<=jv2;j++)
            {
                cout<<x[i][j];
            }
            cout<<endl;
        }
    }