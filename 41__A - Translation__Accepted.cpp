#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()\
{
    string s ,s1;int j;
    cin>>s>>s1;
    for(int i=0, j=s.size()-1;i<s.size();i++,j--)
    {
        if(s[i]!=s1[j])
        {
            cout<<"NO\n";
            return 0;
        }

    }
    cout<<"YES\n";
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    string s,s1;
    cin>>s>>s1;
    int len=s.size();

    for(i=0,j=len-1; i<s1.size() && j>=0; i++,j--)
    {
        if(s[i]!=s1[j])
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;

}#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()\
{
    string s ,s1;int j;
    cin>>s>>s1;
    for(int i=0, j=s.size()-1;i<s.size();i++,j--)
    {
        if(s[i]!=s1[j])
        {
            cout<<"NO\n";
            return 0;
        }

    }
    cout<<"YES\n";
}