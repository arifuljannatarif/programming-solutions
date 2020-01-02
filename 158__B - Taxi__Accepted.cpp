#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,c=0,taxi=0;
    vector<int>v;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int z;
        cin>>z;
        v.push_back(z);
    }
      sort(v.begin(),v.end());

     i=v.size()-1;
    int k=0;
    while(k!= i)
    {
        if(v[i]+ v[k]<=4)
        {
            v[i]+=v[k];
            k++;
        }
        else
        {
            i--;
            taxi++;
        }
    }
    cout<<(taxi+1);

    return 0;
}