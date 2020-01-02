#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]>96)
    {
        s[0]=s[0]-32;
    }
    cout<<s;
    return 0;
}#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string x;
    cin>>x;

    if(x[0]>90)
        x[0]=x[0]-32;
    cout<<x<<endl;
    return 0;

}