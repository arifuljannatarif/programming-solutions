#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    int cnt=0,l=s.size();
    for(int i=0; i<l; i++)
    {
        if(i<l && s[i]==s[i+1])cnt++,i++;
        else if(st.size() && s[i]==st.top())cnt++,st.pop();
        else st.push(s[i]);

    }
   if(cnt&1)printf("Yes\n");
   else printf("No\n");
}