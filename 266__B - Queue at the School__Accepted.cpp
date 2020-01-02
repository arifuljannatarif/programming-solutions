#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t1,t;
    cin>>t>>t1;
    cin>>s;
    while(t1--)
        for(int i=0; i<t-1; i++)
            if(s[i]=='B'&&s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }


    cout<<s;
}