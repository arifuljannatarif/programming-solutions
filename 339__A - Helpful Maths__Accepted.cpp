#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k=0;
    string s,s1;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+')
            continue;
        else
        {s1.push_back(s[i]);
        }
    }
    sort(s1.begin(),s1.end());
   for(int i=0;i<s1.size();i++)
   {
       cout<<s1[i];
       if(i!=s1.size()-1)
        cout<<"+";
   }



    return 0;
}