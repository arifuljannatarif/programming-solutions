#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    string s,s1;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='W')
        {
            if(s[i+1]=='U')
            {
                if(s[i+2]=='B')
                {
                    if(s1.size()!=0 && s1[s1.size()-1]!=' ') ///WUB WE WUB ARE WUBWUB THE WUB CHAMPIONSWUBMYWUBFRIENDWUB
                    {
                        s1.push_back(' ');
                    }
                    i+=2;
                    continue;

                }
            }
        }
            s1.push_back(s[i]);
    }
    cout<<s1<<endl;;
}