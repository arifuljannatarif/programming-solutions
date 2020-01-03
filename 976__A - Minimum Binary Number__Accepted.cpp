#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    string s,s1="";
    cin>>s;
    for(int i=0;i<s.size();i++)
        if(s[i]=='0')s1+=s[i];
        else
            f=1;
        if(!f)
            printf("0");
        else
        {
            printf("1");
            cout<<s1;
        }
    printf("\n");
}