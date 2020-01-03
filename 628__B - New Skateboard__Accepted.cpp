#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    long long int c = 0,i,j,x,k;
    string s;
    cin>>s;
    int l = s.size();
    for(i=0; i<l; i++)
    {
        x = s[i]-'0';
        if(x%4==0)
           {
           c++;

           }
    }

    if(l>=2)
    {
        for(i=0; i<l-1; i++)
        {
            x = (s[i] - '0')*10+(s[i+1]-'0');
            if(x%4==0)
            {
                c+=i+1;
                                                     ///5810438174
            }

        }
    }
    cout<<c<<endl;
}