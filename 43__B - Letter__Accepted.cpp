#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    getline(cin,s);
    getline(cin,s1);
    int ss[20000]= {0};
    for(int i=0; i<s.size(); i++)
        ss[s[i]]++;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]!=' ')
        {
            if(ss[s1[i]]<=0)
                return !printf("NO\n");
            else
                ss[s1[i]]--;
        }

    }
    printf("YES\n");

}