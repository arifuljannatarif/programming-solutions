#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    char s[n+2];
    scanf("%s",s);
    int c=0,c2=1;
    int ans[35],z=1;
    memset(ans,0,sizeof ans);
    int i=0,cnt=0;
    while(i<n)
    {
        cnt=-0;
        int ch=s[i];
        while(i<n && s[i]==ch)i++,cnt++;
        ans[ch-'a']+=cnt/k;
    }
    int mx=0;
    for(int i=0; i<26; i++)
        if(ans[i]>mx)mx=ans[i];
    cout<<mx<<endl;

}

//aaabbbaabbbzzzzzzzzzzzzzzzzxxxxxxxxxxxxxxxxxxxxxxxxxx