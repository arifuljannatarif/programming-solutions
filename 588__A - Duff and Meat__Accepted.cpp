#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>amount;
    vector<int>price;
    long int n,i=0,a,b,m=10000000,indx=0,sum=0,x[1000];
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        amount.push_back(a);
        price.push_back(b);

        if(b<m)
        {
            m=b;
            indx=i;
            sum+=amount[i]*price[indx];

        }
        else
        {
            sum+=amount[i]*price[indx];
        }
        i++;

    }
    cout<<sum<<"\n";
    return 0;
}