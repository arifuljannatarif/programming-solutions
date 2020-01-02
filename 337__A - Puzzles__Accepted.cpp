#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define in cin
#define print cout
#define see(x) cout<<#x<<" = "<<x<<endl;
int main()
{
    int n,m,mx=0;
    in>>n>>m;
    vector<int>ar;

    for(int i=0; i<m; i++)
    {
        int p;
        cin>>p;
        ar.push_back(p);
    }
    sort(ar.begin(),ar.end());
    for(int i=0; i<m-n+1; i++)
    {
        

        int x=abs(ar[i]-ar[i+n-1]);
        if(i==0 || x<mx)mx=x;
    }

    cout<<mx<<endl;

}