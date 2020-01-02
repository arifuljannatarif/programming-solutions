#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string s,s1;
    int a,i,flag=0,o=10000,g,n,j;
    vector<string>x;
    vector<int>y;
    cin>>s;
    g=s.size();
    cin>>a;
    for(i=1; i<=a; i++)
    {
        cin.ignore();
        cin>>s1;
        flag=0;
        for( j=0; j<g; j++)
        {
            if(s[j]==s1[j])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
        {
            x.push_back(s1);

        }

    }
    if(x.size()==0)
    {
        cout<<s;
        return 0;
    }
    sort(x.begin(),x.end());

    cout<<x[0]<<endl;

    return 0;


}