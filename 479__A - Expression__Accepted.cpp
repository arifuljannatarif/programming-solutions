#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx=max(a+b*c,max(max(a+b+c,(a+b)*c),max(a*(b+c),a*b*c)));
    printf("%d\n",mx);
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx=a+b*c;
    mx=max(max(a+b+c,(a+b)*c),max(a*(b+c),a*b*c));
    printf("%d\n",mx);
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx=a+b*c;
    mx=max(mx,a*(b+c));
    mx=max(mx,a*b*c);
    mx=max(mx,(a+b)*c);
    mx=max(a+b+c,mx);
    printf("%d\n",mx);
}