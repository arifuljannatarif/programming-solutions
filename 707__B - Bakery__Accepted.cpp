#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,p;
    cin>>n>>m>>k;
    vector<int>v[n+2],cost[n+2];
    int arr[n+2];
    for(int i=0; i<m; i++)
    {
        int u,v1,w;
        cin>>u>>v1>>w;
        v[u].push_back(v1);
        cost[u].push_back(w);
        v[v1].push_back(u);
        cost[v1].push_back(w);
    }
    vector<int>sp;
    for(int i=0; i<k; i++)
    {
        cin>>p;
        sp.push_back(p);
        arr[p]=-99;
    }
    //sort(sp.begin(),sp.end());
    int mx=INT_MAX,k1=0;
    if(k>0){
        for(int k1=0;k1<sp.size(); k1++)
    {
        int i=sp[k1];
        if(v[i].size()>0)
        {
            for(int j=0; j<v[i].size(); j++)
            {
                int ch=v[i][j];
                //cout<<"------"<<i<<"->"<<v[i][j]<<endl;
                if(arr[ch]!=-99)
                {

                    mx=min(mx,cost[i][j]);
                }

            }
        }
    }
    }
    if(mx==INT_MAX)
        printf("-1\n");
    else
        cout<<mx<<endl;

}