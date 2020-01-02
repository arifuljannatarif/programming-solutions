#include <vector>
#include <string>
#include <sstream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int coun=0,t;
    cin>>t;
    cin>>s;
    for(int i=0;s[i];i++)
    {
        if(s[i]==s[i+1])
        {
            coun++;
        }
    }
    cout<<coun;
    return 0;


}