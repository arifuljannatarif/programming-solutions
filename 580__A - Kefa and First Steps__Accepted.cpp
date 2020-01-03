#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>v;
    vector<int>v1;
    v.push_back(0);
    int a;
    int c=0;
    for(int i=1;i<=t;i++)
    {
        cin>>a;

        v.push_back(a);

        if(a>=v[i-1])
          {
              c++;
          }

         if(a<v[i-1]||t==i)
        {
            v1.push_back(c);
            c=1;
        }
    }

    sort(v1.begin(),v1.end());

    cout<<v1[v1.size()-1];
}