#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,v,li,ri;
    for(scanf("%d",&t); t--;)
    {
        scanf("%d %d %d %d",&l,&v,&li,&ri);
        int lant=l/v;

       if(li%v!=0) li=li+(v-(li%v));
        if(ri%v!=0)ri=ri-((ri%v));
        printf("%d\n",(lant-(ri-li)/v)-1);

    }
}