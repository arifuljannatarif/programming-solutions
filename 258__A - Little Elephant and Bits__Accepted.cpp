#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string(s);
    cin>>s;
    int k=s.size();
    bool g=false;

   for(int i=0;i<k;i++)
   {
       if(s[i]=='1')g=true;
       if(g)
       {
           if(s[i]=='0')
           {
               s.erase(i,1);
               break;

           }
       }
   }
   if(k==s.size())
   {
       s.erase(s.size()-1,1);
       cout<<s<<endl;;

   }
   else cout<<s<<endl;
    return 0;
}#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string(s);
    cin>>s;
    int k=s.size();
    bool g=false;

   for(int i=0;i<k;i++)
   {
       if(s[i]=='1')g=true;
       if(g)
       {
           if(s[i]=='0')
           {
               s.erase(i,1);
               break;

           }
       }
   }
   if(k==s.size())
   {
       s.erase(s.size()-1,1);
       cout<<s<<endl;;

   }
   else cout<<s<<endl;
    return 0;
}#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string(s);
    cin>>s;
    int k=s.size();
    bool g=false;

   for(int i=0;i<k;i++)
   {
       if(s[i]=='1')g=true;
       if(g)
       {
           if(s[i]=='0')
           {
               s.erase(i,1);
               break;

           }
       }
   }
   if(k==s.size())
   {
       s.erase(s.size()-1,1);
       cout<<s<<endl;;

   }
   else cout<<s<<endl;
    return 0;
}