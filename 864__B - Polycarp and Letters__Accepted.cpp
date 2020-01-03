#include <bits/stdc++.h>
using namespace std;
int a[150],b[150];
int main()
{
    int t,l,i,j,a[130],ans=0;
    scanf("%d",&t);
    char s[t],s1[t];
    scanf("%s",s);
    l=strlen(s);
    for (i=0; i<l; i++)
    {
        if (islower(s[i]))
        {
            memset(a,0,sizeof(a));
            for (j=i; islower(s[j]); j++)
            {
                if (isupper(s[j]))
                    break;
                a[s[j]]=1;
            }
            int c=0;
            for (j='a'; j<='z'; j++)
                if (a[j]) c++;
            if (c>ans) ans=c;
        }
    }
    printf("%d\n",ans);
    return 0;
}