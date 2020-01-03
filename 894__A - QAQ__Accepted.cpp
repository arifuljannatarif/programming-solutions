#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='Q')
            for(int j=i; j<s.size(); j++)
                if(s[j]=='A')
                    for(int k=j; k<s.size(); k++)
                        if(s[k]=='Q')
                            c++;



    }
    cout<<c<<endl;
}