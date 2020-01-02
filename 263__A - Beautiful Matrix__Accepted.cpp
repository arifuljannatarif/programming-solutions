#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()\
{
    int n,m,x[5][5],indx1,indx2;;

    for(n=0; n<5; n++)
    {
        for(m=0; m<5; m++)
        {
            cin>>x[n][m];
            if(x[n][m]==1)
            {indx1=n;
            indx2=m;}
        }
    }
  

    cout<<abs(indx1-2)+abs(indx2-2)<<"\n";


}