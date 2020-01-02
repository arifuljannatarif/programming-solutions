#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,g,i,f=0,k,j,c=0;
    cin>>a>>k;

    for(int i=0; i<a; i++)
    {
        f=0;
        string s;
        int arr[100]={0};
        int f=0;
        cin>>s;
        set<int>st;
        for(int j=0; j<s.size(); j++)
        {
            arr[s[j]-'0']++;
        }
        for(int j=0; j<=k; j++)
        {
            if(arr[j]==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)c++;


    }
    cout<<c<<endl;
    return 0;
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,g,i,f=0,k,j,c=0;
    cin>>a>>k;

    for(int i=0; i<a; i++)
    {
        f=0;
        string s;
        int arr[100]={0};
        int f=0;
        cin>>s;
        set<int>st;
        for(int j=0; j<s.size(); j++)
        {
            arr[s[j]-'0']++;
        }
        for(int j=0; j<=k; j++)
        {
            if(arr[j]==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)c++;


    }
    cout<<c<<endl;
    return 0;
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,g,i,f=0,k,j,c=0;
    cin>>a>>k;

    for(int i=0; i<a; i++)
    {
        f=0;
        string s;
        int arr[100]={0};
        int f=0;
        cin>>s;
        set<int>st;
        for(int j=0; j<s.size(); j++)
        {
            arr[s[j]-'0']++;
        }
        for(int j=0; j<=k; j++)
        {
            if(arr[j]==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)c++;


    }
    cout<<c<<endl;
    return 0;
}