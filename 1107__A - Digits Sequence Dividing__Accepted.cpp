#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;

    cin>>q;
    string s;
    while(q--){
    cin>>n>>s;
    if(n==2 && s[1]<=s[0])printf("NO\n");
    else
    {printf("YES\n2\n");
    printf("%c ",s[0]);
    for(int i=1;i<s.size();i++)
    printf("%c",s[i]);
    printf("\n");}
    }

}