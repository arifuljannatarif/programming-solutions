#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,len,f=0;
    cin>>n;
    int ar[n];
    vector<int>pos,neg,zero;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        if(!ar[i])
            zero.push_back(ar[i]);
        else if(ar[i]>0)
            pos.push_back(ar[i]);
        else
            neg.push_back(ar[i]);
    }
    cout<<1<<" "<<neg[0]<<endl,neg[0]=1019;
    if(pos.size()==0)
        cout<<2<<" "<<neg[1]<<" "<<neg[2]<<endl,f=2,neg[1]=neg[2]=1019;
    else
        cout<<1<<" "<<pos[0]<<endl,f=1,pos[0]=1019;
    int x,y;
    x=n-f-1;
    cout<<x<<" ";
    for(int i=0; i<zero.size(); i++)
        cout<<zero[i], i==(zero.size()-1) ? cout<<"":cout<<" ";

          for(int i=0; i<neg.size(); i++)
            if(neg[i]!=1019)
        cout<<" "<<neg[i];

        for(int i=0; i<pos.size(); i++)
        if(pos[i]!=1019)
        cout<<" "<<pos[i];

    cout<<endl;



}