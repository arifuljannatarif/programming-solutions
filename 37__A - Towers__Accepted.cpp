#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[1005]={0};
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        x[c]++;
        s.insert(c);
    }
    int mx=-1;
   for(int i=0;i<1005;i++)
   {
       mx=max(x[i],mx);

   }
    cout<<mx<<" "<<s.size()<<endl;
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[1005]={0};
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        x[c]++;
        s.insert(c);
    }
    int mx=-1;
   for(int i=0;i<1005;i++)
   {
       mx=max(x[i],mx);

   }
    cout<<mx<<" "<<s.size()<<endl;
}