#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=0;
    for(int i=1; ;i++)
    {
        if(a>0)
            c++;

        a--;
        if(i%b==0)
        {
            a++;

        }
        if(a<=0)break;
    }
    cout<<c<<endl;
    return 0;
}