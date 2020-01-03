#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    string s,s1="RGB";
    scanf("%d",&n);
    cin>>s;s+='X';
    for(int i=1; i<n; i++,k=-1)
        if(s[i-1]==s[i] )
		while(++k<3)if(s1[k]!=s[i-1]&&s1[k]!=s[i+1]){s[i]=s1[k],c++;break;}
    printf("%d\n",c);
    for(int i=0;i<n;i++)cout<<s[i];
    printf("\n");

}#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    string s,s1="RGB";
    scanf("%d",&n);
    cin>>s;s+='X';
    for(int i=1; i<n; i++)
        if(s[i-1]==s[i])
        {
            k=-1;
            while(++k<3)if(s1[k]!=s[i-1]&&s1[k]!=s[i+1])
                {
                    s[i]=s1[k],c++;
                    break;
                }
        }
    printf("%d\n",c);
    for(int i=0;i<n;i++)cout<<s[i];
    printf("\n");

}