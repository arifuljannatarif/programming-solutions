#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int n;
    cin>>n;
    int z=0,o=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')o++;
        else if(s[i]=='0')
            z++;
    }

    if(o==0 || z==0)
        cout<<n<<endl;
    else
        cout<<abs(n-(2*min(z,o)))<<endl;

}