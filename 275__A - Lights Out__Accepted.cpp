#include<bits/stdc++.h>
#define ll long long
#define f(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    int x[3][3];
    f(i,3)
    f(j,3)
    x[i][j]=1;

    f(i,3)
    {
        f(j,3)
        {
            int p;
            cin>>p;
            if(p%2==1)
            {

                if(i>0)
                {
                    x[i-1][j]=(x[i-1][j]==0 ? 1: 0);
                }
                if(j>0)
                {
                    x[i][j-1]=(x[i][j-1]==0 ? 1: 0);

                }
                if(j<2)
                {
                    x[i][j+1]=(x[i][j+1]==0 ? 1: 0);
                }
                if(i<2)
                {
                    x[i+1][j]=(x[i+1][j]==0 ? 1: 0);
                }
                x[i][j]=(x[i][j]==0 ? 1: 0);


            }
        }
    }
    f(i,3)
    {
        f(j,3)
        {
            cout<<x[i][j];
        }
        cout<<endl;
    }

}