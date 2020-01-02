#include<bits/stdc++.h>
using namespace std;
int main(){ set<int>s; for(int i=0,a;i<4;i++){cin>>a; s.insert(a);} cout<<4-s.size()<<endl;}#include<bits/stdc++.h>
using namespace std;
int main()
{
    int but,bul;
    set<int>s;

    for(int i=0; i<4; i++)
    {
        int t;
        cin>>t;

        s.insert(t);


    }
    if(s.size()==4)
        cout<<"0\n";
    else
        cout<<4-s.size();
    return 0;
}