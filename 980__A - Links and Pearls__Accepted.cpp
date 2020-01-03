#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0,f=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if( s[i]=='o')
            c++;
        else
            f++;

    }

    if(f==0 || c==0 || f%c==0)
        printf("YES\n");
    else
        printf("NO\n");

}