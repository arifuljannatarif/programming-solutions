#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    set<char>se;
    string s1,s2="";
    cin>>n;
    cin.ignore();
    cin>>s1;

    int len=s1.size();
    for(a=0;a<len;a++)
    {
        s2+= tolower(s1[a]);
    }
    for(int i=0;i<len;i++)
        se.insert(s2[i]);
   int  x=se.size();
   if(x>=26)
    printf("YES\n");
   else
    printf("NO\n");



    return 0;
}