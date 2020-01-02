#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d1,d=0;
    string s;
    cin>>a>>b>>c>>d1>>s;
    for(int i=0; i<s.size(); i++)
    {
        switch(s[i])
        {
            case '1':d+=a;break;
            case '2':d+=b;break;
            case '3':d+=c;break;
            case '4': d+=d1;break;

        }
    }
    cout<<d<<endl;

}