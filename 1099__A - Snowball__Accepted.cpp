#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,u1,d1,u2,d2;
    cin>>w>>h>>u1>>d1>>u2>>d2;
    int i,p;
    for(p=h; p>=0; p--)
    {
        w+=p;
        if(p==d1)w=max(w-u1,0);
        if(p==d2)w=max(w-u2,0);

    }
    cout<<w<<endl;

}