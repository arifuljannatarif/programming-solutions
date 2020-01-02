#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set<string>st;
    int t;
    cin>>t;
    getline(cin,s);
    while(t--)
    {
        getline(cin,s);
        st.insert(s);

    }
    cout<<st.size()<<endl;
}