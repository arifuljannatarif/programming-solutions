#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int t1,n;
    scanf("%d",&t1);
    while(t1--)
    {
        scanf("%d",&n);
        cin>>s>>t;
        int c=0,p1=-1,p2;
         for(int i=0;i<n;i++){
                if(s[i]!=t[i] && p1==-1)c++,p1=i;
                else if(s[i]!=t[i])c++,p2=i;
         }
    if(c==2)swap(s[p1],t[p2]);
    s!=t?printf("No\n"):printf("Yes\n");
    }

}